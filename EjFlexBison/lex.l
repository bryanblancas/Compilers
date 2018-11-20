%{
#include <stdio.h>
#include <stdlib.h>
#include "bison.tab.h"

void mystrcpy(char* a);
%}

ENTERO [0-9]+
DECIMAL [0-9]*"."{ENTERO}
STRING [A-Za-z]+

%%

{ENTERO}	{ 	yylval.entero = atoi(yytext); 
				return (ENTERO);}

{DECIMAL}	{ 	yylval.decimal = atof(yytext); 
				return (DECIMAL);}

"+"         {	return (MAS);}
"-"         {	return (MENOS);}
"*"         {	return (POR);}
"/"         {	return (DIV);}
";"         {	return (PTOCOMA);}

{STRING}	{	char *cad = (char*) malloc(sizeof(char) * (yyleng+1));
				mystrcpy(cad);
				yylval.string = cad;
				//printf(" -> %s\n", cad);
				return (STRING);
			}

.           {printf("ASCII CODE: %d\n", yytext[0]);}

%%

void mystrcpy(char* a){
	int i;
	for(i = 0; i<yyleng; i++)
		a[i] = yytext[i];
	a[i] = '\0';
}