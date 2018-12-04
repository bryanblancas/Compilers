%{
  //CÓDIGO EN C
  #include <stdio.h>
  #include <stdlib.h>
  #include "func.h"

  //DEFINICIÓN DE FUNCIONES PROPIAS DE BISON
  extern int yylex(void);
  extern char *yytext;
  void yyerror(char *s);
  extern FILE *yyin;

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
  |       input str PTOCOMA SALTOLINE           { printf(azul">> %s\n"cerrar, $2); free($2);}
  |       input cadena_pow PTOCOMA SALTOLINE    { printf(azul">> %s\n"cerrar, $2); free($2);}
  |       input declaracion_variables           
  |       input asignar_variables
  |       input exp_variable PTOCOMA SALTOLINE  {
                                                  if($2 != NULL){
                                                    NODO* na = (NODO *) $2;
                                                    if(na->type == 1)
                                                      printf(azul">> %d\n"cerrar, na->tipo1);
                                                    else if(na->type == 2)
                                                      printf(azul">> %f\n"cerrar, na->tipo2);
                                                    else if(na->type == 3)
                                                      printf(azul">> %s\n"cerrar, na->tipo3);
                                                  }
                                                }
  |       input errores 
  |       PTOCOMA SALTOLINE                     { printf(amarillo"Expected arguments\n"cerrar);}
  |       SALTOLINE                             { printf(amarillo"Expected arguments\n"cerrar);}
;

/*
//VarNoTerminal de potencia de cadenas, para ver cuando termina he imprimirla
cad_pow_final:    cadena_pow PTOCOMA SALTOLINE    { printf(azul"%s\n"cerrar, $1); free($1); }
      |           cadena_pow SALTOLINE            { printf(amarillo"Expected ;\n"cerrar);}
;
//VarNoTerminal de la operación con str, para ver cuando acaba e imprimirla
cadena:   str PTOCOMA SALTOLINE   { printf(azul"%s\n"cerrar, $1); free($1);}
  |       str SALTOLINE           { printf(amarillo"Expected ;\n"cerrar);}
;
*/
//VarNoTerminal de las operaciones aritméticas, para ver cuando acaba e imprimirla
calc  :   exp_entera PTOCOMA SALTOLINE  { printf(azul">> %d\n"cerrar, $1); }
  |       exp_decimal PTOCOMA SALTOLINE { printf(azul">> %f\n"cerrar, $1);  } 
;


/**
**
**  Sección de errores cachables por la gramática
**
**/

errores:      TIPO1 VARIABLE SALTOLINE    { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO2 VARIABLE SALTOLINE    { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO3 VARIABLE SALTOLINE    { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL exp_entera SALTOLINE   { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL exp_decimal SALTOLINE   { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL str SALTOLINE   { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL cadena_pow SALTOLINE   { printf(amarillo"Expected ;\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL exp_decimal SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL str SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL cadena_pow SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL exp_entera SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL str SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL cadena_pow SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL exp_entera SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL exp_decimal SALTOLINE   { printf(amarillo"Expects ;\n"cerrar);}
    //DECLARACIONES INCOMPATIBLES
    //|         TIPO1 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL str PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
    |         TIPO1 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects int\n"cerrar);}
    //|         TIPO2 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects float\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL str PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects float\n"cerrar);}
    |         TIPO2 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects float\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
    |         TIPO3 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   { printf(amarillo"Incompatible declaration, expects string\n"cerrar);}
    //Otros errores
    |         cadena_pow SALTOLINE            { printf(amarillo"Expected ;\n"cerrar);}
    |         str SALTOLINE                   { printf(amarillo"Expected ;\n"cerrar);}
    |         exp_entera SALTOLINE            { printf(amarillo"Expected ;\n"cerrar);}                            
    |         exp_decimal SALTOLINE           { printf(amarillo"Expected ;\n"cerrar);}
    |         str POR str                     { printf(amarillo"Operation not supported\n"cerrar);}
    |         str POR cadena_pow              { printf(amarillo"Operation not supported\n"cerrar);}
    |         cadena_pow POR str              { printf(amarillo"Operation not supported\n"cerrar);}
    |         exp_variable POR str            { printf(amarillo"Operation not supported\n"cerrar);}
    |         str POR exp_variable            { printf(amarillo"Operation not supported\n"cerrar);}
    |         exp_variable POR cadena_pow     { printf(amarillo"Operation not supported\n"cerrar);}
    |         cadena_pow POR exp_variable     { printf(amarillo"Operation not supported\n"cerrar);}
    |         str DIV str                     { printf(amarillo"Operation not supported\n"cerrar);}
    |         str DIV cadena_pow              { printf(amarillo"Operation not supported\n"cerrar);}
    |         cadena_pow DIV str              { printf(amarillo"Operation not supported\n"cerrar);}
    |         exp_variable DIV str            { printf(amarillo"Operation not supported\n"cerrar);}
    |         str DIV exp_variable            { printf(amarillo"Operation not supported\n"cerrar);}
    |         exp_variable DIV cadena_pow     { printf(amarillo"Operation not supported\n"cerrar);}
    |         cadena_pow DIV exp_variable     { printf(amarillo"Operation not supported\n"cerrar);}
    |         POW PARABRE exp_variable COMA exp_decimal PARCIERRA     { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_variable COMA cadena_pow PARCIERRA      { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_variable COMA str PARCIERRA             { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE str COMA exp_decimal PARCIERRA              { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE str COMA cadena_pow PARCIERRA               { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE str COMA str PARCIERRA                      { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE cadena_pow COMA exp_decimal PARCIERRA       { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE cadena_pow COMA cadena_pow PARCIERRA        { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE cadena_pow COMA str PARCIERRA               { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_entera COMA exp_decimal PARCIERRA       { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_entera COMA cadena_pow PARCIERRA        { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_entera COMA str PARCIERRA               { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_decimal COMA exp_decimal PARCIERRA      { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_decimal COMA cadena_pow PARCIERRA       { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
    |         POW PARABRE exp_decimal COMA str PARCIERRA              { printf(amarillo"Invalid arguments, use pow(element, int); \n"cerrar);}
;

/**
**
**  Sección de declaración de variables
**  int|float|string var;
**  int|float|string var = int|float|string|var;
**
**/

declaracion_variables:    
              TIPO1 VARIABLE PTOCOMA SALTOLINE    { 
                                                    if(existeVar(ts, $2)){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                    }
                                                    else{
                                                      NODO a = crearNodoInt(0, $2);
                                                      insertarNodo(ts, a);
                                                    }
                                                    //verTabla(ts);
                                                    free($2);
                                                  }    
    |         TIPO2 VARIABLE PTOCOMA SALTOLINE    { 
                                                    if(existeVar(ts, $2)){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                    }
                                                    else{
                                                      NODO a = crearNodoFloat(0, $2);
                                                      insertarNodo(ts, a);
                                                    }
                                                    //verTabla(ts);
                                                    free($2);
                                                  }
    |         TIPO3 VARIABLE PTOCOMA SALTOLINE    {
                                                    if(existeVar(ts, $2)){
                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                    }
                                                    else{
                                                      NODO a = crearNodoString("", $2);
                                                      insertarNodo(ts, a); 
                                                    }
                                                    //verTabla(ts);
                                                    free($2);
                                                  } 
    |         TIPO1 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { 
                                                                    if(existeVar(ts, $2)){
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoInt($4, $2);
                                                                      insertarNodo(ts, a);
                                                                    }
                                                                    //verTabla(ts);
                                                                    free($2);
                                                                  }
    |         TIPO1 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   {
                                                                      if(existeVar(ts, $2)){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoInt((int) $4, $2);
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free($2);
                                                                    }                                                              
    |         TIPO2 VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE   {  
                                                                      if(existeVar(ts, $2)){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoFloat($4, $2);
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free($2);
                                                                    }
    |         TIPO2 VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE     {
                                                                      if(existeVar(ts, $2)){
                                                                        printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                      }
                                                                      else{
                                                                        NODO a = crearNodoFloat((float) $4, $2);
                                                                        insertarNodo(ts, a);
                                                                      }
                                                                      //verTabla(ts);
                                                                      free($2);
                                                                    }                                                                     
    |         TIPO3 VARIABLE IGUAL str PTOCOMA SALTOLINE   { 
                                                              if(existeVar(ts, $2)){
                                                                printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                              }
                                                              else{
                                                                NODO a = crearNodoString($4,$2);
                                                                insertarNodo(ts, a); 
                                                              }
                                                              //verTabla(ts);
                                                              free($2);free($4);
                                                            }
    |         TIPO3 VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { 
                                                                    if(existeVar(ts, $2)){
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                    }
                                                                    else{
                                                                      NODO a = crearNodoString($4, $2);
                                                                      insertarNodo(ts, a); 
                                                                    }
                                                                    //verTabla(ts);
                                                                    free($2);free($4);
                                                                  }  
    |         TIPO1 VARIABLE IGUAL exp_variable PTOCOMA SALTOLINE {
                                                                    if(existeVar(ts, $2))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                    else{
                                                                      NODO a = crearNodoInt(0, $2);
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,$2,$4);
                                                                    }
                                                                    free($2);
                                                                  } 
    |         TIPO2 VARIABLE IGUAL exp_variable PTOCOMA SALTOLINE {
                                                                    if(existeVar(ts, $2))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                    else{
                                                                      NODO a = crearNodoFloat(0.0, $2);
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,$2,$4);
                                                                    }
                                                                    free($2);
                                                                  }                                                                    
    |         TIPO3 VARIABLE IGUAL exp_variable PTOCOMA SALTOLINE {
                                                                    if(existeVar(ts, $2))
                                                                      printf(amarillo"Variable << %s >> already exists\n"cerrar,$2);
                                                                    else{
                                                                      NODO a = crearNodoString("", $2);
                                                                      insertarNodo(ts, a);
                                                                      copiarNodo(ts,$2,$4);
                                                                    }
                                                                    free($2);
                                                                  }                                                                   
;

/**
**
**  Sección de asignación de variables 
**  var = int|float|string|var
**
**/

asignar_variables:    
              VARIABLE IGUAL exp_entera PTOCOMA SALTOLINE   { 
                                                              if(!existeVar(ts, $1))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                                              else{
                                                                if(getType(ts, $1) != 1 && getType(ts, $1) != 2)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarInt(ts,(int) $3, $1);
                                                              }
                                                              //verTabla(ts);
                                                              free($1);
                                                            }
    |         VARIABLE IGUAL exp_decimal PTOCOMA SALTOLINE  { 
                                                              if(!existeVar(ts, $1))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                                              else{
                                                                if(getType(ts, $1) != 2 && getType(ts, $1) != 1)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarFloat(ts,(float) $3, $1);
                                                              }
                                                              //verTabla(ts);
                                                              free($1);
                                                            }
    |         VARIABLE IGUAL str PTOCOMA SALTOLINE   { 
                                                        if(!existeVar(ts, $1))
                                                          printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                                        else{
                                                          if(getType(ts, $1) != 3)
                                                            printf(amarillo"Incompatible declaration\n"cerrar);
                                                          else
                                                            updateVarString(ts, $3, $1);
                                                        }
                                                        //verTabla(ts);
                                                        free($1);free($3);
                                                      }
    |         VARIABLE IGUAL cadena_pow PTOCOMA SALTOLINE   { 
                                                              if(!existeVar(ts, $1))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                                              else{
                                                                if(getType(ts, $1) != 3)
                                                                  printf(amarillo"Incompatible declaration\n"cerrar);
                                                                else
                                                                  updateVarString(ts, $3, $1);
                                                              }
                                                              //verTabla(ts);
                                                              free($1);free($3);
                                                            }
    |         VARIABLE IGUAL exp_variable PTOCOMA SALTOLINE {
                                                              if(!existeVar(ts, $1))
                                                                printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                                              else{
                                                                copiarNodo(ts,$1,$3);
                                                              }
                                                            }
;

/**
**
**  Sección de operaciones entre variables
**  var  -var   var +-/*pow() var   var /*-+ int|float|string
**  int|float|string /*-+ var
**
**/

exp_variable:   VARIABLE          { 
                                    $$ = getVar(ts, $1);
                                    if($$ == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, $1);
                                    free($1);
                                  }
      
      |         MENOS VARIABLE    {
                                    $$ = getVar(ts, $2);
                                    if($$ == NULL)
                                      printf(amarillo"Undeclared variable << %s >>\n"cerrar, $2);
                                    else
                                      $$ = menosVariable(ts, $2);
                                    free($2);
                                  }
      |         exp_variable MAS exp_variable   { $$ = variableMasVariable($1, $3);}
      |         exp_variable MENOS exp_variable { $$ = variableMenosVariable($1, $3);} 
      |         exp_variable POR exp_variable   { $$ = variablePorVariable($1, $3);}  
      |         exp_variable DIV exp_variable   { $$ = variableDivVariable($1, $3);}
      |         POW PARABRE exp_variable COMA exp_variable PARCIERRA  { $$ = variablePowVariable($3, $5);}
      |         PARABRE exp_variable PARCIERRA  { $$ = getVarWithoutName($2);}


      |         exp_variable MAS exp_entera     { $$ = variableMasEntero($1, $3);}
      |         exp_variable MAS exp_decimal    { $$ = variableMasFloat($1, $3);}
      |         exp_variable MAS str            { $$ = variableMasStr($1, $3, 1);}  
      |         exp_variable MAS cadena_pow     { $$ = variableMasStr($1, $3, 1);}
      |         exp_entera MAS exp_variable     { $$ = variableMasEntero($3, $1);}
      |         exp_decimal MAS exp_variable    { $$ = variableMasFloat($3, $1);}
      |         str MAS exp_variable            { $$ = variableMasStr($3, $1, 0);}  
      |         cadena_pow MAS exp_variable     { $$ = variableMasStr($3, $1, 0);}


      |         exp_variable MENOS exp_entera     { $$ = variableMenosEntero($1, $3, 1);}
      |         exp_variable MENOS exp_decimal    { $$ = variableMenosFloat($1, $3, 1);}
      |         exp_variable MENOS str            { $$ = variableMenosStr($1, $3, 1);}  
      |         exp_variable MENOS cadena_pow     { $$ = variableMenosStr($1, $3, 1);}
      |         exp_entera MENOS exp_variable     { $$ = variableMenosEntero($3, $1, 0);}
      |         exp_decimal MENOS exp_variable    { $$ = variableMenosFloat($3, $1, 0);}
      |         str MENOS exp_variable            { $$ = variableMenosStr($3, $1, 0);}  
      |         cadena_pow MENOS exp_variable     { $$ = variableMenosStr($3, $1, 0);}

      //AGREGAR A ERRORES ESTO CON STR Y str
      |         exp_variable POR exp_entera       { $$ = variablePorEntero($1, $3);}
      |         exp_variable POR exp_decimal      { $$ = variablePorFloat($1, $3);}
      |         exp_entera POR exp_variable       { $$ = variablePorEntero($3, $1);}
      |         exp_decimal POR exp_variable      { $$ = variablePorFloat($3, $1);}

      //AGREGAR A ERRORES ESTO CON STR Y POW
      |         exp_variable DIV exp_entera       { $$ = variableDivEntero($1, $3, 1);}
      |         exp_variable DIV exp_decimal      { $$ = variableDivFloat($1, $3, 1);}
      |         exp_entera DIV exp_variable       { $$ = variableDivEntero($3, $1, 0);}
      |         exp_decimal DIV exp_variable      { $$ = variableDivFloat($3, $1, 0);}

      //AGREGAR A ERRORES OPERACIONES NO COMPATIBLES
      |         POW PARABRE exp_variable COMA exp_entera PARCIERRA    { $$ = variablePowEntero($3, $5, 1);}
      |         POW PARABRE exp_entera COMA exp_variable PARCIERRA    { $$ = variablePowEntero($5, $3, 0);}
      |         POW PARABRE exp_decimal COMA exp_variable PARCIERRA   { $$ = variablePowFloat($5, $3);}
      |         POW PARABRE str COMA exp_variable PARCIERRA           { $$ = strPowVariable($5, $3);}
      |         POW PARABRE cadena_pow COMA exp_variable PARCIERRA    { $$ = strPowVariable($5, $3);}
;

/**
**
**  Sección de potencia de cadenas
**  pow(str|pow(), int)
**  str + pow()    pow() + str     pow() + pow()
**
**/

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

/**
**
**  Sección de operaciones con String
**  str + str     str - str    
**
**/

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

/**
**
**  Sección de operaciones aritméticas
**  int +/*- int    float +*-/ float  pow(int|float , int)  
**
**/

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
  //printf("+ / * - de Enteros y Decimales;  + y ^ de Cadenas;\n");
  ts = (TABLA_SIMBOLOS *) malloc(sizeof(TABLA_SIMBOLOS));
  init_tabla(ts);
  
  if(argc == 2)
    yyin = fopen(argv[1], "r");
  
  while(1)
    yyparse();
  
  free(ts);
  return 0;
}


void yyerror(char *s){
  fprintf (stderr, rojo"%s\n"cerrar, s);
}