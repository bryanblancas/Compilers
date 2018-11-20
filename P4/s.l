alpha [0-9]|[1-9][0-9]|1[0-9][0-9]|2[0-4][0-9]|25[0-5]
beta [0-9a-zA-Z_]*
%%	

{beta}[a-z]{beta}[A-Z]{beta}|{beta}[A-Z]{beta}[a-z]{beta} {
	int i=0;
	while(yytext[i])
		i++;
	if(i<8 || i>16)
		printf("Pass incorrecto");
	else
		printf("Pass Correcto");
}
a 			{printf("e");}
({alpha}"."{alpha}"."{alpha}"."{alpha}) {printf(" IP CORRECTA ");}
salir 	{return 0;}
