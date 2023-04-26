struct Paramstruct {
    char* name;
    int type;
    struct Paramstruct* next;
};
struct Gsymbol {
    char* name;  // name of the variable
    int type;    // type of the variable
    int size;    // size of the type of the variable
    int binding; // stores the static memory address allocated to the variable
    struct Paramstruct *paramlist;//pointer to the head of the formal parameter list  //in the case of functions
    int flabel; //a label for identifying the starting address of a function's code
    struct Gsymbol *next;
};
typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    int type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct Gsymbol *Gentry;     //pointer to GST entry for global variables and functions
    struct tnode *left,*right, *extra;  // left and right branches
}tnode;
	
struct Paramstruct* CreateParamlist(int type,char* name);
struct Paramstruct* AppendParamlist(struct Paramstruct* a,struct Paramstruct* b);
void findparam(struct Paramstruct* p);

struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e);

struct Gsymbol* createVarList(char* n, int t, int s, int b, struct Paramstruct *ps);
struct Gsymbol* joinnode(struct Gsymbol* a, struct Gsymbol* b);

void printtree(struct tnode* tnode);

void printParamlist(struct Paramstruct* ps);
void printsymboltable(struct Gsymbol* gst);
void findID(struct Gsymbol* ne);

int findposition(struct tnode *t, FILE* fp);

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
#define STRING_NODE 14

#define strtype 2
#define inttype 1
#define booltype 0

#define reg_index int

reg_index codeGen(struct tnode* t,FILE* fp);
reg_index getReg();
reg_index freeReg();
int getLabel();
