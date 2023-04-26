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
"begin" 	{return BEG;}
"read"  	{return READ;}
"write" 	{return WRITE;}
"if"    	{return IF;}
"then"  	{return THEN;}
"else"  	{return ELSE;}
"endif;" 	{return ENDIF;}
"while"		{return WHILE;}
"do"		{return DO;}
"endwhile;"	{return ENDWHILE;}
"break"     {return BREAK;}
"continue"  {return CONTINUE;}
"repeat"    {return REPEAT;}
"until"		{return UNTIL;}
"end"   	{return END;}
[a-z]   	{var[0] = yytext[0]; yylval.no = createTree(-1,VAR_NODE,var,NULL,NULL,NULL); return ID;}
[0-9]+		{number = atoi(yytext); yylval.no = createTree(number,NUM_NODE,NULL,NULL,NULL,NULL); return NUM;}
"="     	{return EQUAL;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return MUL;}
"/"			{return DIV;}
"==" 		{return EQEQ;}
"<=" 		{return LTEQ;}
">=" 		{return GTEQ;}
"<" 		{return LT;}
">" 		{return GT;}
"!=" 		{return NOEQ;}
[ \t\n]		{}
[()]		{return *yytext;}
";"     	{return ENDOFLINE;}
.			{printf("syntax error: %c\n",yytext[0]); exit(1);}

%%

int yywrap(void) {
	return 1;
}