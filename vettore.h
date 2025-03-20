//header file per vettore.c, contiene le funzioni specifiche per le modifiche sulle funzioni

int inizializzaArray(int a[], int taglia, int *ultimo);
void stampaArray(int a[], int taglia);
void cercaArray(int a[], int taglia);
void minimoArray(int a[], int taglia);
void ordinaArray(int a[], int ultimo);
void eliminaArray(int a[], int *ultimo);
void inserisciArray(int a[], int taglia, int *ultimo);
int sommaArray(int a[], int ultimo);
void sommaPosizioniArray(int a[], int b[], int ultimo);
void prodottoCartesianoArray(int a[], int ultimo);
int *input_array_dyn(int *size, char *line);
int *concatena_vet(int *a, int *b, int *size_a, int *size_b);
