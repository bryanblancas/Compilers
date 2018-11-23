%{
  //CÓDIGO EN C
  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>

  //DEFINICIÓN DE FUNCIONES PROPIAS DE BISON
  extern int yylex(void);
  extern char *yytext;
  void yyerror(char *s);
  int tam(char *a);
  void mystrcat(char *a, char *b, int uno, char *c, int dos);
%}
//DEFINICIÓN DE LA GRAMÁTICA

//DEFINICIÓN DE TIPOS DE DATOS
%union{
  int entero;
  float decimal;
  char* string;
}
//START
%start input

//VARIABLES TERMINALES
%token <entero> ENTERO
%token <decimal> DECIMAL
%token <string> STRING

//VARIABLES TERMINALES OPERACIONES
%token MAS
%token MENOS
%token POR
%token DIV
%token PTOCOMA

//VARIALES NO TERMINALES
//VarNoTerminal DE OPERACIÓN ENTERA
%type <entero> exp_entera
//VarNoTerminal DE OPERACIÓN DECIMAL
%type <decimal> exp_decimal
//VarNoTerminal DE OPERACIÓN DE STRING
%type <string> str

//PRECEDENCIA
%left MAS MENOS
%left POR DIV  

%%
//REGLAS DE PRODUCCIÓN

//VarNoTerminal inicial, de donde se derivan las demás
input:    /*CADENA VACÍA*/
  |       input cadena
  |       input calc
;

//VarNoTerminal de la operación con str, para ver cuando acaba e imprimirla
cadena:   str PTOCOMA   { printf("%s\n", $1); free($1);}
;

str :  STRING { $$ = $1; }
  |    str MAS str  { int uno = tam($1), dos = tam($3), i;
                      $$ = (char*) malloc(sizeof(char)*((uno+dos)+1));
                      mystrcat($$, $1, uno, $3, dos);}
;

//VarNoTerminal de las operaciones aritméticas, para ver cuando acaba e imprimirla
calc  :   exp_entera PTOCOMA  { printf ("%4d\n", $1); }
  |       exp_decimal PTOCOMA { printf("%4.4f\n", $1);  }                              
;

exp_entera :       ENTERO                {$$ = $1;}
    |       exp_entera MAS exp_entera    {$$ = $1 + $3;}
    |       exp_entera MENOS exp_entera  {$$ = $1 - $3;}
    |       exp_entera POR exp_entera    {$$ = $1 * $3;}
    |       exp_entera DIV exp_entera    {$$ = $1 / $3;}
;

exp_decimal :       DECIMAL                {$$ = $1;}
    |       exp_decimal MAS exp_decimal    {$$ = $1 + $3;}
    |       exp_decimal MENOS exp_decimal  {$$ = $1 - $3;}
    |       exp_decimal POR exp_decimal    {$$ = $1 * $3;}
    |       exp_decimal DIV exp_decimal    {$$ = $1 / $3;}
    |       exp_entera MAS exp_decimal    {$$ =(float) $1 + $3;}
    |       exp_entera MENOS exp_decimal  {$$ =(float) $1 - $3;}
    |       exp_entera POR exp_decimal    {$$ =(float) $1 * $3;}
    |       exp_entera DIV exp_decimal    {$$ =(float) $1 / $3;}
    |       exp_decimal MAS exp_entera    {$$ = $1 + (float) $3;}
    |       exp_decimal MENOS exp_entera  {$$ = $1 - (float) $3;}
    |       exp_decimal POR exp_entera    {$$ = $1 * (float) $3;}
    |       exp_decimal DIV exp_entera    {$$ = $1 / (float) $3;}
;

%%

//CÓDIGO EN C

int tam(char *a){
  int i=0;
  while(a[i++] != '\0');
  return i-1;
}

void mystrcat(char *a, char *b, int uno, char *c, int dos){
  int i;
  for(i=0; i<uno;i++)
    a[i] = b[i];
  for(int j=0; j<dos; j++)
    a[i++] = c[j];
  a[i] = '\0';
}

void yyerror(char *s){
  printf("%s \n",s);
}

int main(int argc,char **argv){
  printf("Calculadora Simple de Enteros y Decimales y Concatenación de Cadenas;\n");
  yyparse();
  return 0;
}

int yywrap(){  
  return 1;  
}  