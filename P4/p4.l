str [A-Za-z0-9_]*
entero [0-9]+
%%

({str}[0-9]{str}[A-Z]{str})|({str}[A-Z]{str}[0-9]{str})	{
	int i = 0;
	while(yytext[i]) i++;
	if(i >= 5 || i <= 20) printf("Pass Válida\n");
}
[A-Za-z_]{str} {
	int i = 0;
	while(yytext[i]) i++;
	if(i <= 20) printf("Nombre de variable válida\n");
}
{entero}"."{entero}["+"\-"*""/"]{entero}"."{entero} 	{printf("Operación válida\n");}
