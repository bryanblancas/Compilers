%{
#include <stdio.h>
#include <stdlib.h>
#include "proyect_bison.tab.h"

void mystrcpy(char* a);
void mystrcpyvar(char* a);
%}

ENTERO [0-9]+
DECIMAL [0-9]*"."{ENTERO}
VARIABLE [A-Za-z0-9_]*
STRING \"[^\"]+\"

%%

{ENTERO}	{ 	yylval.entero = atoi(yytext); 
				return (ENTERO);} 

{DECIMAL}	{ 	yylval.decimal = atof(yytext); 
				return (DECIMAL);}

int 		{	return (TIPO1);}
float 		{	return (TIPO2);}
string 		{	return (TIPO3);}
pow			{	return (POW);}

[A-Za-z_]{VARIABLE} 	{
							char *cad = (char*) malloc(sizeof(char) * (yyleng));
							mystrcpyvar(cad);
							yylval.string = cad;
							return (VARIABLE);
						}

{STRING}	{	char *cad = (char*) malloc(sizeof(char) * (yyleng-1));
				mystrcpy(cad);
				yylval.string = cad;
				return (STRING);
			}

","			{	return (COMA);}
"="			{	return (IGUAL);}
"+"         {	return (MAS);}
"-"         {	return (MENOS);}
"*"         {	return (POR);}
"/"         {	return (DIV);}
";"         {	return (PTOCOMA);}
"("			{	return (PARABRE);}
")"			{	return (PARCIERRA);}
"\n"		{	return (SALTOLINE);}

" "			{}
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

void mystrcpyvar(char* a){
	int i = 0;
	while(yytext[i]){
		a[i] = yytext[i];
		i++;
	}
	a[i] = '\0';
}
