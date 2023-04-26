typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct tnode *left,*right;  // left and right branches
}tnode;
	
struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r);

void printtree(struct tnode* tnode);
/*	
int getReg();

void freeReg();

int codeGen( struct tnode *t);
*/
#define MATH_NODE 1
#define READ_NODE 2
#define WRITE_NODE 3
#define EMPTY_NODE 4
#define ASSIGN_NODE 5
#define VAR_NODE 6
#define NUM_NODE 7

#define reg_index int

reg_index codeGen(struct tnode* t,FILE* fp);
reg_index getReg();
reg_index freeReg();
