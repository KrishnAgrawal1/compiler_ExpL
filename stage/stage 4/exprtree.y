%{
	#include <stdlib.h>
	#include <string.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	extern FILE *yyin;
	int yylex(void);
	int yyerror();
	int binding = 4095;
	struct Gsymbol *gst;
%}

%union{
	struct tnode *no;
	struct Gsymbol *Symbols;
	struct Paramstruct *parameter; 
	int number;
	char* name;
}
%type <no> program 
%type <no> Slist 
%type <no> Stmt 
%type <no> InputStmt 
%type <no> OuptputStmt 
%type <no> AsgStmt 
%type <no> expr 
%type <no> IDENTIFIER
%type <no> Ifstmt Whilestmt Continue Break
%type <no> Word

%type <Symbols> GidList Gid
%type <Symbols> Type
%type <Symbols> Decl
%type <Symbols> DeclList
%type <Symbols> Declarations

%type <parameter> Param
%type <parameter> ParamList

%type <number> INTTYPE STRTYPE NUM

%type <name> ID WORD

%token DECL ENDDECL
%token INTTYPE STRTYPE
%token READ WRITE
%token NUM ID WORD
%token EQUAL
%token PLUS MINUS MUL DIV MOD
%token END BEG 
%token LT LTEQ GT GTEQ EQEQ NOEQ
%token IF THEN ELSE ENDIF
%token WHILE DO ENDWHILE CONTINUE BREAK REPEAT UNTIL

%left LT LTEQ GT GTEQ EQEQ NOEQ
%left PLUS MINUS
%left MUL DIV MOD

%%
program : Declarations BEG Slist END {
			printtree($3);
			FILE* fp = fopen("a.xsm","wb");
			$$ = $3;
			fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
			fprintf(fp, "MOV SP,%d\n", binding);
			codeGen($3,fp);
			fprintf(fp, "INT 10");
			fclose(fp);
			exit(0);
        }
		| Declarations BEG END {exit(0);}
		| BEG END {exit(0);}
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
	 ;

Ifstmt : IF '(' expr ')' THEN Slist ENDIF 			 { $$ = createTree(-1,IFELSE_NODE,NULL,$3,$6,NULL);}
       |IF '(' expr ')' THEN Slist ELSE Slist ENDIF  { $$ = createTree(-1,IFELSE_NODE,NULL,$3,$6,$8); }
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

AsgStmt : IDENTIFIER EQUAL expr ';'            { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3,NULL);}
		| IDENTIFIER EQUAL Word ';'            { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3,NULL);}
        ;

Word : WORD                                    { $$ = createTree(-1,STRING_NODE,$<name>1,NULL,NULL,NULL);}
	 ;

Continue : CONTINUE ';'       				 { $$ = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
		 ;

Break    : BREAK ';'                           { $$ = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
		 ;

Declarations : DECL DeclList ENDDECL                {  findID($2);
														printsymboltable($2); 
                                                    	gst=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
														gst->next = $2;
														gst = gst->next;
														$$ = $2;
													}
			 | DECL ENDDECL                         { gst = NULL; $$ = NULL;}
			 ;

DeclList : DeclList Decl                            { $$ = joinnode($1,$2);}
		 | Decl                                     { $$ = $1;}
		 ;

Decl : Type GidList ';'	           					{
														struct Gsymbol* t = $2;
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

Gid	 : ID '[' NUM ']'							{ $$ = createVarList($<name>1,inttype,$<number>3,++binding,NULL); binding += $<number>3 - 1;}
	 | ID '(' ParamList ')'						{ findparam($3); $$ = createVarList($<name>1,inttype,0,0,$3);}
	 | ID '(' ')'						        { $$ = createVarList($<name>1,inttype,0,0,NULL);}
	 | ID                                       { $$ = createVarList($<name>1,inttype,1,++binding,NULL);}
	 ;

ParamList : ParamList ',' Param                 { $$ = AppendParamlist($1,$3);}
          | Param                               { $$ = $1;}
		  ;

Param : Type ID                                 { $$ = CreateParamlist($1,$<name>2);}
      ;

Type : INTTYPE                                  { $$ = inttype;}
     | STRTYPE                                  { $$ = strtype;}
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
	 | '(' expr ')'		    {$$ = $2;}
	 | NUM			        {$$ = createTree($<number>1,NUM_NODE,NULL,NULL,NULL,NULL);}
	 | IDENTIFIER           {$$ = $1;}
	 ;
IDENTIFIER	 : ID           					{$$ = createTree(-1,VAR_NODE,$<name>1,NULL,NULL,NULL);}
             | ID '[' expr ']'           		{
													struct tnode* temp = createTree(-1,VAR_NODE,$<name>1,$3,NULL,NULL);
													if(temp->left->type != inttype)
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

%%

yyerror(char const *s)
{
    printf("yyerror %s\n",s);
}


int main(void) {
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}
