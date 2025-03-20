#include "vettore.h"
#include <stdio.h>

//Tipi boolean per condizioni False o True
#define true 1
#define false 0

int main(){
  int s, taglia, init, somma;
  //La variabile init serve per non permettere altre operazioni al di fuori dell'inizializzazione se l'array non è ancora inizializzato
  //La varaibile somma serve per la funzione di sommaArray
  printf("Inserire la taglia dell'array: ");
  scanf("%d", &taglia);
  int array[taglia], b[taglia];
  int ultimo;
  //La variabile ultimo serve per tener conto dell'ultimo elemento dell'array riempito per evitare operazioni di inserimento con array pieno
  //o di cancellazione con array vuoto e facilitare le operazioni di shift
  int *sommaarr;
  //sommaarr serve per la stampa dell'array dopo aver effettuato la somma per posizione
  init = false;
  //ciclo while da cui si esce solo con l'inserimento di 8 e che funge da menu' del programma
  while(true){
    printf("\n\n--- Operazioni su vettori ---\n1. Immissione elementi in un dato array\n2. Stampare il contenuto di un dato array\n3. Ricerca di un elemento in un dato array\n4. Ricercare il minimo in un dato array\n5. Ordinare un dato array\n6. Eliminare un elemento in un dato array\n7. Inserimento di un elemento in un dato array\n8. Somma degli elementi in un dato array\n9.Somma degli elementi in posizione i di due array\n10.Prodotto scalare degli elementi di due array\n11. Esci\n");
    scanf("%d", &s);
    if(init == false){
      printf("    *** ARRAY NON INIZIALIZZATO ***\nInizializzare l'array prima di operare!\n\n");
      if(s != 1){
        s=1;
      }
    }
    switch(s){
      case 1:
        init=inizializzaArray(array, taglia, &ultimo);
        break;
      case 2:
        stampaArray(array, ultimo);
        break;
      case 3:
        cercaArray(array, ultimo);
        break;
      case 4:
        minimoArray(array, ultimo);
        break;
      case 5:
        ordinaArray(array, ultimo);
        break;
      case 6:
        eliminaArray(array, &ultimo);
        break;
      case 7:
        inserisciArray(array, taglia, &ultimo);
        break;
      case 8:
        somma=sommaArray(array, ultimo);
        printf("La somma degli elementi dell'array è %d\n", somma);
        break;
      case 9:
        printf("Inizializza l'array b");
        inizializzaArray(b, taglia, &ultimo);
        sommaPosizioniArray(array, b, ultimo);
        printf("Array sommati:\n");
        stampaArray(b, ultimo);
        break;
      case 10:
        prodottoCartesianoArray(array, ultimo);
        break;
      case 11:
        return 0;
      default:
        printf("Il valore inserito non è valido o l'array non è inizializzato!");
    }
  }
}
