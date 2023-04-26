%{
	#include <stdlib.h>
	#include <stdio.h>
	#include <string.h>
	#include "y.tab.h"
	#include "exprtree.h"
	int yyerror();
	int number;
	char* var;
%}

%%
"begin" 	{return BEG;}
"main"      {return MAIN;}
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
"decl"		{return DECL;}
"enddecl"  	{return ENDDECL;}
"int"		{return INTTYPE;}
"str"		{return STRTYPE;}
"return"  	    {return RET;}
"end"   	{return END;}
[_a-zA-Z][_a-zA-Z0-9]* 	{yylval.name=strdup(yytext); return ID;}
[0-9]+		{number = atoi(yytext); yylval.number = number; return NUM;}
\"((\\\")|[^"])*\"  {yylval.name=strdup(yytext); return WORD;}
"="     	{return EQUAL;}
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return MUL;}
"/"			{return DIV;}
"%"			{return MOD;}
"==" 		{return EQEQ;}
"<=" 		{return LTEQ;}
">=" 		{return GTEQ;}
"<" 		{return LT;}
">" 		{return GT;}
"!=" 		{return NOEQ;}
"&&" 		{return AND;}
"||" 		{return OR;}
[ \t\n]		{;}
[,] 	    {return *yytext;}
\[  	    {return *yytext;}
\]  	    {return *yytext;}
[()]		{return *yytext;}
[{}]		{return *yytext;}
";"     	{return *yytext;}
.			{printf("syntax error: %c\n",yytext[0]); exit(1);}

%%

int yywrap(void) {
	return 1;
}