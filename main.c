#include "vettore.h"
#include <stdio.h>

//Tipi boolean per condizioni False o True
#define true 1
#define false 0

#define N 100

int main(){
  int *a, taglia_a=0, *b, taglia_b=0, *c, taglia_c=0;
  char line[N];
  //line è il buffer per l'inizializzazione dell'array
  printf("Inserire la linea da cui leggere i valori del vettore a: ");
  scanf("%s", line);
  a=input_array_dyn(&taglia_a, line);
  printf("Inserire la linea da cui leggere i valori del vettore b: ");
  scanf("%s", line);
  b=input_array_dyn(&taglia_b, line);
  c=concatena_vet(a, &taglia_a, b, &taglia_b, &taglia_c);
  printf("Output del vettore a:");
  stampaArray(a, (taglia_a-1));
  printf("Output del vettore b:");
  stampaArray(b, (taglia_b-1));
  printf("Output del vettore concatenato c:");
  stampaArray(c, (taglia_c-1));
}
