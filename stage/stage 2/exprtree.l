%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "y.tab.h"
	#include "exprtree.h"
	int yyerror();
	int number;
	char var[1];
%}

%%
"begin" {return BEG;}
"end"   {return END;}
"read"  {return READ;}
"write" {return WRITE;}
[a-z]   {var[0] = yytext[0]; yylval.no = createTree(-1,VAR_NODE,var,NULL,NULL); return ID;}
[0-9]+	{number = atoi(yytext); yylval.no = createTree(number,NUM_NODE,NULL,NULL,NULL); return NUM;}
"="     {return EQUAL;}
"+"	{return PLUS;}
"-"	{return MINUS;}
"*"	{return MUL;}
"/"	{return DIV;}
[ \t\n]	{;}
[()]	{return *yytext;}
";"     {return ENDOFLINE;}
.	{printf("syntax error: %s\n",yytext); exit(1);}

%%

int yywrap(void) {
	return 1;
}