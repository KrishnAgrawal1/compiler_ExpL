%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "exprtree.h"
	#include "exprtree.c"
	extern FILE *yyin;
	int yylex(void);
	int yyerror();

%}

%union{
	struct tnode *no;
}
%type <no> program Slist Stmt InputStmt OuptputStmt AsgStmt expr NUM ID Ifstmt Whilestmt Continue Break
%token READ WRITE NUM ID EQUAL ENDOFLINE PLUS MINUS MUL DIV END BEG LT LTEQ GT GTEQ EQEQ NOEQ IF THEN ELSE ENDIF WHILE DO ENDWHILE CONTINUE BREAK REPEAT UNTIL
%left LT LTEQ GT GTEQ EQEQ NOEQ
%left PLUS MINUS
%left MUL DIV

%%
program : BEG Slist END {
			printtree($2);
			FILE* fp = fopen("a.xsm","wb");
			$$ = $2;
			fprintf(fp, "%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n",0,2056,0,0,0,0,0,0);
			fprintf(fp, "MOV SP,%d\n", 4096+(int)('z'-'a'));
			codeGen($2,fp);
			fprintf(fp, "INT 10");
			fclose(fp);
			exit(0);
        }
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

Whilestmt : WHILE '(' expr ')' DO Slist ENDWHILE	 { $$ = createTree(-1,WHILE_NODE,NULL,$3,$6,NULL);}
		  | DO Slist WHILE '(' expr ')' ENDOFLINE    { $$ = createTree(-1,DOWHILE_NODE,NULL,$5,$2,NULL);}
		  | REPEAT Slist UNTIL '(' expr ')' ENDOFLINE    { $$ = createTree(-1,DOWHILE_NODE,NULL,$5,$2,NULL);}
		  ;

InputStmt : READ '(' ID ')' ENDOFLINE       		 { $$ = createTree(-1,READ_NODE,NULL,$3,NULL,NULL);}
          ; 

OuptputStmt : WRITE '(' expr ')' ENDOFLINE  		 { $$ = createTree(-1,WRITE_NODE,NULL,$3,NULL,NULL);}
			;

AsgStmt : ID EQUAL expr ENDOFLINE           		 { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3,NULL);}
        ;

Continue : CONTINUE ENDOFLINE       				 { $$ = createTree(-1,CONTINUE_NODE,NULL,NULL,NULL,NULL);}
		 ;

Break    : BREAK ENDOFLINE                           { $$ = createTree(-1,BREAK_NODE,NULL,NULL,NULL,NULL);}
		 ;

expr : expr PLUS expr		{$$ = createTree(-1,MATH_NODE,"+",$1,$3,NULL);}
	 | expr MINUS expr  	{$$ = createTree(-1,MATH_NODE,"-",$1,$3,NULL);}
	 | expr MUL expr	    {$$ = createTree(-1,MATH_NODE,"*",$1,$3,NULL);}
	 | expr DIV expr	    {$$ = createTree(-1,MATH_NODE,"/",$1,$3,NULL);}
	 | expr LT expr         {$$ = createTree(-1,BOOL_NODE,"<",$1,$3,NULL);}
	 | expr LTEQ expr       {$$ = createTree(-1,BOOL_NODE,"<=",$1,$3,NULL);}
	 | expr GT expr         {$$ = createTree(-1,BOOL_NODE,">",$1,$3,NULL);}
	 | expr GTEQ expr       {$$ = createTree(-1,BOOL_NODE,">=",$1,$3,NULL);}
	 | expr EQEQ expr       {$$ = createTree(-1,BOOL_NODE,"==",$1,$3,NULL);}
	 | expr NOEQ expr       {$$ = createTree(-1,BOOL_NODE,"!=",$1,$3,NULL);}
	 | '(' expr ')'		    {$$ = $2;}
	 | NUM			        {$$ = $1;}
	 | ID                   {$$ = $1;}
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
