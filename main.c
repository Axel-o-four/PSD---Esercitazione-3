#include "vettore.h"
#include <stdio.h>

//Tipi boolean per condizioni False o True
#define true 1
#define false 0

#define N 100

int main(){
  int *a, taglia_a=1, *b, taglia_b=1, *c, taglia_c=1;
  char line[N];
  //line è il buffer per l'inizializzazione dell'array
  printf("\nInserire la linea da cui leggere i valori del vettore a: ");
  fgets(line, N, stdin);
  a=input_array_dyn(&taglia_a, line);
  printf("\nInserire la linea da cui leggere i valori del vettore b: ");
  fgets(line, N, stdin);
  b=input_array_dyn(&taglia_b, line);
  c=concatena_vet(a, &taglia_a, b, &taglia_b, &taglia_c);
  printf("\n\nOutput del vettore a:");
  stampaArray(a, (taglia_a-1));
  printf("\n\nOutput del vettore b:");
  stampaArray(b, (taglia_b-1));
  printf("\n\nOutput del vettore concatenato c:");
  stampaArray(c, (taglia_c-1));
}
