#include <stdio.h>
#include <stdlib.h>

#define INICIO 0
#define MAXTAM 1000

typedef struct{
    int valor;
}TItem;

typedef struct{
    TItem item[MAXTAM];
    int primeiro, ultimo;
}TLista;


/* procedimentos e funcoes da TAD */
void TLista_FazVazia(TLista *pLista);
int TLista_EhVazia(TLista *pLista);
int TLista_Insere(TLista *pLista, int p, TItem x);
int TLista_Retira(TLista *pLista, int p, TItem *pX);
void TLista_Imprime(TLista *pLista);
int TLista_Get(TLista *pLista, int p, TItem *pX);
int TLista_Tamanho(TLista *pLista);


