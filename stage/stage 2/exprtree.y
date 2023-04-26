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
%type <no> program Slist Stmt InputStmt OuptputStmt AsgStmt expr NUM ID
%token READ WRITE NUM ID EQUAL ENDOFLINE PLUS MINUS MUL DIV END BEG
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

Slist : Slist Stmt {$$ = createTree(-1,EMPTY_NODE,NULL,$1,$2);}
      | Stmt       {$$ = $1;}
	  ;

Stmt : InputStmt   {$$ = $1;}
     | OuptputStmt {$$ = $1;}
	 | AsgStmt     {$$ = $1;}
	 ;

InputStmt : READ '(' ID ')' ENDOFLINE       { $$ = createTree(-1,READ_NODE,NULL,$3,NULL);}
          ; 

OuptputStmt : WRITE '(' expr ')' ENDOFLINE  { $$ = createTree(-1,WRITE_NODE,NULL,$3,NULL);}
			;

AsgStmt : ID EQUAL expr ENDOFLINE           { $$ = createTree(-1,ASSIGN_NODE,NULL,$1,$3);}
        ;

expr : expr PLUS expr		{$$ = createTree(-1,MATH_NODE,"+",$1,$3);}
	 | expr MINUS expr  	{$$ = createTree(-1,MATH_NODE,"-",$1,$3);}
	 | expr MUL expr	    {$$ = createTree(-1,MATH_NODE,"*",$1,$3);}
	 | expr DIV expr	    {$$ = createTree(-1,MATH_NODE,"/",$1,$3);}
	 | '(' expr ')'		    {$$ = $2;}
	 | NUM			        {$$ = $1;}
	 | ID                   {$$ = $1;}
	 ;

%%

yyerror(char const *s)
{
    printf("yyerror %s",s);
}


int main(void) {
	FILE* tmp = fopen("test.txt","r");
	yyin = tmp;
	yyparse();
	fclose(tmp);
	return 0;
}
