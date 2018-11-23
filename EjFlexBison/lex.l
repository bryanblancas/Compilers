%{
#include <stdio.h>
#include <stdlib.h>
#include "bison.tab.h"

void mystrcpy(char* a);
%}

ENTERO [0-9]+
DECIMAL [0-9]*"."{ENTERO}
STRING \"[^\"]+\"

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

exit		{	return 0;}

{STRING}	{	char *cad = (char*) malloc(sizeof(char) * (yyleng-1));
				mystrcpy(cad);
				yylval.string = cad;
				//printf(" --> %s\n", cad);
				return (STRING);
			}


.           {printf("ASCII CODE: %d\n", yytext[0]);}

%%

void mystrcpy(char* a){
	int i, j = 0;
	for(i = 0; i < yyleng; i++)
		if(yytext[i] != '"')
			a[j++] = yytext[i];
	a[j] = '\0';

	/*
	while(yytext[i+2])
		aux[i] = yytext[i+1]
		i++
		*/
}