#ifndef FUNCIONES
#define FUNCIONES

//Funciones utilizadas en proyect_bison.y

//Retorna el tamaño de una char*
int tam(char *a);
//Le concatena a char *b la cadena char *c y la guarda en char *a
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


#endif