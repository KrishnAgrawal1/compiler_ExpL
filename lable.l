%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	int secondpass = 0;
	FILE *fp, *withoutld,*targetfile;
	int count = 2056;
	int label[1000];
	int flabel[1000];
%}

%%

([L][0-9]+)([\n])      {
							if(secondpass) {
								yytext[0] = '0';
								int label_index = atoi(yytext);
								fprintf(targetfile,"%d\n", label[label_index]);
							}
							else {
								count += 2;
							}
					   }
([L][0-9]+)([:])([\n]) { 
							if(!secondpass) {
								char number[10];
								int i = 0;
								for(int j = 1; yytext[j] != ':'; ++j) {
									number[i++] = yytext[j];
								}
								number[i] = '\0';
								int label_index = atoi(number);
								label[label_index] = count;
							}
					   }
([F][0-9]+)([\n])      {
							if(secondpass) {
								yytext[0] = '0';
								int label_index = atoi(yytext);
								fprintf(targetfile,"%d\n", flabel[label_index]);
							}
							else {
								count += 2;
							}
					   }
([F][0-9]+)([:])([\n]) { 
							if(!secondpass) {
								char number[10];
								int i = 0;
								for(int j = 1; yytext[j] != ':'; ++j) {
									number[i++] = yytext[j];
								}
								number[i] = '\0';
								int label_index = atoi(number);
								flabel[label_index] = count;
							}
					   }
[\n]                   {
							if(!secondpass) {
								count = count + 2; 
							}
							else {
								fprintf(targetfile,"\n");
							}
					   }
(.)                    {
							if(secondpass) {
								fprintf(targetfile,"%s", yytext);
							}
					   }

%%

int yywrap() {
	if(secondpass == 0) {
		secondpass = 1;
		fclose(withoutld);
		fp = fopen("a.xsm","rb");
		yyin = fp;
		return 0;
	}
	fclose(fp);
    fclose(targetfile);
	return 1;
}

int main() {
    targetfile = fopen("b.xsm", "wb");
	for(int i = 0; i < 1000; ++i){ label[i] = 0; flabel[i] = 0;}
	    withoutld = fopen("a.xsm", "rb");
	char *str;
	str = malloc(100);
	for(int i = 0; i < 8; ++i) {
		fgets(str, 100, withoutld);
		if(secondpass) fprintf(targetfile,"%s", str);
	}
	yyin = withoutld;
	yylex();
	return 0;
}