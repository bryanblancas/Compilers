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
