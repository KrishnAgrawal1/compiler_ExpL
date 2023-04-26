extern struct Gsymbol* gst;
struct Paramstruct* CreateParamlist(int type,char* name)
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

struct Gsymbol* createVarList(char* n, int t, int s, int b, struct Paramstruct* ps)
{
    struct Gsymbol* temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
    temp->name = malloc(sizeof(char)*256);
    strcpy(temp->name,n);
    temp->size = s;
    temp->binding = b;
    temp->flabel = 0;
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
        printf("%-10d%-10s\n",temp->type,temp->name);
        temp = temp->next;
    }
}

void printsymboltable(struct Gsymbol* gst)
{
	struct Gsymbol* temp = gst;
	printf("%-10s%-10s%-10s%-10s%-10s%-10s","NAME","TYPE","SIZE","BINDING","FLABEL\n");
	printf("%-10s%-10s%-10s%-10s%-10s%-10s","----","----","----","----","----\n");
	while(temp!=NULL)
	{
		printf("%-10s%-10d%-10d%-10d%-10d\n",temp->name,temp->type,temp->size,temp->binding,temp->flabel);
        if(temp->paramlist != NULL) printParamlist(temp->paramlist);
		temp=temp->next;
	}
}

struct Gsymbol* lookup(struct Gsymbol* g, char* name)
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

struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e){

    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    
    switch(nodetype){
        
        case NUM_NODE:
        {
            temp->val = val;
            temp->type = inttype;
            break;
        }
        case STRING_NODE:
        {
            temp->type = strtype;
            temp->varname = malloc(sizeof(char)*256);
            strcpy(temp->varname,c);
            break;
        }
        case WRITE_NODE:
        {
            if(l->type != inttype && l->type != strtype)
            {
                printf("Type mismatch in write node\n");
                exit(0);
            }
            break;
        }
        case VAR_NODE:
        {
            temp->Gentry = lookup(gst,c);
            if(temp->Gentry == NULL)
            {
                printf("Variable not declared\n");
                exit(0);
            }
			temp->varname = malloc(sizeof(char)*256);
			strcpy(temp->varname,c);
            temp->type = temp->Gentry->type;
            break;
        }

        case MATH_NODE:
        {
            if((l->type != inttype) || (r->type != inttype)){
                printf("Type mismatch math_node %s %s %s\n",l->varname,c,r->varname);
                exit(0);
            }
            temp->varname = malloc(1);
            temp->type = inttype;
            temp->varname[0] = c[0];
            break;
        }

        case BOOL_NODE:
        {
            if((l->type != inttype) || (r->type != inttype)){
                printf("Type mismatch bool_node\n");
                exit(0);
            }
            temp->varname = malloc(2);
            temp->type = booltype;
            temp->varname = c;
            break;
        }
        case IFELSE_NODE:
        {
            if(l->type != booltype){
                printf("Type mismatch\n");
                exit(0);
            }
            break;
        }
        case WHILE_NODE:
        {
            if(l->type != booltype){
                printf("Type mismatch\n");
                exit(0);
            }
            break;
        }
        case ASSIGN_NODE:
        {
            if(l->type == inttype)
            {
                if(r->type == inttype) break;
                else
                {
                    printf("type mismatch int != str\n");
                    exit(0);
                }
            }
            if(l->type == strtype)
            {
                if(r->type == strtype) break;
                else
                {
                    printf("type mismatch str != int\n");
                    exit(0);
                }
            }
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

int findposition(struct tnode *t, FILE* fp)
{
    if(t->left == NULL)
    {
        int var_position = t->Gentry->binding;
    }
    else if(t->left != NULL && t->right == NULL)
    {
        if(t->left->nodetype == NUM_NODE)
        {
            int var_position = t->Gentry->binding;
            var_position += t->left->val;
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

reg_index codeGen(struct tnode *t, FILE* fp) {
    int reg1,reg2,reg3;
    int var_position;
    if(t == NULL)
    {
        return -1;
    }
    switch (t->nodetype)
    {
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
            var_position = findposition(t->left,fp);
            if(var_position > 20)
            {
                reg1 = getReg();
                fprintf(fp, "MOV R%d, %d\n", reg1, var_position);
                fprintf(fp,"MOV [R%d], R%d\n",reg1,reg2);
            } 
            else
            {
                fprintf(fp,"MOV [R%d], R%d\n",var_position,reg2);
                reg1 = var_position;
            }
            freeReg();
            freeReg();
            return -1;
            break;
        }
        case VAR_NODE:
        {
            var_position = findposition(t,fp);
            if(var_position > 20)
            {
                reg1 = getReg();
                fprintf(fp,"MOV R%d, %d\n",reg1,var_position);
                fprintf(fp,"MOV R%d, [R%d]\n",reg1,reg1);
            } 
            else
            {
                fprintf(fp,"MOV R%d, [R%d]\n",var_position,var_position);
                reg1 = var_position;
            }
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
            if(inwhile) fprintf(fp,"JMP L%d\n",lab-1);
            return -1;
        }
        case BREAK_NODE:
        {
            if(inwhile) fprintf(fp,"JMP L%d\n",lab);
            return -1;
        }
        case DOWHILE_NODE:
        {
            inwhile = 1;
            int label_1 = getLabel();
            fprintf(fp,"L%d:\n",label_1);
            reg2 = codeGen(t->right,fp);
            reg1 = codeGen(t->left,fp);
            fprintf(fp,"JNZ R%d, L%d\n",reg1,label_1);
            fprintf(fp,"L%d:\n",label_1+1);
            int label_2 = getLabel();
            inwhile = 0;
            freeReg();
            return -1;
        }
        case WHILE_NODE:
        {
            inwhile = 1;
            int label_1 = getLabel();
            int label_2 = getLabel();
            fprintf(fp,"L%d:\n",label_1);
            reg1 = codeGen(t->left,fp);
            fprintf(fp,"JZ R%d, L%d\n",reg1,label_2);
            freeReg();
            reg2 = codeGen(t->right,fp);
            fprintf(fp,"JMP L%d\n",label_1);
            fprintf(fp,"L%d:\n",label_2);
            inwhile = 0;
            return -1;
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
            var_position = findposition(t->left,fp);
            fprintf(fp, "MOV R%d, \"Read\"\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, -1\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            if(var_position > 20)
            {
                fprintf(fp, "MOV R%d, %d\n", reg1, var_position);
            }
            else
            {
                fprintf(fp, "MOV R%d, R%d\n", reg1, var_position);
                freeReg();
            }
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

        case EMPTY_NODE:
        {
            reg1 = codeGen(t->left,fp);
            reg1 = codeGen(t->right,fp);
            return reg1;
            break;
        }
    }

}
