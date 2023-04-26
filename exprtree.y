%{
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	extern FILE *yyin;
	int yylex(void);
	int yyerror();
	FILE* fp;
	int binding = 4095;
	int flabel = 0;
	struct Gsymbol *gst;
	struct Lsymbol *lst;
	struct Paramstruct *para; 
	struct Typetable *TypeT;
%}

%union{
	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Lsymbol *Lsymbols;
	struct Paramstruct *parameter; 
	struct Fieldlist *fieldL;
	struct Typetable *TT;
	int number;
	char* name;
}
%type <no> program 
%type <no> MainBlock
%type <no> FDefBlock
%type <no> Fdef
%type <no> Body
%type <no> Slist 
%type <no> Stmt 
%type <no> InputStmt 
%type <no> OuptputStmt 
%type <no> AsgStmt 
%type <no> expr 
%type <no> IDENTIFIER
%type <no> ArgList
%type <no> E
%type <no> Ifstmt Whilestmt Continue Break
%type <no> Word
%type <no> Retstmtc
%type <no> FieldDecl
%type <no> FieldDeclList
%type <no> TypeDef
%type <no> TypeDefList
%type <no> TypeName
%type <no> Field
%type <no> Free

%type<TT> TypeDefBlock
%type<TT> Type

%type <Symbols> GidList Gid
%type <Symbols> GDecl
%type <Symbols> GDeclList
%type <Symbols> GDeclarations

%type <Lsymbols> LidList
%type <Lsymbols> LDecl
%type <Lsymbols> LDeclList
%type <Lsymbols> LDeclarations

%type <parameter> Param
%type <parameter> ParamList

%type <number> INTTYPE STRTYPE NUM

%type <name> ID WORD

%token MAIN RET
%token FREE ALLOC NIL INITIALIZE
%token TYPE ENDTYPE
%token DECL ENDDECL
%token INTTYPE STRTYPE
%token READ WRITE
%token NUM ID WORD
%token EQUAL BRKP
%token PLUS MINUS MUL DIV MOD
%token END BEG 
%token LT LTEQ GT GTEQ EQEQ NOEQ
%token AND OR
%token IF THEN ELSE ENDIF
%token WHILE DO ENDWHILE CONTINUE BREAK REPEAT UNTIL

%left AND OR
%left LT LTEQ GT GTEQ EQEQ NOEQ
%left PLUS MINUS
%left MUL DIV MOD

%%

program : TypeDefBlock GDeclarations FDefBlock MainBlock {exit(1);}
        | TypeDefBlock GDeclarations MainBlock           {exit(1);}
        | MainBlock                         			 {exit(1);} 
		| TypeDefBlock                      			 {exit(1);}
		;

TypeDefBlock  : TYPE TypeDefList ENDTYPE   { createTypeTable($2); $$ = TypeT;}
              ;

TypeDefList   : TypeDefList TypeDef        { struct tnode *t1 = $1, *t2 = $2;
										   	 t2->right = t1;
											 $$ = t2;
										   }
              | TypeDef                    { $$ = $1;}
              ;

TypeDef       : ID '{' FieldDeclList '}'   { $$ = createTree(-1,TYPE_TREE_NODE,$<name>1,$3,NULL,NULL);}
              ;

FieldDeclList : FieldDeclList FieldDecl    { struct tnode *t1 = $1, *t2 = $2;
										   	 t2->left = t1;
											 $$ = t2;
										   }
              | FieldDecl				   { $$ = $1;}
              ;

FieldDecl    : TypeName ID ';'     { $$ = createTree(-1,TYPE_TREE_NODE,$<name>2,NULL,$1,NULL);}

TypeName     : INTTYPE      { $$ = createTree(-1,TYPE_TREE_NODE,"int",NULL,NULL,NULL);}
             | STRTYPE		{ $$ = createTree(-1,TYPE_TREE_NODE,"str",NULL,NULL,NULL);}
             | ID   	    { $$ = createTree(-1,TYPE_TREE_NODE,$<name>1,NULL,NULL,NULL);}
             ;

MainBlock : INTTYPE MAIN '(' ')' '{' LDeclarations Body '}'   { fprintf(fp, "F0:\n");
																fprintf(fp, "MOV BP,%d\n", binding);
																FunASTgen("main",findType("int"),NULL,$6,$7,fp); $$ = $7;
																fclose(fp);												  	
															  }
          ;

FDefBlock : FDefBlock Fdef                                 { $$ = $2;}
          | Fdef                                           { $$ = $1;}
		  ; 

Fdef : Type ID '(' ParamList ')' '{' LDeclarations Body '}'  { FunASTgen($<name>2,$1,$4,$7,$8,fp); $$ = $8;}                                
     ;

Body : BEG Slist Retstmtc END         { $$ = createTree(-1,EMPTY_NODE,NULL,$2,$3,NULL);}
     ;

Retstmtc : RET expr ';'               { $$ = createTree(-1,RETURN_NODE,NULL,$2,NULL,NULL);}
         | RET Word ';'               { $$ = createTree(-1,RETURN_NODE,NULL,$2,NULL,NULL);}
		 ; 

Slist : Slist Stmt {$$ = createTree(-1,EMPTY_NODE,NULL,$1,$2,NULL);}
      | Stmt       {$$ = $1;}
	  ;

Stmt : InputStmt   {$$ = $1;}
     | OuptputStmt {$$ = $1;}
	 | AsgStmt     {$$ = $1;}
	 | Ifstmt	   {$$ = $1;}
	 | Whilestmt   {$$ = $1;}
	 | Continue    {$$ = $1;}
	 | Break       {$$ = $1;}
	 | Free        {$$ = $1;}
	 | BRKP        {$$ = createTree(-1,BRKP_NODE,NULL,NULL,NULL,NULL);}
	 ;

Free : FREE '(' IDENTIFIER ')'                       { $$ = createTree(-1,FREE_NODE,NULL,$3,NULL,NULL);}
     ;

Ifstmt : IF '(' expr ')' THEN Slist ENDIF 			 { $$ = createTree(-1,IFELSE_NODE,NULL,$3,$6,NULL);}
       | IF '(' expr ')' THEN Slist ELSE Slist ENDIF { $$ = createTree(-1,IFELSE_NODE,NULL,$3,$6,$8); }
       ;

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE	     { $$ = createTree(-1,WHILE_NODE,NULL,$3,$6,NULL);}
		  | DO Slist WHILE '(' expr ')' ';'              { $$ = createTree(-1,DOWHILE_NODE,NULL,$5,$2,NULL);}
		  | REPEAT Slist UNTIL '(' expr ')' ';'    		 { $$ = createTree(-1,DOWHILE_NODE,NULL,$5,$2,NULL);}
		  ;

InputStmt : READ '(' IDENTIFIER ')' ';'        { $$ = createTree(-1,READ_NODE,NULL,$3,NULL,NULL);}
          ;  

OuptputStmt : WRITE '(' expr ')' ';'  		 { $$ = createTree(-1,WRITE_NODE,NULL,$3,NULL,NULL);}
			| WRITE '(' Word ')' ';'  		 { $$ = createTree(-1,WRITE_NODE,NULL,$3,NULL,NULL);}
			;

AsgStmt : IDENTIFIER EQUAL expr ';'             { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3,NULL);}
		| IDENTIFIER EQUAL Word ';'             { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3,NULL);}
		| IDENTIFIER EQUAL INITIALIZE ';'       { $$ = createTree(-1,INITIALIZE_NODE,NULL,$1,NULL,NULL);}
		| IDENTIFIER EQUAL ALLOC ';'            { $$ = createTree(-1,ALLOC_NODE,NULL,$1,NULL,NULL);}
        ;

Word : WORD                                    { $$ = createTree(-1,STRING_NODE,$<name>1,NULL,NULL,NULL);}
	 ;

Continue : CONTINUE ';'       				   { $$ = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
		 ;

Break    : BREAK ';'                           { $$ = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
		 ;

GDeclarations : DECL GDeclList ENDDECL                { findID($2);
														printsymboltable($2); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = $2;
														gst = gst->next;
														$$ = $2;
													  }
			  | DECL ENDDECL                         { gst = NULL; $$ = NULL;}
			  ;

LDeclarations : DECL LDeclList ENDDECL                { lst = (struct Lsymbol*)malloc(sizeof(struct Lsymbol));
														lst->next = $2;
														lst = lst->next;
														lst = localdecal(lst,para);
														$2 = lst;
														para = NULL;
														findLID(lst);
														$$ = $2;
													  }
			 | DECL ENDDECL                           { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														$$ = lst;
													  }
			 |                                        { lst = NULL;
			 											int c = -3;
			 										    lst = localdecal(lst,para);
														para = NULL;
														findLID(lst);
														$$ = lst;
													  }
			 ;

GDeclList : GDeclList GDecl                           { $$ = joinnode($1,$2);}
		  | GDecl                                     { $$ = $1;}
		  ;

LDeclList : LDeclList LDecl                          { $$ = joinLVnode($1,$2);}
          | LDecl                                    { $$ = $1;}
		  ;

GDecl : Type GidList ';'	           				{
														struct Gsymbol* t = $2;
														while(t != NULL)
														{
															t->type = $1;
											               	t = t->next;
														}
														$$ = $2;
													}
	 ;

LDecl : Type LidList ';'                           {
													struct Lsymbol* t = $2;
													while(t != NULL)
														{
															t->type = $1;
											               	t = t->next;
														}
													$$ = $2;
												   }
      ;

GidList: GidList',' Gid   						{ $$ = joinnode($1,$3);}
	   | Gid  				                    { $$ = $1;}
	   ;

LidList : LidList ',' ID                        { $$ = joinLVnode($1, LInstall($<name>3, findType("int"))); }
        | ID                                    { $$ = LInstall($<name>1, findType("int"));}
	    ;

Gid	 : ID '[' NUM ']'							{ $$ = createVarList($<name>1,inttype,$<number>3,++binding,NULL,-1); binding += $<number>3 - 1;}
	 | ID '(' ParamList ')'						{ findparam($3); $$ = createVarList($<name>1,inttype,0,0,$3,flabel++);}
	 | ID '(' ')'						        { $$ = createVarList($<name>1,inttype,0,0,NULL,flabel++);}
	 | ID                                       { $$ = createVarList($<name>1,inttype,1,++binding,NULL,-1);}
	 ;

ParamList : ParamList ',' Param                 { $$ = para = AppendParamlist($1,$3);}
          | Param                               { $$ = para = $1;}
		  ;

Param : Type ID                                 { $$ = CreateParamlist($1,$<name>2);}
      ;

Type : INTTYPE                                  { $$ = findType("int");}
     | STRTYPE                                  { $$ = findType("str");}
	 | ID                                       { if($<name>1 == "bool" || $<name>1 == "void")
	 											  {
												  	printf("%s type is not avilable",$<name>1);
												  	exit(0);
	 											  }
												  $$ = findType($1);
												}
	 ;

expr : expr PLUS expr		{$$ = createTree(-1,MATH_NODE,"+",$1,$3,NULL);}
	 | expr MINUS expr  	{$$ = createTree(-1,MATH_NODE,"-",$1,$3,NULL);}
	 | expr MUL expr	    {$$ = createTree(-1,MATH_NODE,"*",$1,$3,NULL);}
	 | expr DIV expr	    {$$ = createTree(-1,MATH_NODE,"/",$1,$3,NULL);}
	 | expr MOD expr	    {$$ = createTree(-1,MATH_NODE,"%",$1,$3,NULL);}
	 | expr LT expr         {$$ = createTree(-1,BOOL_NODE,"<",$1,$3,NULL);}
	 | expr LTEQ expr       {$$ = createTree(-1,BOOL_NODE,"<=",$1,$3,NULL);}
	 | expr GT expr         {$$ = createTree(-1,BOOL_NODE,">",$1,$3,NULL);}
	 | expr GTEQ expr       {$$ = createTree(-1,BOOL_NODE,">=",$1,$3,NULL);}
	 | expr EQEQ expr       {$$ = createTree(-1,BOOL_NODE,"==",$1,$3,NULL);}
	 | expr NOEQ expr       {$$ = createTree(-1,BOOL_NODE,"!=",$1,$3,NULL);}
	 | expr AND expr        {$$ = createTree(-1,LOGICAL_NODE,"&&",$1,$3,NULL);}
	 | expr OR expr         {$$ = createTree(-1,LOGICAL_NODE,"||",$1,$3,NULL);}
	 | '(' expr ')'		    {$$ = $2;}
	 | NUM			        {$$ = createTree($<number>1,NUM_NODE,NULL,NULL,NULL,NULL);}
	 | IDENTIFIER           {$$ = $1;}
	 | NIL                  {$$ = createTree(-1,NULL_NODE,"NULL",NULL,NULL,NULL);}
	 | E                    {$$ = $1;}
	 ;

Field : Field '.' ID           { $$ = createTree(-1,FIELD_NODE,$<name>3,$1,NULL,NULL); }
	  | ID '.' ID              { $$ = createTree(-1,FIELD_NODE,$<name>3,createTree(-1,VAR_NODE,$<name>1,NULL,NULL,NULL),NULL,NULL); } 
	  ;

IDENTIFIER	 : ID           					{$$ = createTree(-1,VAR_NODE,$<name>1,NULL,NULL,NULL);}
			 | Field                            { $$ = $1;}
             | ID '[' expr ']'           		{
													struct tnode* temp = createTree(-1,VAR_NODE,$<name>1,$3,NULL,NULL);
													if(temp->left->type->name != "int")
													{
														printf("type missmatch in array\n");
														exit(0);
													}
			 										if(temp->Gentry->size <= $3->val)
													{
														printf("Array index out of bounds\n");
														exit(0);
													}
													$$ = temp;
												}
			 ;
E: ID '('')'                        { $$ = createTree(-1,FUNCTION_NODE,$<name>1,NULL,NULL,NULL);}
 | ID '(' ArgList ')'               { $$ = createTree(-1,FUNCTION_NODE,$<name>1,$3,NULL,NULL);}
 ;

ArgList : ArgList ',' expr     {
								tnode* t = $1;
								while(t->extra != NULL) t = t->extra;
								t->extra = $3;
								$$ = $1;
                               }
        | expr                 {$$ = $1;}
		| Word                 {$$ = $1;}
		;

%%

yyerror(char const *s)
{
    printf("yyerror %s\n",s);
}


int main(void) {
	fp = fopen("a.xsm","wb");
	fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
	fprintf(fp, "JMP F0\n");
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}
