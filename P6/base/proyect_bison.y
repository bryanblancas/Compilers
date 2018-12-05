%{
  //CÓDIGO EN C
  #include <stdio.h>
  #include <stdlib.h>
  #include "func.h"

  //DEFINICIÓN DE FUNCIONES PROPIAS DE BISON
  extern int yylex(void);
  extern char *yytext;
  void yyerror(char *s);
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
%token POW
%token PARABRE
%token PARCIERRA


//VARIALES NO TERMINALES
//VarNoTerminal DE OPERACIÓN ENTERA
%type <entero> exp_entera
//VarNoTerminal DE OPERACIÓN DECIMAL
%type <decimal> exp_decimal
//VarNoTerminal DE OPERACIÓN DE STRING
%type <string> str
//VarNoTerminal DE POTENCIA DE CADENAS
%type <string> cadena_pow

//PRECEDENCIA
%left MAS MENOS
%left POR DIV
%left POW  
%left PARABRE PARCIERRA

%%
//REGLAS DE PRODUCCIÓN

//VarNoTerminal inicial, de donde se derivan las demás
input:    /*CADENA VACÍA*/
  |       input cadena
  |       input calc
  |       input cad_pow_final
;

//VarNoTerminal de potencia de cadenas, para ver cuando termina he imprimirla
cad_pow_final:    cadena_pow PTOCOMA    { printf("%s\n", $1); free($1); }
;

cadena_pow:   str POW exp_entera          {
                                            $$ = (char *) malloc((sizeof(char) * tam($1) * val_abs($3))+1);
                                            pow_cad($$, $1, $3);
                                            free($1);
                                          }
      |       cadena_pow MAS str          {
                                            $$ = (char*) malloc(sizeof(char) * ((tam($1) + tam($3)) + 1));
                                            mystrcat($$, $1, $3);
                                            free($1); free($3);
                                          }     
      |       str MAS cadena_pow          {
                                            $$ = (char*) malloc(sizeof(char) * ((tam($1) + tam($3)) + 1));
                                            mystrcat($$, $1, $3);
                                            free($1); free($3);
                                          }
      |       cadena_pow POW exp_entera   {
                                            $$ = (char *) malloc((sizeof(char) * tam($1) * val_abs($3))+1);
                                            pow_cad($$, $1, $3);
                                            free($1);
                                          }
      |       cadena_pow MAS cadena_pow   {
                                            $$ = (char*) malloc(sizeof(char) * ((tam($1) + tam($3)) + 1));
                                            mystrcat($$, $1, $3);
                                            free($1); free($3);
                                          }  
      |       PARABRE cadena_pow PARCIERRA { $$ = $2;}                                                                    
;

//VarNoTerminal de la operación con str, para ver cuando acaba e imprimirla
cadena:   str PTOCOMA   { printf("%s\n", $1); free($1);}
;

str :  STRING       { $$ = $1; }
  |     str MAS str   { 
                        $$ = (char*) malloc(sizeof(char) * ((tam($1) + tam($3)) + 1));
                        mystrcat($$, $1, $3);
                        free($1); free($3);
                      }
  |     str MENOS str   {
                          $$ = (char *) malloc(sizeof(char) * tam($1) + 1);
                          mystrrest($$, $1, $3);
                          free($1); free($3);
                        }
  |     PARABRE str PARCIERRA { $$ = $2;}
;

//VarNoTerminal de las operaciones aritméticas, para ver cuando acaba e imprimirla
calc  :   exp_entera PTOCOMA  { printf ("%4d\n", $1); }
  |       exp_decimal PTOCOMA { printf("%4.4f\n", $1);  }                              
;

exp_entera :       ENTERO                {$$ = $1;}
    |       MENOS ENTERO                 {$$ = -1 * $2;}
    |       exp_entera MAS exp_entera    {$$ = $1 + $3;}
    |       exp_entera MENOS exp_entera  {$$ = $1 - $3;}
    |       exp_entera POR exp_entera    {$$ = $1 * $3;}
    |       exp_entera DIV exp_entera    {$$ = $1 / $3;}
    |       PARABRE exp_entera PARCIERRA {$$ = $2;}
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
    |       PARABRE exp_decimal PARCIERRA {$$ = $2;}
;

%%

//CÓDIGO EN C

//Main de todo el programa
int main(int argc,char **argv){
  printf("+ / * - de Enteros y Decimales;  + y ^ de Cadenas;\n");
  yyparse();
  return 0;
}


void yyerror(char *s){
  printf("%s \n",s);
}