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
"^"			{	return (POW);}
"("			{	return (PARABRE);}
")"			{	return (PARCIERRA);}

exit		{	return 0;}

{STRING}	{	char *cad = (char*) malloc(sizeof(char) * (yyleng-1));
				mystrcpy(cad);
				yylval.string = cad;
				return (STRING);
			}


.           {printf("ASCII CODE: %d\n", yytext[0]);}

%%

void mystrcpy(char* a){
	int i = 0;
	while(yytext[i+2]){
		a[i] = yytext[i+1];
		i++;
	}
	a[i] = '\0';
}