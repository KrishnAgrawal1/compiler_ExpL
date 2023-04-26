struct Fieldlist{
  char *name;              //name of the field
  int fieldIndex;          //the position of the field in the field list
  struct Typetable *type;  //pointer to type table entry of the field's type
  struct Fieldlist *next;  //pointer to the next field
};
struct Typetable{
    char *name;                 //type name
    int size;                   //size of the type
    struct Fieldlist *fields;   //pointer to the head of fields list
    struct Typetable *next;     // pointer to the next type table entry
};
struct Lsymbol{
  char *name;               //name of the variable
  struct Typetable *type;                 //pointer to the Typetable entry of variable type
  int binding;              //stores memory address allocated to the variable 
  struct Lsymbol *next;     //points to the next Local Symbol Table entry
};
struct Paramstruct {
    char* name;
    struct Typetable *type;
    struct Paramstruct* next;
};
struct Gsymbol {
    char* name;  // name of the variable
    struct Typetable *type;    // type of the variable
    int size;    // size of the type of the variable
    int binding; // stores the static memory address allocated to the variable
    struct Paramstruct *paramlist;//pointer to the head of the formal parameter list  //in the case of functions
    int flabel; //a label for identifying the starting address of a function's code
    struct Gsymbol *next;
};
typedef struct tnode {
    int val;        // value of a number for NUM nodes.
    struct Typetable *type;       // type of variable
    char* varname;  // name of a variable for ID nodes
    int nodetype;   // information about non-leaf nodes - read/write/connector/+/* etc.
    struct Gsymbol *Gentry;     //pointer to GST entry for global variables and functions
    struct Lsymbol *Lentry;           //pointer to the function's LST for local variables and arguements
    struct tnode *left,*right, *extra;  // left and right branches
}tnode;
	
struct Fieldlist* findField(struct Typetable* type, char* name);
void printTypeTable();
void FInstall(struct Typetable* temp, struct tnode* tn);
struct Typetable* findType(char* name);
struct Typetable* createTypeTable(struct tnode* temp);

struct Lsymbol* lookupL(struct Lsymbol* l, char* name);
struct Gsymbol* lookupG(struct Gsymbol* g, char* name);

void FunCheck(char* name, struct Typetable *type, struct Paramstruct *parameter);
void FunASTgen(char* name, struct Typetable *type, struct Paramstruct *parameter, struct Lsymbol *Lsymbols, struct tnode *ast, FILE* fp);

void printLsymboltable(struct Lsymbol* Lst);
void findLID(struct Lsymbol* ne);
struct Lsymbol* joinLVnode(struct Lsymbol* a, struct Lsymbol* b);
struct Lsymbol* LInstall(char *name, struct Typetable *type);


struct Paramstruct* CreateParamlist(struct Typetable *type,char* name);
struct Paramstruct* AppendParamlist(struct Paramstruct* a,struct Paramstruct* b);
void findparam(struct Paramstruct* p);

struct tnode* createTree(int val, int nodetype, char* c, struct tnode *l, struct tnode *r, struct tnode *e);

struct Gsymbol* createVarList(char* n, int t, int s, int b, struct Paramstruct *ps, int f);
struct Gsymbol* joinnode(struct Gsymbol* a, struct Gsymbol* b);

void printtree(struct tnode* tnode);

void printParamlist(struct Paramstruct* ps);
void printsymboltable(struct Gsymbol* gst);
void findID(struct Gsymbol* ne);

int find_position_field(struct tnode *t, FILE* fp);
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
#define FUNCTION_NODE 15
#define RETURN_NODE 16
#define LOGICAL_NODE 17
#define TYPE_TREE_NODE 18
#define FIELD_NODE 19
#define NULL_NODE 20
#define ALLOC_NODE 21
#define INITIALIZE_NODE 22
#define FREE_NODE 23
#define BRKP_NODE 24

#define strtype 2
#define inttype 1
#define booltype 0

#define reg_index int

reg_index codeGen(struct tnode* t,FILE* fp);
reg_index getReg();
reg_index freeReg();
int getLabel();
void pushparam(struct tnode *t, FILE *fp);
void popparam(struct tnode *t, FILE *fp);
