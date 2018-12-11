#include <stdio.h>
#include <stdlib.h>
#include "func.h"
 
//Funciones utilizadas en proyect_bison.y

void pow_cad(char *a, char *b, int potencia){
  int i = 0, j, index = 0;
  
  if(potencia >= 0){
    while(i < potencia){
      for(j = 0; j < tam(b); j++)
        a[index++] = b[j];
      i++;
    }
    a[index] = '\0';
  }

  else{
    potencia = val_abs(potencia);
    while(i < potencia){
      for(j = tam(b) - 1; j >= 0; j--)
        a[index++] = b[j];
      i++;
    }
    a[index] = '\0';
  }

}

int val_abs(int a){
  if(a < 0)
    return a*-1;
  return a;
}

int tam(char *a){
  int i=0;
  while(a[i++]);
  return i-1;
}

void mystrcat(char *a, char *b, char *c){
  int i;
  for(i=0; i < tam(b);i++)
    a[i] = b[i];
  for(int j=0; j < tam(c); j++)
    a[i++] = c[j];
  a[i] = '\0';
}

int exists(char *a, char *b){
  int i;
  for(i = 0; i < tam(a); i++)
    if(a[i] != b[i])
      return 0;
  return 1;
}

void mystrcpy2(char* a, char *b, int inicio, int final){
  int i = inicio, j = 0;
  while(i <= final){
    a[j] = b[i];
    i++;
    j++;
  }
  a[j] = '\0';
}

void mystrrest(char *a, char *b, char *c){
  int tamb = tam(b) - 1, tamc = tam(c), i = 0, inicio, final, auxa = 0, auxb;
  char *aux = (char *) malloc(sizeof(char) * tamc + 1);

  if(tamb+1 >= tamc)   
    while(i <= tamb){
      inicio = i;
      final = i + tamc - 1;

      if( final > tamb)
        break;

      mystrcpy2(aux, b, inicio, final);
      
      if(exists(aux, c)){
        //printf("primer for %d %d\n", 0, inicio-1);
        for(auxb = 0; auxb < inicio; auxb++)
          a[auxa++] = b[auxb];
        //printf("segundo for %d %d\n", final+1, tamb);
        for(auxb = final+1; auxb <= tamb; auxb++)
          a[auxa++] = b[auxb];
        a[auxa] = '\0';
        return;
      }
      
      i++;
    }

  mystrcpy2(a, b, 0, tamb);
  a[tamb+1] = '\0';

}


double pow_num(double a, int b){
	double rtn = 1, flag = 0;
	
	if(b < 0) b = val_abs(b);
	else flag = 1;

	while(b-- > 0)
		rtn *= a;
	
	if(flag)
		return rtn;
	return 1/rtn;
}

int getIntValue(TABLA_SIMBOLOS *ts, char *name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			return actual -> tipo1;
		}
	return 0;
}
double getFloatValue(TABLA_SIMBOLOS *ts, char *name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			return actual -> tipo2;
		}
	return 0.0;
}
char* getStringValue(TABLA_SIMBOLOS *ts, char *name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			return actual -> tipo3;
		}
	return 0;
}

int getType(TABLA_SIMBOLOS *ts, char* name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			return actual -> type;
		}
	return 0;
}

void updateVarInt(TABLA_SIMBOLOS *ts, int a, char* name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			if(actual -> type == 1)
				actual -> tipo1 = a;
			else if(actual -> type == 2)
				actual -> tipo2 = a;
			break;
		}
}

void updateVarFloat(TABLA_SIMBOLOS *ts, double a, char* name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			if(actual -> type == 1)
				actual -> tipo1 = a;
			else if(actual -> type == 2)
				actual -> tipo2 = a;
			break;
		}
}

void updateVarString(TABLA_SIMBOLOS *ts, char* a, char* name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			actual -> tipo3 = (char*) malloc(sizeof(char) * tam(a));
			mystrcpy2(actual->tipo3, a, 0, tam(a));
			break;
		}
}


int existeVar(TABLA_SIMBOLOS *ts, char* name){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name))
			return 1;
	return 0;
}

void init_tabla(TABLA_SIMBOLOS *ts){
	ts -> inicio = NULL;
	ts -> fin = NULL;
	ts -> tam = 0;
}

void insertarNodo(TABLA_SIMBOLOS *ts,NODO n){
	NODO *temp;
	
	temp=(NODO *)malloc(sizeof(NODO));
	if(temp==NULL)
		printf("NO_MEMORY");
	
	*temp=n;
	
	if(existeVar(ts, temp -> name)){
		printf("NO se puede agregar el elemento\n");
		return;
	}

	if(vacia(ts)){
		temp -> siguiente = NULL;
		ts -> inicio = temp;
		ts -> fin = temp;
		ts -> tam++;
	} else{
		temp -> siguiente = NULL;
		ts -> fin -> siguiente = temp;
		ts -> fin = temp;
		ts -> tam++;
	}
}

NODO crearNodoInt(int a, char* name){
	NODO *n = (NODO *) malloc(sizeof(NODO));
	n -> type = MYINT;
	n -> name = (char*) malloc(sizeof(char) * tam(name));
	mystrcpy2(n->name, name, 0, tam(name));
	n -> tipo1 = a;
	n -> tipo2 = 0.0;
	n -> tipo3 = NULL;
	n -> siguiente = NULL;

	return *n;
}

NODO crearNodoFloat(double a, char* name){
	NODO *n = (NODO *) malloc(sizeof(NODO));
	n -> type = MYDOUBLE;
	n -> name = (char*) malloc(sizeof(char) * tam(name));
	mystrcpy2(n->name, name, 0, tam(name));
	n -> tipo1 = 0;
	n -> tipo2 = a;
	n -> tipo3 = NULL;
	n -> siguiente = NULL;

	return *n;
}

NODO crearNodoString(char *a, char* name){
	NODO *n = (NODO *) malloc(sizeof(NODO));
	n -> type = MYSTRING;
	n -> name = (char*) malloc(sizeof(char) * tam(name));
	mystrcpy2(n->name, name, 0, tam(name));
	n -> tipo1 = 0;
	n -> tipo2 = 0.0;
	n -> tipo3 = (char*) malloc(sizeof(char) * tam(a));
	mystrcpy2(n->tipo3, a, 0, tam(a));
	n -> siguiente = NULL;

	return *n;
}

int vacia(TABLA_SIMBOLOS *ts){
	if(ts -> fin==NULL && ts -> inicio==NULL)
		return 1;
	return 0;
}

int mystrcmp(char *a, char *b){
	if(tam(a) != tam(b))
		return 0;

	for(int i = 0; i < tam(a); i++)
		if(a[i] != b[i])
			return 0;
	return 1;
}

void * getVar(TABLA_SIMBOLOS *ts, char *name){
	void * rtn = NULL;
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
		if(mystrcmp(actual -> name, name)){
			rtn = (void *) actual;
			return rtn;
		}
	return rtn;
}

void * getVarWithoutName(void* a){
	NODO *actual = (NODO *) a;
	return actual;
}

void verTabla(TABLA_SIMBOLOS *ts){
	NODO *actual;
	for(actual = ts -> inicio; actual != NULL ; actual = actual -> siguiente)
			printf("%5d %5d %3.3f %10s %10s\n", actual -> type, actual -> tipo1, actual -> tipo2, actual -> tipo3, actual -> name);
}

void copiarNodo(TABLA_SIMBOLOS *ts, char *name, void* a){
	if(a == NULL){ printf(amarillo"Variable not declarated\n"cerrar);return;}
	NODO *na = (NODO *) a;
	NODO *udt_nodo = (NODO *) getVar(ts, name); 
	int nat = na->type, nt = udt_nodo -> type; 
	if((nat==1 && nat==1) || (nat==1 && nat==2) || (nat==2 && nat==1) || (nat==2 && nat==2)){
		if(udt_nodo->type == 1){
			if(na->type == 1)
				udt_nodo -> tipo1 = na -> tipo1;
			else
				udt_nodo -> tipo1 = (int) na -> tipo2;
		}
		else if(udt_nodo->type == 2){
			if(na->type == 1)
				udt_nodo -> tipo2 =(double) na -> tipo1;
			else
				udt_nodo -> tipo2 = na -> tipo2;
		}
	}
	else if(nat==3 && nat==3){
		udt_nodo->tipo3 = (char *) malloc(sizeof(char)*tam(na->tipo3)+1);
		mystrcpy2(udt_nodo->tipo3, na->tipo3, 0, tam(na->tipo3));
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
	}

}

/**
**
**
**	OPERACIONES CON VARIABLES
**
**
**/

void* menosVariable(TABLA_SIMBOLOS *ts,char* name){
	NODO *na = (NODO *) getVar(ts, name); 
	if(na == NULL) return NULL;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		result -> tipo1 = -1 * na->tipo1;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		result -> tipo2 = -1.0 * na->tipo2;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* menosExpVariable(void* name){
	NODO *na = (NODO *) getVarWithoutName(name); 
	if(na == NULL) {return NULL;}
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		result -> tipo1 = -1 * na->tipo1;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		result -> tipo2 = -1.0 * na->tipo2;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableMasVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1 && nb -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) + (nb->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 1 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo1) + (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 1){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) + (nb->tipo1);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) + (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 3 && nb -> type == 3){
		result -> type = MYSTRING;
		result -> tipo3 = (char*) malloc(sizeof(char) * ((tam(na->tipo3) + tam(nb->tipo3)) + 1));
		mystrcat(result -> tipo3, na -> tipo3, nb -> tipo3);
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands 1\n"cerrar);
		return NULL;
	}
}

void* variableMenosVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1 && nb -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) - (nb->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 1 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo1) - (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 1){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) - (nb->tipo1);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) - (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 3 && nb -> type == 3){
		result -> type = MYSTRING;
		result -> tipo3 = (char *) malloc(sizeof(char) * tam(na->tipo3) + 1);
        mystrrest(result -> tipo3, na->tipo3, nb->tipo3);
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variablePorVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1 && nb -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) * (nb->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 1 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo1) * (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 1){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) * (nb->tipo1);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) * (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableDivVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1 && nb -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) / (nb->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 1 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo1) / (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 1){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) / (nb->tipo1);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) / (nb->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variablePowVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1 && nb -> type == 1){
		result -> type = MYINT;
		int a = pow_num(na->tipo1, nb->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2 && nb -> type == 1){
		result -> type = MYDOUBLE;
		double a = pow_num(na->tipo2, nb->tipo1);
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 3 && nb -> type == 1){
		result -> type = MYSTRING;
		result -> tipo3 = (char *) malloc((sizeof(char) * tam(na->tipo3) * val_abs(nb->tipo1))+1);
		pow_cad(result -> tipo3, na->tipo3, nb->tipo1);
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableModVariable(void* a, void* b){
	if(a == NULL || b == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;
	NODO* result = (NODO*) malloc(sizeof(NODO));
	if(na -> type == 1 && nb -> type == 1){
		if(na->tipo1 >= 0 && nb->tipo1 > 0){
			result -> type = MYINT;
			int a = na->tipo1 % nb->tipo1;
			result -> tipo1 = a;
			return (void*) result;
		}
		else{
			printf(rojo"Cannot divide by zero. Mod only works for positives\n"cerrar);
			return NULL;
		}
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}

}

void* variableMasEntero(void* a, int b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) + b;
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) + b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableMasFloat(void* a,double b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYDOUBLE;
		double a = (na->tipo1) + b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) + b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableMasStr(void* a, char* b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 3){
		result -> type = MYSTRING;
		if(s == 1){
			result -> tipo3 = (char *) malloc(sizeof(char) * tam(b) + 1);
	        mystrcat(result -> tipo3, na->tipo3, b);
	    }
	    else{
	    	result -> tipo3 = (char *) malloc(sizeof(char) * tam(na->tipo3) + 1);
	        mystrcat(result -> tipo3, b, na->tipo3);
	    }
		return (void*) result;
	}
	else{
		printf(amarillo"Operation not support\n"cerrar);
		return NULL;
	}
}

void* variableMenosEntero(void* a, int b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a;
		if(s)
			a = (na->tipo1) - b;
		else
			a = b - (na->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (na->tipo2) - b;
		else
			a = b - (na->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableMenosFloat(void* a,double b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (na->tipo1) - b;
		else
			a = b - (na->tipo1);
		result -> tipo2 = a;	
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (na->tipo2) - b;
		else
			a = b - (na->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableMenosStr(void* a, char* b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 3){
		result -> type = MYSTRING;
		if(s == 1){
			result -> tipo3 = (char *) malloc(sizeof(char) * tam(na->tipo3) + 1);
	        mystrrest(result -> tipo3, na->tipo3, b);
	    }
	    else{
	    	result -> tipo3 = (char *) malloc(sizeof(char) * tam(b) + 1);
	        mystrrest(result -> tipo3, b, na->tipo3);
	    }
		return (void*) result;
	}
	else{
		printf(amarillo"Operation not support\n"cerrar);
		return NULL;
	}
}

void* variablePorEntero(void* a, int b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a = (na->tipo1) * b;
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) * b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}	

void* variablePorFloat(void* a, double b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYDOUBLE;
		double a = (double) (na->tipo1) * b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a = (na->tipo2) * b;
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableDivEntero(void* a, int b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a;
		if(s)
			a =  (na->tipo1) / b;
		else
			a =  b / (na->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (na->tipo2) / b;
		else
			a = b / (na->tipo2);
		result -> tipo2 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}	
}

void* variableDivFloat(void* a, double b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (double) (na->tipo1) / b;
		else
			a = (double) b / (na->tipo1);
		result -> tipo2 = a;	
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = (na->tipo2) / b;
		else
			a = b / (na->tipo2);
		result -> tipo2 = a;	
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variableModuEntero(void* a, int b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		if(s){
			if(na->tipo1 >= 0 && b > 0)
				result->tipo1 = na->tipo1 % b;
			else{
				printf(amarillo" (int >= 0) %c (int > 0)\n"cerrar,'%');
				return NULL;
			}
		}
		else{
			if(na->tipo1 > 0 && b >= 0)
				result->tipo1 = b % na->tipo1;
			else{
				printf(amarillo" (int >= 0) %c (int > 0)\n"cerrar,'%');
				return NULL;
			}
		}
		return (void *) result;
	}	
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variablePowEntero(void* a, int b, int s){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a;
		if(s)
			a = pow_num(na->tipo1, b);
		else
			a = pow_num(b, na->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else if(na -> type == 2){
		result -> type = MYDOUBLE;
		double a;
		if(s)
			a = pow_num(na->tipo2, b);
		else{
			printf(amarillo"Incompatible operands, pow(element, int)\n"cerrar);
			return NULL;	
		}

		result -> tipo2 = a;
		return (void*) result;
	}
	else if(na -> type == 3){
		result -> type = MYSTRING;
		if(s){
			result -> tipo3 = (char *) malloc(sizeof(char) * tam(na->tipo3) * val_abs(b) + 1);
	        pow_cad(result -> tipo3, na->tipo3, b);
	    }
	    else{
	    	printf(amarillo"Incompatible operands\n"cerrar);
			return NULL;	
	    } 
	    return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands\n"cerrar);
		return NULL;
	}
}

void* variablePowFloat(void* a, double b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYINT;
		int a = pow_num(b, na->tipo1);
		result -> tipo1 = a;
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands, pow(element, int)\n"cerrar);
		return NULL;
	}
}

void* strPowVariable(void* a, char *b){
	if(a == NULL){ return NULL;  }
	NODO* na = (NODO *) a;
	NODO* result = (NODO*) malloc(sizeof(NODO));

	if(na -> type == 1){
		result -> type = MYSTRING;
		result->tipo3 = (char*) malloc(sizeof(char)*(tam(b)+1)*val_abs(na->tipo1));
		pow_cad(result->tipo3, b, na->tipo1);
		return (void*) result;
	}
	else{
		printf(amarillo"Incompatible operands, pow(element, int)\n"cerrar);
		return NULL;
	}
}


int variableCompVariable(void *a, void *b, int comp){
	if(a == NULL || b == NULL){ printf(amarillo" ERROR EN VARIABLE COMP VARIABLE"cerrar);}
	NODO* na = (NODO *) a;
	NODO* nb = (NODO *) b;

	if(comp == 1){
		if(na->type == 1 && nb->type == 1){
			if(na->tipo1 < nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 1 && nb->type == 2){
			if(na->tipo1 < nb->tipo2)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 1){
			if(na->tipo2 < nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 2){
			if(na->tipo2 < nb->tipo2)
				return 1;
			else
				return 0;
		}
		else{
			if(na->type == 3 && nb->type != 3){
				printf("string vs no string\n");
			}
			else if(na->type != 3 && nb->type == 3){
				printf("no string vs string\n");
			}
			else{
				if(tam(na->tipo3) < tam(nb->tipo3))
					return 1;
				else
					return 0;
			}
		}
	}
	else if(comp == 2){
		if(na->type == 1 && nb->type == 1){
			if(na->tipo1 > nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 1 && nb->type == 2){
			if(na->tipo1 > nb->tipo2)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 1){
			if(na->tipo2 > nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 2){
			if(na->tipo2 > nb->tipo2)
				return 1;
			else
				return 0;
		}
		else{
			if(na->type == 3 && nb->type != 3){
				printf("string vs no string\n");
			}
			else if(na->type != 3 && nb->type == 3){
				printf("no string vs string\n");
			}
			else{
				if(tam(na->tipo3) > tam(nb->tipo3))
					return 1;
				else
					return 0;
			}
		}
	}
	else if(comp == 3){
		if(na->type == 1 && nb->type == 1){
			if(na->tipo1 == nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 1 && nb->type == 2){
			if(na->tipo1 == nb->tipo2)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 1){
			if(na->tipo2 == nb->tipo1)
				return 1;
			else
				return 0;
		}
		else if(na->type == 2 && nb->type == 2){
			if(na->tipo2 == nb->tipo2)
				return 1;
			else
				return 0;
		}
		else{
			if(na->type == 3 && nb->type != 3){
				printf("string vs no string\n");
			}
			else if(na->type != 3 && nb->type == 3){
				printf("no string vs string\n");
			}
			else{
				if(tam(na->tipo3) == tam(nb->tipo3))
					return 1;
				else
					return 0;
			}
		}
	}
}

int variableCompEntero(void *a, int b, int comp, int s){
	if(a == NULL){ printf(amarillo" ERROR EN VARIABLE COMP VARIABLE"cerrar);}
	NODO* na = (NODO *) a;

	if(comp == 1){
		if(na->type == 1){
			if(s){
				if(na->tipo1 < b)
					return 1;
				else
					return 0;
			}
			else{
				if(b < na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 < b)
					return 1;
				else
					return 0;
			}
			else{
				if(b < na->tipo2)
					return 1;
				else
					return 0;
			}
		}
		else{
			if(s){
				if(tam(na->tipo3) < b)
					return 1;
				else
					return 0;
			}
			else{
				if(b < tam(na->tipo3))
					return 1;
				else
					return 0;
			}
		}
	}
	else if(comp == 2){
		if(na->type == 1){
			if(s){
				if(na->tipo1 > b)
					return 1;
				else
					return 0;
			}
			else{
				if(b > na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 > b)
					return 1;
				else
					return 0;
			}
			else{
				if(b > na->tipo2)
					return 1;
				else
					return 0;
			}
		}
	}
	else if(comp == 3){
		if(na->type == 1){
			if(s){
				if(na->tipo1 == b)
					return 1;
				else
					return 0;
			}
			else{
				if(b == na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 == b)
					return 1;
				else
					return 0;
			}
			else{
				if(b == na->tipo2)
					return 1;
				else
					return 0;
			}
		}
	}
}

int variableCompDouble(void *a, double b, int comp, int s){
	if(a == NULL){ printf(amarillo" ERROR EN VARIABLE COMP VARIABLE"cerrar);}
	NODO* na = (NODO *) a;

	if(comp == 1){
		if(na->type == 1){
			if(s){
				if(na->tipo1 < b)
					return 1;
				else
					return 0;
			}
			else{
				if(b < na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 < b)
					return 1;
				else
					return 0;
			}
			else{
				if(b < na->tipo2)
					return 1;
				else
					return 0;
			}
		}
		//falta el tipo 3
	}
	else if(comp == 2){
		if(na->type == 1){
			if(s){
				if(na->tipo1 > b)
					return 1;
				else
					return 0;
			}
			else{
				if(b > na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 > b)
					return 1;
				else
					return 0;
			}
			else{
				if(b > na->tipo2)
					return 1;
				else
					return 0;
			}
		}
	}
	else if(comp == 3){
		if(na->type == 1){
			if(s){
				if(na->tipo1 == b)
					return 1;
				else
					return 0;
			}
			else{
				if(b == na->tipo1)
					return 1;
				else
					return 0;
			}
		}
		else if(na->type == 2){
			if(s){
				if(na->tipo2 == b)
					return 1;
				else
					return 0;
			}
			else{
				if(b == na->tipo2)
					return 1;
				else
					return 0;
			}
		}
	}
}