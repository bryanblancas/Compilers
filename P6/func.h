#ifndef FUNCIONES
#define FUNCIONES
#define MYINT 1
#define MYFLOAT 2
#define MYSTRING 3
#define azul "\x1B[36m"
#define rojo "\033[0;31m"
#define amarillo "\x1B[33m"
#define cerrar "\x1B[00m"

typedef struct nodo{
	int type;
	char* name;
	int tipo1;
	float tipo2;
	char* tipo3;
	struct nodo* siguiente;
} NODO;

typedef struct tabla_simbolos{
	NODO *inicio;
	NODO *fin;
	int tam;
}TABLA_SIMBOLOS;

//Funciones utilizadas en proyect_bison.y

//Retorna el tamaño de una char*
int tam(char *a);
//Le concatena a char *b la cadena char *c y la guarda en char *a, con previa declaración del tamaño de char *a
void mystrcat(char *a, char *b, char *c);
//Le resta a char *b la cadena char *c y la guarda en char *a
void mystrrest(char *a, char *b, char *c);
//Eleva char *b a la potencia "potencia" y la guarda en char *a
void pow_cad(char *a, char *b, int potencia);
//Retorna 1 si dentro de char *a existe char *b, de lo contrario retorna 0
int exists(char *a, char *b);
//Copia el contenido de char *b en b[inicio:final] y lo guarda en char *b
void mystrcpy2(char* a, char *b, int inicio, int final);
//retorna el valor absoluto de a
int val_abs(int a);
//retorna a elevado a la b
float pow_num(float a, int b);



//FUNCIONES DE TABLA DE SIMBOLOS
//Inicializa la tabla de simbolos 
void init_tabla(TABLA_SIMBOLOS *ts);
//Inserta un nuevo nodo a la tabla de símbolos
void insertarNodo(TABLA_SIMBOLOS *ts,NODO n);
//Retorna un 1 si la tabla está vacía
int vacia(TABLA_SIMBOLOS *ts);
//Crea un nuevo nodo de una variable int
NODO crearNodoInt(int a, char* name);
//Crea un nuevo nodo de una variable float
NODO crearNodoFloat(float a, char* name);
//Crea un nuevo nodo de una variable string
NODO crearNodoString(char *a, char* name);
//Actualiza el valor de una variable int
void updateVarInt(TABLA_SIMBOLOS *ts, int a, char* name);
//Actualiza el valor de una variable float
void updateVarFloat(TABLA_SIMBOLOS *ts, float a, char* name);
//Actualiza el valor de una variable string
void updateVarString(TABLA_SIMBOLOS *ts, char* a, char* name);
//Retorna un 1 si existe la variable
int existeVar(TABLA_SIMBOLOS *ts, char* name);
//Retorna el tipo de variable de la variable char *a
int getType(TABLA_SIMBOLOS *ts, char *a);
//Retorna el valor de una variable int
int getIntValue(TABLA_SIMBOLOS *ts, char *name);
//Retorna el valor de una variable float
float getFloatValue(TABLA_SIMBOLOS *ts, char *name);
//Retorna el valor de una variable string
char* getStringValue(TABLA_SIMBOLOS *ts, char *name);
//Retorna 1 si las cadenas son iguales
int mystrcmp(char *a, char *b);
//Retorna el valor de una variable 
void * getVar(TABLA_SIMBOLOS *ts, char *name);
//Retorna el mismo nodo
void * getVarWithoutName(void* a);
//Ver la tabla de símbolos
void verTabla(TABLA_SIMBOLOS *ts);
//Copia el contenido del nodo a a el nodo con el nombre name
void copiarNodo(TABLA_SIMBOLOS *ts, char *name, void* a);

//OPERACIONES DE VARIABLES
//Retorna un nuevo nodo con el resultado de la operación
void* menosVariable(TABLA_SIMBOLOS *ts, char* a);
void* variableMasVariable(void* a, void* b);
void* variableMenosVariable(void* a, void* b);
void* variablePorVariable(void* a, void* b);
void* variableDivVariable(void* a, void* b);
void* variablePowVariable(void* a, void* b);

void* variableMasEntero(void* a, int b);
void* variableMasFloat(void* a,float b);
void* variableMasStr(void* a, char* b, int s);

void* variableMenosEntero(void* a, int b, int s);
void* variableMenosFloat(void* a,float b, int s);
void* variableMenosStr(void* a, char* b, int s);

void* variablePorEntero(void* a, int b);
void* variablePorFloat(void* a, float b);

void* variableDivEntero(void* a, int b, int s);
void* variableDivFloat(void* a, float b, int s);

void* variablePowEntero(void* a, int b, int s);
void* variablePowFloat(void* a, float b);
void* strPowVariable(void* a, char *b);

#endif