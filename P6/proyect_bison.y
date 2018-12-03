%{
  //CÓDIGO EN C
  #include <stdio.h>
  #include <stdlib.h>
  #include "func.h"

  //DEFINICIÓN DE FUNCIONES PROPIAS DE BISON
  extern int yylex(void);
  extern char *yytext;
  void yyerror(char *s);

  TABLA_SIMBOLOS *ts;

%}
//DEFINICIÓN DE LA GRAMÁTICA

//DEFINICIÓN DE TIPOS DE DATOS
%union{
  int entero;
  float decimal;
  char* string;
  void* var
}
//START
%start input

//VARIABLES TERMINALES
%token <entero> ENTERO
%token <decimal> DECIMAL
%token <string> STRING
%token <string> VARIABLE

//VARIABLES TERMINALES OPERACIONES
%token MAS
%token MENOS
%token POR
%token DIV
%token PTOCOMA
%token POW
%token PARABRE
%token PARCIERRA
%token IGUAL
%token COMA
%token SALTOLINE
//1:int  2:float  3:string
%token TIPO1
%token TIPO2
%token TIPO3

//VARIALES NO TERMINALES
//VarNoTerminal DE OPERACIÓN ENTERA
%type <entero> exp_entera
//VarNoTerminal DE OPERACIÓN DECIMAL
%type <decimal> exp_decimal
//VarNoTerminal DE OPERACIÓN DE STRING
%type <string> str
//VarNoTerminal DE POTENCIA DE CADENAS
%type <string> cadena_pow
//VarNoTerminal de OPERACIÓN DE VARIABLES
%type <var> exp_variable

//PRECEDENCIA
%left MAS MENOS
%left POR DIV
%left POW  
%left PARABRE PARCIERRA

%%
//REGLAS DE PRODUCCIÓN

//VarNoTerminal inicial, de donde se derivan las demás
input:    /*CADENA VACÍA*/
  |       input calc
  |       input cadena
  |       input cad_pow_final
  |       input declaracion_variables
  |       input asignar_variables
  |       input exp_variable PTOCOMA SALTOLINE  {
                                                  if($2 != NULL){
                                                    NODO* na = (NODO *) $2;
                                                    if(na->type == 1)
                                                      printf("%d\n", na->tipo1);
                                                    else if(na->type == 2)
                                                      printf("%f\n", na->tipo2);
                                                    else if(na->type == 3)
                                                      printf("%s\n", na->tipo3);
                                                  }
                                                }
  |       input errores 
;


//ERRORES DE LA DECLARACIÓN DE VARIABLES
errores:      TIPO1 VARIABLE SALTOLINE    { yyerror("Expected ;");}
    |         TIPO2 VARIABLE SALTOLINE    { yyerror("Expected ;");}
    |         TIPO3 VARIABLE SALTOLINE    { yyerror("Expected ;");}
    |         TIPO1 VARIABLE IGUAL exp_entera SALTOLINE   { yyerror("Expected ;");}
    |         TIPO2 VARIABLE IGUAL exp_decimal SALTOLINE   { yyerror("Expected ;");}
    |         TIPO3 VARIABLE IGUAL str SALTOLINE   { yyerror("Expected ;");}
    |         TIPO3 VARIABLE IGUAL cadena_pow SALTOLINE   { yyerror("Expected ;");}
    |         TIPO1 VARIABLE IGUAL exp_decimal SALTOLINE   { printf("Expects ;\n");}
    |         TIPO1 VARIABLE IGUAL str SALTOLINE   { printf("Expects ;\n");}
    |         TIPO1 VARIABLE IGUAL cadena_pow SALTOLINE   { printf("Expects ;\n");}
    |         TIPO2 VARIABLE IGUAL exp_entera SALTOLINE   { printf("Expects ;\n");}
    |         TIPO2 VARIABLE IGUAL str SALTOLINE   { printf("Expects ;\n");}
    |         TIPO2 VARIABLE IGUAL cadena_pow SALTOLINE   { printf("Expects ;\n");}
    |         TIPO3 VARIABLE IGUAL exp_entera SALTOLINE   { printf("Expects ;\n");}
    |         TIPO3 VARIABLE IGUAL exp_decimal SALTOLINE   { printf("Expects ;\n");}
    //DECLARACIONES INCOMPATIBLES
    |         TIPO1 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects int\n");}
    |         TIPO1 VARIABLE IGUAL str PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects int\n");}
    |         TIPO1 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects int\n");}
    |         TIPO2 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects float\n");}
    |         TIPO2 VARIABLE IGUAL str PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects float\n");}
    |         TIPO2 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects float\n");}
    |         TIPO3 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects string\n");}
    |         TIPO3 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   { yyerror("Incompatible declaration, expects string\n");}
;

//DECLARACIÓN DE VARIABLES
declaracion_variables:    
              TIPO1 VARIABLE PTOCOMA SALTOLINE    { 
                                                    if(existeVar(ts, $2)){
                                                      yyerror("Previus declaration of variable\n");
                                                    }
                                                    else{
                                                      NODO a = crearNodoInt(0, $2);
                                                      insertarNodo(ts, a);
                                                    }
                                                    verTabla(ts);free($2);
                                                  }    
    |         TIPO2 VARIABLE PTOCOMA SALTOLINE    { 
                                                    if(existeVar(ts, $2)){
                                                      yyerror("Previus declaration of variable\n");
                                                    }
                                                    else{
                                                      NODO a = crearNodoFloat(0, $2);
                                                      insertarNodo(ts, a);
                                                    }
                                                    verTabla(ts);free($2);
                                                  }
    |         TIPO3 VARIABLE PTOCOMA SALTOLINE    {
                                                    if(existeVar(ts, $2)){
                                                      yyerror("Previus declaration of variable\n");
                                                    }
                                                    else{
                                                      NODO a = crearNodoString("", $2);
                                                      insertarNodo(ts, a); 
                                                    }
                                                    verTabla(ts);free($2);
                                                  } 
    |         TIPO1 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { 
                                                                    if(existeVar(ts, $2)){
                                                                      yyerror("Previus declaration of variable\n");
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoInt($4, $2);
                                                                      insertarNodo(ts, a);
                                                                    }
                                                                    verTabla(ts);free($2);
                                                                  }
    |         TIPO2 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   {  if(existeVar(ts, $2)){
                                                                        yyerror("Previus declaration of variable\n");
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoFloat($4, $2);
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      verTabla(ts);free($2);
                                                                    }
    |         TIPO3 VARIABLE IGUAL str PTOCOMA SALTOLINE   { 
                                                              if(existeVar(ts, $2)){
                                                                yyerror("Previus declaration of variable\n");
                                                              }
                                                              else{
                                                                NODO a = crearNodoString($4,$2);
                                                                insertarNodo(ts, a); 
                                                              }
                                                              verTabla(ts);free($2);free($4);
                                                            }
    |         TIPO3 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { if(existeVar(ts, $2)){
                                                                      yyerror("Previus declaration of variable\n");
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoString($4, $2);
                                                                      insertarNodo(ts, a); 
                                                                    }
                                                                    verTabla(ts);free($2);free($4);
                                                                  }   
;

//ASIGNACIÓN DE VARIBLES
asignar_variables:    
              VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { 
                                                              if(!existeVar(ts, $1))
                                                                yyerror("Variable not declarated\n");
                                                              else{
                                                                if(getType(ts, $1) != 1)
                                                                  yyerror("Incompatible declaration");
                                                                else
                                                                  updateVarInt(ts, $3, $1);
                                                              }
                                                              verTabla(ts);free($1);
                                                            }
    |         VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE  { 
                                                              if(!existeVar(ts, $1))
                                                                yyerror("Variable not declarated\n");
                                                              else{
                                                                if(getType(ts, $1) != 2)
                                                                  yyerror("Incompatible declaration");
                                                                else
                                                                  updateVarFloat(ts, $3, $1);
                                                              }
                                                              verTabla(ts);free($1);
                                                            }
    |         VARIABLE IGUAL str PTOCOMA SALTOLINE   { 
                                                        if(!existeVar(ts, $1))
                                                          yyerror("Variable not declarated\n");
                                                        else{
                                                          if(getType(ts, $1) != 3)
                                                            yyerror("Incompatible declaration");
                                                          else
                                                            updateVarString(ts, $3, $1);
                                                        }
                                                        verTabla(ts);free($1);
                                                        free($1);free($3);
                                                      }
    |         VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { 
                                                              if(!existeVar(ts, $1))
                                                                yyerror("Variable not declarated\n");
                                                              else{
                                                                if(getType(ts, $1) != 3)
                                                                  yyerror("Incompatible declaration");
                                                                else
                                                                  updateVarString(ts, $3, $1);
                                                              }
                                                              verTabla(ts);free($1);
                                                              free($1);free($3);
                                                            }
;

//OPERACIÓN ENTRE VARIABLES
exp_variable:   VARIABLE          { 
                                    $$ = getVar(ts, $1);
                                    if($$ == NULL)
                                      yyerror("Variable not declarated");
                                    free($1);
                                  }
      
      |         exp_variable MAS exp_variable   { $$ = variableMasVariable($1, $3);}
      |         exp_variable MENOS exp_variable { $$ = variableMenosVariable($1, $3);} 
      |         exp_variable POR exp_variable   { $$ = variablePorVariable($1, $3);}  
      |         exp_variable DIV exp_variable   { $$ = variableDivVariable($1, $3);}
      |         POW PARABRE exp_variable COMA exp_variable PARCIERRA  { $$ = variablePowVariable($3, $5);}

      |         exp_variable MAS exp_entera     { $$ = variableMasEntero($1, $3);}
      |         exp_variable MAS exp_decimal    { $$ = variableMasFloat($1, $3);}
      |         exp_variable MAS str            { $$ = variableMasStr($1, $3);}  
      |         exp_variable MAS cadena_pow     { $$ = variableMasStr($1, $3);}
      |         exp_entera MAS exp_variable     { $$ = variableMasEntero($3, $1);}
      |         exp_decimal MAS exp_variable    { $$ = variableMasFloat($3, $1);}
      |         str MAS exp_variable            { $$ = variableMasStr($3, $1);}  
      |         cadena_pow MAS exp_variable     { $$ = variableMasStr($3, $1);}

      |         exp_variable MENOS exp_entera     { $$ = variableMenosEntero($1, $3);}
      |         exp_variable MENOS exp_decimal    { $$ = variableMenosFloat($1, $3);}
      |         exp_variable MENOS str            { $$ = variableMenosStr($1, $3);}  
      |         exp_variable MENOS cadena_pow     { $$ = variableMenosStr($1, $3);}
      |         exp_entera MENOS exp_variable     { $$ = variableMenosEntero($3, $1);}
      |         exp_decimal MENOS exp_variable    { $$ = variableMenosFloat($3, $1);}
      |         str MENOS exp_variable            { $$ = variableMenosStr($3, $1);}  
      |         cadena_pow MENOS exp_variable     { $$ = variableMenosStr($3, $1);}
;

//VarNoTerminal de potencia de cadenas, para ver cuando termina he imprimirla
cad_pow_final:    cadena_pow PTOCOMA SALTOLINE    { printf("%s\n", $1); free($1); }
      |           cadena_pow SALTOLINE            { yyerror("Expected ;");}
;

cadena_pow:   POW PARABRE str COMA exp_entera  PARCIERRA  {
                                                            $$ = (char *) malloc((sizeof(char) * tam($3) * val_abs($5))+1);
                                                            pow_cad($$, $3, $5);
                                                            free($3);
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
      |       POW PARABRE cadena_pow COMA exp_entera PARCIERRA   {
                                                                  $$ = (char *) malloc((sizeof(char) * tam($3) * val_abs($5))+1);
                                                                  pow_cad($$, $3, $5);
                                                                  free($3);
                                                                }
      |       cadena_pow MAS cadena_pow   {
                                            $$ = (char*) malloc(sizeof(char) * ((tam($1) + tam($3)) + 1));
                                            mystrcat($$, $1, $3);
                                            free($1); free($3);
                                          }                                                                   
;


//VarNoTerminal de la operación con str, para ver cuando acaba e imprimirla
cadena:   str PTOCOMA SALTOLINE   { printf("%s\n", $1); free($1);}
  |       str SALTOLINE           { yyerror("Expected ;");}
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
calc  :   exp_entera PTOCOMA SALTOLINE  { printf ("%d\n", $1); }
  |       exp_decimal PTOCOMA SALTOLINE { printf("%f\n", $1);  } 
  |       exp_entera SALTOLINE          { yyerror("Expected ;");}                            
  |       exp_decimal SALTOLINE         { yyerror("Expected ;");}
;

exp_entera :       ENTERO                {$$ = $1;}
    |       MENOS ENTERO                 {$$ = -1 * $2;}
    |       exp_entera MAS exp_entera    {$$ = $1 + $3;}
    |       exp_entera MENOS exp_entera  {$$ = $1 - $3;}
    |       exp_entera POR exp_entera    {$$ = $1 * $3;}
    |       exp_entera DIV exp_entera    {$$ = $1 / $3;}
    |       PARABRE exp_entera PARCIERRA {$$ = $2;}
    |       POW PARABRE exp_entera COMA exp_entera PARCIERRA   {$$ = (int) pow_num($3, $5);}
;

exp_decimal :       DECIMAL                {$$ = $1;}
    |       MENOS DECIMAL                  {$$ = -1.0 * $2;}
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
    |       POW PARABRE exp_decimal COMA exp_entera PARCIERRA   {$$ = pow_num($3, $5);}
;

%%

//CÓDIGO EN C

//Main de todo el programa
int main(int argc,char **argv){
  printf("+ / * - de Enteros y Decimales;  + y ^ de Cadenas;\n");
  ts = (TABLA_SIMBOLOS *) malloc(sizeof(TABLA_SIMBOLOS));
  init_tabla(ts);
  yyparse();
  free(ts);
  return 0;
}


void yyerror(char *s){
  fprintf (stderr, "%s\n", s);
}