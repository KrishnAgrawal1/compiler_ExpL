extern struct Gsymbol* gst;
extern struct Lsymbol* lst;
extern struct Paramstruct *para; 
extern struct Typetable *TypeT;

struct Fieldlist* findField(struct Typetable* type, char* name)
{
    struct Fieldlist* temp = type->fields;
    if(temp == NULL){ printf("field is null \n");}
    while(temp != NULL)
    {
        if(strcmp(temp->name,name) == 0) return temp;
        temp = temp->next;
    }
    return NULL;
}

void printTypeTable()
{
    struct Typetable *t = TypeT;
    printf("%s\t%s\n","NAME","SIZE");
	printf("%s\t%s\n","----","----");
    while(t != NULL)
    {
        printf("%s\t%d\n",t->name,t->size);
        struct Fieldlist *f = t->fields;
        if(f != NULL)
        {
            printf("%s\t%s\n","NAME","FIELDINDEX");
	        printf("%s\t%s\n","----","----");
            while(f != NULL)
            {
                printf("%s\t%d\n",f->name,f->fieldIndex);
                f = f->next;
            }
        }
        t = t->next;
    }
}

int FI_size = 1;
void FInstall(struct Typetable* temp, struct tnode* tn)
{
    if(tn == NULL) return;
    FInstall(temp,tn->left);
    struct Fieldlist *f = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
    f->name = malloc(sizeof(char)*256);
    strcpy(f->name,tn->varname);
    f->type = findType(tn->right->varname);
    if(f->type == NULL)
    {
        printf("wrong type decleration\n");
        exit(0);
    }
    f->fieldIndex = FI_size++;

    if(temp->fields == NULL) temp->fields = f;
    else
    {
        struct Fieldlist *f1 = temp->fields;
        while(f1->next != NULL) f1 = f1->next;
        f1->next = f;
    }
}

struct Typetable* findType(char* name)
{
    struct Typetable* t = TypeT;
    while(t != NULL)
    {
        if(strcmp(t->name,name) == 0) return t;
        t = t->next;
    }
    return NULL;
}

struct Typetable* createTypeTable(struct tnode* temp)
{
    struct Typetable* t1 = NULL;
    int a = 0;
    while(a != 4)
    {
        struct Typetable* ty = (struct Typetable*)malloc(sizeof(struct Typetable));
        ty->size = 1;
        ty->name = malloc(10);
        if(a == 0) strcpy(ty->name,"int");
        else if (a == 1) strcpy(ty->name,"str");
        else if (a == 2) strcpy(ty->name,"bool");
        else if (a == 3) strcpy(ty->name,"void");
        a++;
        if(t1 == NULL)
        {
            t1 = ty;
            TypeT = t1;
        } 
        else 
        {
            t1->next = ty;
            t1 = t1->next;
        }
    }

    struct tnode* t = temp;
    while(t != NULL)
    {
        struct Typetable* t2 = (struct Typetable*)malloc(sizeof(struct Typetable));
        t2->name = malloc(sizeof(char)*256);
        strcpy(t2->name,t->varname);
        t2->size = 0;
        t1->next = t2;
        t1 = t1->next;

        t = t->right;
    }

    t = temp;
    while(t != NULL)
    {
        FI_size = 1;
        struct Typetable* tt = findType(t->varname);
        FInstall(tt,t->left);
        tt->size = FI_size - 1;
        if(tt->size > 8)
        {
            printf("user defined type %s has size more than 8\n",t->varname);
            exit(0);
        }
        t = t->right;
    }

    printTypeTable();

    return TypeT;
}

struct Lsymbol* localdecal(struct Lsymbol* l, struct Paramstruct *pa)
{
    struct Lsymbol *t = l;
	int b = 1, c = -3;
	while(t!=NULL)
	{
		t->binding = b++;
		t = t->next;
	}
	struct Paramstruct *p = pa;
	while(p != NULL)
	{
		l = joinLVnode(LInstall(p->name, p->type),l);
		p = p->next;
		l -> binding = c--;
	} 
    return l;
}

void FunCheck(char* name, struct Typetable *type, struct Paramstruct *parameter)
{
    struct Gsymbol* temp = gst;
    while(temp != NULL)
    {
        if(strcmp(temp->name,name)==0)
        {
            if(temp->type != type)
            {
                printf("%s type does not match\n",name);
                exit(0);
            }
            struct Paramstruct* t1 = temp->paramlist;
            struct Paramstruct* t2 = parameter;
            while(t1 != NULL && t2 != NULL)
            {
                if(strcmp(t1->name,t2->name)==0 && t1->type == t2->type)
                {
                    t1 = t1->next;
                    t2 = t2->next;
                    continue;
                }
                printf("%s parameter not defined correctly\n",name);
                exit(0);
            }
            if(t1 != NULL || t2 != NULL)
            {
                printf("%s parameter not defined correctly\n",name);
                exit(0);
            }
            return;
        }
        temp = temp->next;
    }
    printf("%s does not exist\n",name);
}

void FunASTgen(char* name, struct Typetable *type, struct Paramstruct *parameter, struct Lsymbol *Lsymbols, struct tnode *ast, FILE* fp)
{
    if(type != ast->right->left->type)
    {
        printf("Return value does not match function type\n");
        printf("%s , %s\n",type->name,ast->right->left->type->name);
        exit(0);
    }
    if(strcmp(name,"main") != 0) FunCheck(name, type, parameter);
    printLsymboltable(Lsymbols); 
    printtree(ast);
    printf("\n");

    if(strcmp(name,"main") != 0)
    {
        struct Gsymbol* temp = gst;
        while(temp != NULL)
        {
            if(strcmp(temp->name,name)==0)
            {
                fprintf(fp,"F%d:\n",1+temp->flabel);
                break;
            }
            temp = temp->next;
        }
        fprintf(fp,"PUSH BP\n");
        fprintf(fp,"MOV BP, SP\n");

        struct Lsymbol *l = Lsymbols;
        int n = 0;
        while(l != NULL){n = l->binding; l = l->next;}
        if(n<0) n=0;
        fprintf(fp, "MOV R0, BP\n");
        fprintf(fp, "ADD SP, %d\n",n);
        codeGen(ast,fp);
        fprintf(fp,"RET\n");
    }
    else
    {
        ast->right = NULL;
        struct Lsymbol *l = Lsymbols;
        int n = 0;
        while(l != NULL){n = l->binding; l = l->next;}
        fprintf(fp, "MOV SP, BP\n");
        fprintf(fp, "ADD SP, %d\n",n);
        codeGen(ast,fp);
        fprintf(fp, "INT 10");
    }
}

void printLsymboltable(struct Lsymbol* Lst)
{
	struct Lsymbol* temp = Lst;
	printf("%s\t%s\t%s\n","NAME","TYPE","BINDING");
	printf("%s\t%s\t%s\n","----","----","----");
	while(temp!=NULL)
	{
		printf("%s\t%s\t%d\n",temp->name,temp->type->name,temp->binding);
        temp = temp->next;
	}
}

void findLID(struct Lsymbol* ne)
{
    struct Lsymbol* t1 = ne;
    struct Lsymbol* t2;
    while(t1->next != NULL)
    {
        t2 = t1->next;
        while(t2 != NULL)
        {
            if(strcmp(t1->name,t2->name) == 0)
            {
                printf(" syntex error: variable declared twice\n");
                exit(1);
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
}

struct Lsymbol* joinLVnode(struct Lsymbol* a, struct Lsymbol* b)
{
    if( a == NULL ) return b;
    struct Lsymbol* temp = a;
    while (temp->next != NULL) temp = temp->next;
    temp->next = b;
    return a;
}

struct Lsymbol* LInstall(char *name, struct Typetable *type)
{
    struct Lsymbol* temp = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
    temp->name = malloc(sizeof(char)*256);
    strcpy(temp->name,name);
    temp->type = type;
    temp->next = NULL;
    temp->binding = -1;
    return temp;
}

struct Paramstruct* CreateParamlist(struct Typetable *type,char* name)
{
    struct Paramstruct* temp = (struct Paramstruct*)malloc(sizeof(struct Paramstruct));
    temp->name = malloc(sizeof(char)*256);
    strcpy(temp->name,name);
    temp->type = type;
    temp->next = NULL;
    return temp;
}

struct Paramstruct* AppendParamlist(struct Paramstruct* a,struct Paramstruct* b)
{
    struct Paramstruct* temp = a;
    while(temp->next != NULL) temp = temp->next;
    temp->next = b;
    return a;
}

void findparam(struct Paramstruct* p)
{
    struct Paramstruct* t1 = p;
    struct Paramstruct* t2;
    while(t1->next != NULL)
    {
        t2 = t1->next;
        while(t2 != NULL)
        {
            if(strcmp(t1->name,t2->name) == 0)
            {
                printf(" syntex error: variable declared twice\n");
                exit(1);
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
}

struct Gsymbol* createVarList(char* n, int t, int s, int b, struct Paramstruct* ps, int f)
{
    struct Gsymbol* temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    temp->name = malloc(sizeof(char)*256);
    strcpy(temp->name,n);
    temp->size = s;
    temp->binding = b;
    temp->flabel = f;
    temp->paramlist = ps;
    temp->next = NULL;
    return temp;
}

void findID(struct Gsymbol* ne)
{
    struct Gsymbol* t1 = ne;
    struct Gsymbol* t2;
    while(t1->next != NULL)
    {
        t2 = t1->next;
        while(t2 != NULL)
        {
            if(strcmp(t1->name,t2->name) == 0)
            {
                printf(" syntex error: variable declared twice\n");
                exit(1);
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
}

struct Gsymbol* joinnode(struct Gsymbol* a, struct Gsymbol* b)
{
    struct Gsymbol* temp = a;
    while (temp->next != NULL) temp = temp->next;
    temp->next = b;
    return a;    
}

void printParamlist(struct Paramstruct* ps)
{
    struct Paramstruct* temp = ps;
    printf("%-10s%-10s","TYPE","NAME\n");
    printf("%-10s%-10s","----","----\n");
    while(temp != NULL)
    {
        printf("%-10s%-10s\n",temp->type->name,temp->name);
        temp = temp->next;
    }
}

void printsymboltable(struct Gsymbol* gst)
{
	struct Gsymbol* temp = gst;
	printf("%-10s%-10s%-10s%-10s%-10s%-10s\n","NAME","TYPE","SIZE","BINDING","FLABEL");
	printf("%-10s%-10s%-10s%-10s%-10s%-10s\n","----","----","----","----","----");
	while(temp!=NULL)
	{
		printf("%-10s%-10s%-10d%-10d%-10d\n",temp->name,temp->type->name,temp->size,temp->binding,temp->flabel);
        if(temp->paramlist != NULL) printParamlist(temp->paramlist);
		temp=temp->next;
	}
}

struct Gsymbol* lookupG(struct Gsymbol* g, char* name)
{
    struct Gsymbol* temp = g;
    while( temp != NULL)
    {
        if(strcmp(temp->name,name)==0)
        {
            return temp;
        }
        temp =temp->next;
    }
    return NULL;
}

struct Lsymbol* lookupL(struct Lsymbol* l, char* name)
{
    struct Lsymbol* t = l;
    while( t != NULL)
    {
        if(strcmp(t->name,name)==0)
        {
            return t;
        }
        t =t->next;
    }
    return NULL;
}

struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e){

    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    
    switch(nodetype){
        case FREE_NODE:
        {
            if(strcmp(l->type->name ,"int") == 0 || strcmp(l->type->name ,"str") == 0)
            {
                printf("memory cant be freed as variable is %s type\n",l->type->name);
                exit(0);
            }
            break;
        }
        case ALLOC_NODE:
        {
            if(strcmp(l->type->name ,"int") == 0 || strcmp(l->type->name ,"str") == 0)
            {
                printf("memory cant be allocked to %s variable\n",l->type->name);
                exit(0);
            }
            break;
        }
        case NULL_NODE:
        {
            temp->type = findType("void");
            break;
        }
        case FIELD_NODE:
        {
            if(findField(l->type,c) == NULL) 
	  		{
				printf("field %s does not exist\n",c);
				exit(0);
			}
            temp->type = findField(l->type,c)->type;
            temp->varname = malloc(sizeof(char)*256);
            strcpy(temp->varname,c);
            break;
        }
        case TYPE_TREE_NODE:
        {
            temp->varname = malloc(sizeof(char)*256);
			strcpy(temp->varname,c);
            temp->type = NULL;
            break;
        }
        case FUNCTION_NODE:
        {
            temp->Gentry = lookupG(gst,c);
            if(temp->Gentry == NULL)
            {
                printf("Function not declared\n");
                exit(0);
            }
            struct tnode* t = l;
            struct Paramstruct *p = temp->Gentry->paramlist;
            while(t != NULL || p != NULL)
            {
                if(t == NULL || p == NULL)
                {
                    printf("Function parameters does not match: different number of parameter\n");
                    exit(0);
                }
                if( t->type != p->type)
                {
                    printf("Function parameters does not match: different type of parameter\n");
                    exit(0);
                }
                t = t->extra;
                p = p->next;
            }
            temp->type = temp->Gentry->type;
            temp->varname = malloc(sizeof(char)*256);
			strcpy(temp->varname,c);
            break;
        }
        case NUM_NODE:
        {
            temp->val = val;
            temp->type = findType("int");
            break;
        }
        case STRING_NODE:
        {
            temp->type = findType("str");
            temp->varname = malloc(sizeof(char)*256);
            strcpy(temp->varname,c);
            break;
        }
        case WRITE_NODE:
        {
            if(strcmp(l->type->name ,"int") == 0 && strcmp(l->type->name ,"str") == 0)
            {
                printf("Type mismatch in write node\n");
                exit(0);
            }
            break;
        }
        case VAR_NODE:
        {
            temp->Gentry = lookupG(gst,c);
            temp->Lentry = lookupL(lst,c);
            temp->Lentry = lookupL(lst,c);
            if(temp->Gentry == NULL && temp->Lentry == NULL)
            {
                printf("Variable %s not declared\n", c);
                exit(0);
            }
			temp->varname = malloc(sizeof(char)*256);
			strcpy(temp->varname,c);
            if(temp->Lentry != NULL) temp->type = temp->Lentry->type;
            else if(temp->Gentry != NULL)temp->type = temp->Gentry->type;
            break;
        }

        case MATH_NODE:
        {
            if((strcmp(l->type->name ,"int") != 0) || (strcmp(r->type->name ,"int") != 0))
            {
                printf("Type mismatch math_node %s %s %s\n",l->varname,c,r->varname);
                exit(0);
            }
            temp->varname = malloc(1);
            temp->type = findType("int");
            temp->varname[0] = c[0];
            break;
        }

        case BOOL_NODE:
        {
            if((strcmp(l->type->name ,"void") != 0) && (strcmp(r->type->name ,"void") != 0))
            {
                if((l->type != r->type))
                {
                    printf("Type mismatch bool_node\n");
                    exit(0);
                }
            }
            temp->varname = malloc(2);
            temp->type = findType("bool");
            temp->varname = c;
            break;
        }
        case IFELSE_NODE:
        {
            if(strcmp(l->type->name ,"bool") != 0)
            {
                printf("Type mismatch\n");
                exit(0);
            }
            break;
        }
        case WHILE_NODE:
        {
            if(strcmp(l->type->name ,"bool") != 0)
            {
                printf("Type mismatch\n");
                exit(0);
            }
            break;
        }
        case LOGICAL_NODE:
        {
            if(strcmp(l->type->name ,"bool") != 0 || strcmp(r->type->name ,"bool") != 0)
            {
                printf("Logical operator used incorrectly\n");
                exit(0);
            }
            temp->type = findType("bool");
            break;
        }
        case ASSIGN_NODE:
        {
            if(strcmp(r->type->name ,"void") == 0)
            {
                if(l->type->name == "int" || l->type->name == "str")
                {
                    printf("type mismatch %s != null\n",l->type->name);
                    exit(0);
                }
            }
            else
            {
                if(l->type != r->type)
                {
                    printf("type mismatch %s != %s\n",l->type->name,r->type->name);
                    exit(0);
                }
            }
            break;
        }
    }

    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    temp->extra = e;
    return temp;
}

void printtree(struct tnode* ast)
{
	if(ast == NULL)	return;
    
	printtree(ast->left);
	switch(ast->nodetype)
	{
        case TYPE_TREE_NODE:
            printf("%s ",ast->varname);
            break;

		case NUM_NODE:
			printf("%d ",ast->val);
			break;
		
		case VAR_NODE:
			printf("%c ",ast->varname[0]);
			break;
		
		case MATH_NODE:
			printf("%c ",ast->varname[0]);
			break;
		
		case EMPTY_NODE:
			printf("O ");
			break;
		
		case READ_NODE:
			printf("Read");
			break;
		
		case WRITE_NODE:
			printf("Write");
			break;
		
		case ASSIGN_NODE:
			printf("=");
			break;
        
        case BOOL_NODE:
            printf("%s ",ast->varname);
			break;
        
        case IFELSE_NODE:
            printf(" ifelse ");
            break;
        
		case WHILE_NODE:
            printf(" while ");
            break;
	}
	printtree(ast->right);
    printtree(ast->extra);
}

int regs = -1, lab = 1, inwhile = 0;
int lable[100];

int getLabel(){
    return lab++;
}

reg_index getReg(){
    if(regs == 20){
        printf("Out of registers");
        exit(1);
    }
    return ++regs;
}

reg_index freeReg(){
    if(regs==-1){
        printf("\nNo more regester can be freed\n");
        return 0;
    }
    --regs;
    return 1;
}

int find_position_field(struct tnode *t, FILE* fp)
{
    if(t->nodetype == VAR_NODE)
    {
        int i = findposition(t,fp);
        return i;
    }
    else
    {
        int var = find_position_field(t->left,fp);
        fprintf(fp,"MOV R%d, [R%d]\n",var,var);

        struct Fieldlist* fil = findField(t->left->type,t->varname);
        int position_field = fil->fieldIndex;
        fprintf(fp,"ADD R%d, %d\n",var,position_field-1);        
        
        return var;
    }
}

int findposition(struct tnode *t, FILE* fp)
{
    if(t->left == NULL)
    {
        int var;
        if(t->Lentry != NULL)
        {
            var = t->Lentry->binding;
            int reg = getReg();
            fprintf(fp,"MOV R%d, BP\n",reg);
            fprintf(fp,"ADD R%d, %d\n",reg,var);
            return reg;
        }
        if(t->Gentry != NULL)
        {
            var = t->Gentry->binding;
            int reg = getReg();
            fprintf(fp,"MOV R%d, %d\n",reg,var);
            return reg;
        }
    }
    else if(t->left != NULL)
    {
        if(t->left->nodetype == NUM_NODE)
        {
            int var_position = t->Gentry->binding;
            var_position += t->left->val;
            int reg = getReg();
            fprintf(fp,"ADD R%d, %d\n",reg,var_position);
            return reg;
        }
        else
        {
            int reg = codeGen(t->left,fp);
            int var_position = t->Gentry->binding;
            int reg1 = getReg();
            fprintf(fp,"MOV R%d, %d\n",reg1,var_position);
            fprintf(fp,"ADD R%d, R%d\n",reg,reg1);
            freeReg();
            return reg;
        }
    }
}

void pushparam(struct tnode *t, FILE *fp)
{
    if(t == NULL) return;
    pushparam(t->extra,fp);
    int reg1 = codeGen(t,fp);
    fprintf(fp,"PUSH R%d\n",reg1); 
    freeReg();
}

void popparam(struct tnode *t, FILE *fp)
{
    if(t == NULL) return;
    popparam(t->extra,fp);
    fprintf(fp,"POP R19\n");
}

reg_index codeGen(struct tnode *t, FILE* fp) {
    int reg1,reg2,reg3;
    int var_position;
    if(t == NULL)
    {
        return -1;
    }
    switch (t->nodetype)
    {
        case BRKP_NODE:
        {
            fprintf(fp,"brkp\n");
            return -1;
        }
        case RETURN_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg2 = getReg();
            fprintf(fp,"MOV R%d, BP\n",reg2);
            fprintf(fp,"ADD R%d, -2\n",reg2);
            fprintf(fp,"MOV [R%d], R%d\n",reg2,reg1);
            freeReg();
            freeReg();
            fprintf(fp,"MOV SP, BP\n");
            fprintf(fp,"MOV BP, [BP]\n");
            fprintf(fp,"POP R0\n");
            return 0;
        }
        case FUNCTION_NODE:
        {
            int n = 0;
            while(regs > -1)
            {
                fprintf(fp,"PUSH R%d\n",regs);
                regs--; n++;
            }
            pushparam(t->left,fp);
            fprintf(fp,"PUSH R0\n");
            fprintf(fp,"CALL F%d\n",1+t->Gentry->flabel);
            fprintf(fp,"POP R%d\n",n);
            popparam(t->left,fp);
            while (n > 0)
            {
                fprintf(fp,"POP R%d\n",--n);
                regs++;
            }
            reg1 = getReg();
            return reg1;
            break;
        }

        case STRING_NODE:
        {
            reg1 = getReg();
            fprintf(fp,"MOV R%d, %s\n",reg1,t->varname);
            return reg1;
            break;
        }

        case NUM_NODE:
        {
            reg1 = getReg();
            fprintf(fp,"MOV R%d, %d\n",reg1,t->val);
            return reg1;
            break;
        }

        case ASSIGN_NODE:
        {
            reg2 = codeGen(t->right,fp);
            var_position = find_position_field(t->left,fp);
            fprintf(fp,"MOV [R%d], R%d\n",var_position,reg2);
            reg1 = var_position;
            freeReg();
            freeReg();
            return -1;
            break;
        }
        case VAR_NODE:
        {
            var_position = find_position_field(t,fp);
            fprintf(fp,"MOV R%d, [R%d]\n",var_position,var_position);
            reg1 = var_position;
            return reg1;
            break;
        }
        case IFELSE_NODE:
        {
            reg1 = codeGen(t->left,fp);
            int label_1 = getLabel();
            int label_2 = getLabel();
            fprintf(fp,"JZ R%d, L%d\n",reg1,label_1);
            freeReg();
            reg2 = codeGen(t->right,fp);
            if(t->extra != NULL)
            {
                fprintf(fp,"JMP L%d\n",label_2);
                fprintf(fp,"L%d:\n",label_1);
                reg2 = codeGen(t->extra,fp);
                label_1 = label_2;
            }
            fprintf(fp,"L%d:\n",label_1);
            return -1;
        }
        case CONTINUE_NODE:
        {
            if(inwhile) fprintf(fp,"JMP L%d\n",lable[inwhile]);
            return -1;
        }
        case BREAK_NODE:
        {
            if(inwhile) fprintf(fp,"JMP L%d\n",lable[inwhile]+1);
            return -1;
        }
        case DOWHILE_NODE:
        {
            inwhile++;
            int label_1 = getLabel();
            int label_2 = getLabel();
            lable[inwhile] = label_1;
            fprintf(fp,"L%d:\n",label_1);
            reg2 = codeGen(t->right,fp);
            reg1 = codeGen(t->left,fp);
            fprintf(fp,"JNZ R%d, L%d\n",reg1,label_1);
            fprintf(fp,"L%d:\n",label_2);
            inwhile--;
            freeReg();
            return -1;
        }
        case WHILE_NODE:
        {
            inwhile++;
            int label_1 = getLabel();
            lable[inwhile] = label_1;
            int label_2 = getLabel();
            fprintf(fp,"L%d:\n",label_1);
            reg1 = codeGen(t->left,fp);
            fprintf(fp,"JZ R%d, L%d\n",reg1,label_2);
            freeReg();
            reg2 = codeGen(t->right,fp);
            fprintf(fp,"JMP L%d\n",label_1);
            fprintf(fp,"L%d:\n",label_2);
            inwhile--;
            return -1;
        }
        case LOGICAL_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg2 = codeGen(t->right,fp);
            if( t->varname == "&&" )
            {
                fprintf(fp, "AND R%d, R%d\n", reg1,reg2);
            }
            if( t->varname == "||" )
            {
                fprintf(fp, "OR R%d, R%d\n", reg1,reg2);
            }
            freeReg();
            return reg1;
        }
        case BOOL_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg2 = codeGen(t->right,fp);
            if(t->varname == "<")
            {
                fprintf(fp, "LT R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            else if (t->varname == "<=")
            {
                fprintf(fp, "LE R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            else if (t->varname == ">")
            {
                fprintf(fp, "GT R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            else if (t->varname == ">=")
            {
                fprintf(fp, "GE R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            else if (t->varname == "==")
            {
                fprintf(fp, "EQ R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            else if (t->varname == "!=")
            {
                fprintf(fp, "NE R%d, R%d\n", reg1,reg2);
                freeReg();
            }
            
            return reg1;
        }
        case MATH_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg2 = codeGen(t->right,fp);
            switch(*(t->varname))
            {
                case '+' : fprintf(fp, "ADD R%d, R%d\n", reg1,reg2);
                        freeReg();
                        break;
                case '-' : fprintf(fp, "SUB R%d, R%d\n", reg1,reg2);
                        freeReg();
                        break;
                case '*' : fprintf(fp, "MUL R%d, R%d\n", reg1,reg2);
                        freeReg();
                        break;
                case '/' : fprintf(fp, "DIV R%d, R%d\n", reg1,reg2);
                        freeReg();
                        break;
                case '%' : fprintf(fp, "MOD R%d, R%d\n", reg1,reg2);
                        freeReg();
                        break;
            }

            return reg1;
            break;
        }

        case NULL_NODE:
        {
            reg1 = getReg();
            fprintf(fp,"MOV R%d, 0\n",reg1);
            return reg1;
        }

        case FIELD_NODE:
        {
            reg1 = find_position_field(t,fp);
            fprintf(fp,"MOV R%d, [R%d]\n",reg1,reg1);
            return reg1;
        }

        case WRITE_NODE:
        {
            reg1 = getReg();
            reg2 = codeGen(t->left, fp);
            fprintf(fp, "MOV R%d, \"Write\"\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, -2\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, R%d\n", reg1, reg2);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "PUSH R%d\n", reg1);
            fprintf(fp, "CALL 0\n");
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            freeReg();
            freeReg();
            return -1;
        }

        case READ_NODE:
        {
            reg1 = getReg();
            reg2 = find_position_field(t->left,fp);
            fprintf(fp, "MOV R%d, \"Read\"\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, -1\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            
            fprintf(fp, "MOV R%d, R%d\n", reg1 , reg2);
            freeReg();

            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "CALL 0\n");
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            fprintf(fp, "POP R%d\n", reg1);
            freeReg();
            return -1;
        }

        case INITIALIZE_NODE:
        {
            fprintf(fp, "MOV R%d, \"Initialize\"\n",0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "CALL 0\n");
            fprintf(fp, "POP R%d\n", 0);               
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);
             
            return -1;
        }

        case ALLOC_NODE:
        {
            reg1 = getReg();
            reg2 = getReg();

            fprintf(fp, "MOV R%d, \"Alloc\"\n",reg2);
            fprintf(fp, "PUSH R%d\n", reg2);
            fprintf(fp, "PUSH R%d\n", reg2);
            fprintf(fp, "PUSH R%d\n", reg2);
            fprintf(fp, "PUSH R%d\n", reg2);
            fprintf(fp, "PUSH R%d\n", reg2);
            fprintf(fp, "CALL 0\n");
            fprintf(fp, "POP R%d\n", reg1);               
            fprintf(fp, "POP R%d\n", reg2);
            fprintf(fp, "POP R%d\n", reg2);
            fprintf(fp, "POP R%d\n", reg2);
            fprintf(fp, "POP R%d\n", reg2);
            freeReg();

            reg2 = find_position_field(t->left,fp);
            fprintf(fp, "MOV [R%d], R%d\n",reg2,reg1);

            freeReg();
            freeReg();

            return -1;
        }

        case FREE_NODE:
        {
            reg2 = find_position_field(t->left,fp);
            
            fprintf(fp, "MOV R%d, \"Free\"\n",0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "MOV R%d, R%d\n",0,reg2);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "PUSH R%d\n", 0);
            fprintf(fp, "CALL 0\n");
            fprintf(fp, "POP R%d\n", 0);               
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);
            fprintf(fp, "POP R%d\n", 0);

            freeReg();
            return -1;
        }

        case EMPTY_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg1 = codeGen(t->right,fp);
            return reg1;
            break;
        }
    }
}
