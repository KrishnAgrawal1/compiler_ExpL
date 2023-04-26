typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct tnode *left,*right, *extra;  // left and right branches
}tnode;
	
struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e);

void printtree(struct tnode* tnode);

#define MATH_NODE 1
#define READ_NODE 2
#define WRITE_NODE 3
#define EMPTY_NODE 4
#define ASSIGN_NODE 5
#define VAR_NODE 6
#define NUM_NODE 7
#define BOOL_NODE 8
#define IFELSE_NODE 9
#define WHILE_NODE 10
#define CONTINUE_NODE 11
#define BREAK_NODE 12
#define DOWHILE_NODE 13

#define inttype 1
#define booltype 0

#define reg_index int

reg_index codeGen(struct tnode* t,FILE* fp);
reg_index getReg();
reg_index freeReg();

int getLabel();
