#include "lista.h"

void TLista_FazVazia(TLista *pLista) {
    (*pLista).primeiro = INICIO;
    (*pLista).ultimo = (*pLista).primeiro;
}

int TLista_EhVazia(TLista *pLista) {
    return((*pLista).ultimo == (*pLista).primeiro);
}

int TLista_Insere(TLista *pLista, int p, TItem x){
    if((*pLista).ultimo == MAXTAM)
        return 0; /* lista cheia*/
    for(int cont = ((*pLista).ultimo); cont > p; cont--)
        (*pLista).item[cont] = (*pLista).item[cont-1];
    (*pLista).item[p] = x;
    (*pLista).ultimo++;
    return 1;
}

int TLista_Retira(TLista *pLista, int p, TItem *pX){
    if(TLista_EhVazia(pLista) || p > (*pLista).ultimo)
        return 0;
    int cont;
    *pX = (*pLista).item[p];
    for(cont = p; cont < (*pLista).ultimo-1; cont++)
        (*pLista).item[cont] = (*pLista).item[cont+1];
    (*pLista).ultimo--;
    return 1;
}

void TLista_Imprime(TLista*pLista) {
    int i;
    for(i = (*pLista).primeiro; i < (*pLista).ultimo; i++)
        printf("%d ", (*pLista).item[i].valor);
}

int TLista_Get(TLista *pLista, int p, TItem *pX){
    if(TLista_EhVazia(pLista) || p > (*pLista).ultimo)
        return 0;
    *pX = (*pLista).item[p];
    return 1;
}

int TLista_Tamanho(TLista *pLista){
    return (*pLista).ultimo - (*pLista).primeiro;
}
