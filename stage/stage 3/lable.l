%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int tpass = 0;
	FILE *fp, *fpwid, *fptf;
	int count = 2056;
	int label[1000];
%}

%%

([L][0-9]+)([:])([\n])	{
							if(!tpass)
							{
								char num[3];
								for(int i=1;yytext[i]!=':';i++)
									num[i-1] = yytext[i];
								int t = atoi(num);
								label[t] = count;
							}
						}
([L][0-9]+)([\n]) 		{
							if(tpass)
							{
								yytext[0] = '0';
								int n = atoi(yytext);
								n = label[n];
								fprintf(fp,"%d\n",n);
							}
							else
							{
								count += 2;
							}
						}
[\n]					{
							if(!tpass)
								count += 2;
							else
								fprintf(fp,"\n");
						}
(.)						{if(tpass) fprintf(fp,"%s",yytext);}

%%

int yywrap()
{
	if(tpass == 0)
	{
		tpass = 1;
		fp = fopen("b.xsm","w");
		fclose(fptf);
		fptf = fopen("a.xsm","r");
		yyin = fptf;
		return 0;
	}
	fclose(fp);
	fclose(fptf);
	return 1;
}

int main()
{
	fptf = fopen("a.xsm","r");
	yyin = fptf;
	yylex();
	return 0;
}