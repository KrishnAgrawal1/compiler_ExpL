extern FILE *fp;
struct tnode* makeLeafNode(int n)
{
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = NULL;
    temp->val = n;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
    struct tnode *temp;
    temp = (struct tnode*)malloc(sizeof(struct tnode));
    temp->op = malloc(sizeof(char));
    *(temp->op) = c;
    temp->left = l;
    temp->right = r;
    return temp;
}

int evaluate(struct tnode *t){
    if(t->op == NULL)
    {
        return t->val;
    }
    else{
        switch(*(t->op)){
            case '+' : return evaluate(t->left) + evaluate(t->right);
                       break;
            case '-' : return evaluate(t->left) - evaluate(t->right);
                       break;
            case '*' : return evaluate(t->left) * evaluate(t->right);
                       break;
            case '/' : return evaluate(t->left) / evaluate(t->right);
                       break;
        }
    }
}

int r=0;

int getReg(){
    r++;
    return r-1;
}

void freeReg(){
    if(r==0) return;
    r--;
}

int codeGen(struct tnode *t) {
    if(t->op == NULL)
    {
        int p = getReg();
        fprintf(fp, "MOV R%d, %d\n", p,t->val);
        return r-1;
    }
    else{
        codeGen(t->left);
        codeGen(t->right);
        switch(*(t->op)){
            case '+' : fprintf(fp, "ADD R%d, R%d\n", r-2,r-1);
                       break;
            case '-' : fprintf(fp, "SUB R%d, R%d\n", r-2,r-1);
                       break;
            case '*' : fprintf(fp, "MUL R%d, R%d\n", r-2,r-1);
                       break;
            case '/' : fprintf(fp, "DIV R%d, R%d\n", r-2,r-1);
                       break;
        }

        freeReg();
        return r-1;
    }
}