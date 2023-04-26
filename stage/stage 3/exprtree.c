
struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e){

    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    
    switch(nodetype){
        
        case NUM_NODE:
        {
            temp->val = val;
            temp->type = inttype;
            break;
        }
        
        case VAR_NODE:
        {
            temp->varname = malloc(1);
            temp->varname[0] = c[0];
            temp->type = inttype;
            break;
        }

        case MATH_NODE:
        {
            if((l->type != inttype) || (r->type != inttype)){
                printf("Type mismatch\n");
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
                printf("Type mismatch\n");
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

int regs = 0, lab = 0, inwhile = 0;

int getLabel(){
    return lab++;
}

reg_index getReg(){
    if(regs == 21){
        printf("Out of registers");
        exit(1);
    }
    return regs++;
}

reg_index freeReg(){
    if(regs==-1){
        printf("No more regester can be freed");
        exit(1);
    }
    regs--;
    return 1;
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
    
        case NUM_NODE:
        {
            reg1 = getReg();
            fprintf(fp,"MOV R%d, %d\n",reg1,t->val);
            return reg1;
            break;
        }

        case ASSIGN_NODE:
        {
            reg1 = getReg();
            reg2 = codeGen(t->right,fp);
            var_position = (int)(t->left->varname[0]-'a') + 4096;
            fprintf(fp, "MOV R%d, %d\n", reg1, var_position);
            fprintf(fp,"MOV [R%d], R%d\n",reg1,reg2);
            freeReg();
            freeReg();
            return -1;
            break;
        }
        case VAR_NODE:
        {
            reg1 = getReg();
            var_position = (int)(t->varname[0]- 'a') + 4096;
            fprintf(fp,"MOV R%d, %d\n",reg1,var_position);
            fprintf(fp,"MOV R%d, [R%d]\n",reg1,reg1);
            return reg1;
            break;
        }
        case IFELSE_NODE:
        {
            reg1 = codeGen(t->left,fp);
            int label_1 = getLabel();
            fprintf(fp,"JZ R%d, L%d\n",reg1,label_1);
            freeReg();
            reg2 = codeGen(t->right,fp);
            if(t->extra != NULL)
            {
                fprintf(fp,"JMP L%d\n",label_1+1);
                fprintf(fp,"L%d:\n",label_1);
                reg2 = codeGen(t->extra,fp);
                label_1 = getLabel();
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
            return -1;
        }
        case WHILE_NODE:
        {
            inwhile = 1;
            int label_1 = getLabel();
            fprintf(fp,"L%d:\n",label_1);
            reg1 = codeGen(t->left,fp);
            fprintf(fp,"JZ R%d, L%d\n",reg1,label_1+1);
            reg2 = codeGen(t->right,fp);
            fprintf(fp,"JMP L%d\n",label_1);
            fprintf(fp,"L%d:\n",label_1+1);
            int label_2 = getLabel();
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
                fprintf(fp, "NQ R%d, R%d\n", reg1,reg2);
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
            var_position = (int)(t->left->varname[0]- 'a') + 4096;
            fprintf(fp, "MOV R%d, \"Read\"\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, -1\n", reg1);
            fprintf(fp, "PUSH R%d\n", reg1); 
            fprintf(fp, "MOV R%d, %d\n", reg1, var_position);
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
