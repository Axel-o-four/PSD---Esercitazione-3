//vettore.c contiene le funzioni specifiche alle operazioni sui vettori

#include <stdio.h>
#include "vettore.h"
#include "utils.h"

//Tipi boolean per condizioni False o True
#define true 1
#define false 0

//Inizializza l'array iterativamente
int inizializzaArray(int a[], int taglia, int *ultimo){
  for(int i=0; i<taglia; i++){
    printf("Inserire l'elemento in posizione %d: ", i);
    scanf("%d", &a[i]);
  }
  printf("\nArray inizializzato!\n\n");
  *ultimo=taglia-1;
  return true;
}

//Stampa tutti i valori con la loro posizione iterativamente
void stampaArray(int a[], int ultimo){
  for(int i=0; i<=ultimo; i++){
    printf("\nElemento %d dell'array: %d", i, a[i]);
  }
}

//Cerca un elemento nell'array e ne stampa la posizione
void cercaArray(int a[], int taglia){
  int n;
  printf("Inserire il valore da cercare: ");
  scanf("%d", &n);
  int inizio=0, fine=taglia, centro;
  while(inizio<=fine){
    centro=(inizio+fine)/2;
    if(n==a[centro]){
      break;
    }else if(n>a[centro]){
      inizio=centro+1;
    }else if(n<a[centro]){
      fine=centro-1;
    }
  }
  if(a[centro]==n){
    printf("Il valore %d si trova nell'array ed è nella posizione %d", a[centro], centro);
  }else{
    printf("Valore non trovato nell'array!\n");
  }
}

//Cerca il minimo lungo tutto l'array
void minimoArray(int a[], int taglia){
  int minimo=min(a, taglia);
  printf("Il valore minimo nell'array è %d nella posizione %d", a[minimo], minimo);
}

//Ordinamento degli elementi dell'array tramite Selection Sort
void ordinaArray(int a[], int ultimo){
  bubbleSort(a, ultimo);
  printf("L'array è stato ordinato");
}

//Eliminazione di un elemento tramite shift a sinistra
void eliminaArray(int a[], int *ultimo){
  int i;
  while(true){
    printf("Inserire la posizione (da 0 a %d) dell'elemento da eliminare: ", *ultimo);
    scanf("%d", &i);
    if(i<0 || i>*ultimo){
      printf("L'indice inserito non è un elemento valido!\n");
    }else{
      break;
    }
  }
  shiftsx(a, ultimo, i);
}

//Inserimento di un elemento tramite shift a destra e copia del valore nello spazio liberato
void inserisciArray(int a[], int taglia, int *ultimo){
  int i, valore;
  while(true){
    printf("Inserire la posizione (da 0 a %d) dell'elemento da inserire: ", *ultimo);
    scanf("%d", &i);
    if(i<0 || i>=*ultimo){
      printf("L'indice inserito non è un elemento valido!");
    }else{
      break;
    }
  }
shiftdx(a, ultimo, i);
printf("Inserire il valore da inserire: ");
scanf("%d", &valore);
a[i]=valore;
}

//Somma tutti gli elementi di un array restituendo il valore come intero
int sommaArray(int a[], int ultimo){
  int somma=a[0];
  for(int i=1; i<=ultimo; i++){
    somma+=a[i];
  }
  return somma;
}

//Somma tutti gli elementi degli array a e b e li inserisce in b
void sommaPosizioniArray(int a[], int b[], int ultimo){
  for(int i=0; i<=ultimo; i++){
    b[i]+=a[i];
  }
}

//Fa il prodotto cartesiano degli elementi degli array a e b e li restituisce
void prodottoCartesianoArray(int a[], int ultimo){
  printf("L'array già inserito contiene %d elementi, creazione di un nuovo array di %d elementi.\n", ultimo, ultimo);
  ultimo++;
  int b[ultimo];
  inizializzaArray(b, ultimo, &ultimo);
  int prodotto=0;
  for(int i=0; i<=ultimo; i++){
    prodotto+=(a[i]*b[i]);
  }
  printf("Array moltiplicati: il risultato è %d\n", prodotto);
}

int *input_array_dyn(int *size, char *line){
  int *arr;
  arr=(* int)malloc((*size)*sizeof(int));
  for(int i=0; i<(*size); i++){
    arr[i]=line[i];
  }
  return arr;
}

int *concatena_vet(int *a, int *b, int *size_a, int *size_b){
  int size_c, *c, i, j;
  size_c=((*size_a)+(*size_b))+1;
  c=(int *)malloc(size_c*sizeof(int));
  for(i=0; i<(*size_a); i++){
    c[i]=a[i];
  }
  i++;
  for(j=0; j<(*size_b); j++){
    c[i+j]=b[j];
  }
  return c;
}
