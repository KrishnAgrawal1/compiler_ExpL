
struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r){
    struct tnode* temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->nodetype = nodetype;
    temp->left = l;
    temp->right = r;
    switch(nodetype){
        
        case NUM_NODE:
        {
            temp->val = val;
            break;
        }
        
        case VAR_NODE:
        {
            temp->varname = malloc(1);
            temp->varname[0] = c[0];
            break;
        }

        case MATH_NODE:
        {
            temp->varname = malloc(1);
            temp->varname[0] = c[0];
            break;
        }
    }
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
			printf("R");
			break;
		
		case WRITE_NODE:
			printf("W");
			break;
		
		case ASSIGN_NODE:
			printf("=");
			break;
		
	}
	printtree(ast->right);
}

int regs = 0;

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
