#include <stdio.h>
#include <stdlib.h>

typedef struct arv{
    int info;
    struct arv* dir;
    struct arv* esq;
} Arv;

Arv* arv_criavazia(){
    Arv* a = NULL;
   return a;
}

Arv* arv_insere(Arv* arvAtual,int num){
    if (arvAtual == NULL){
        arvAtual = (Arv*) malloc(sizeof(Arv));
        arvAtual->info = num;  // ver arv null
        arvAtual->esq = NULL;
        arvAtual->dir = NULL;
    } else {
        if (num < arvAtual->info){
            arvAtual->esq = arv_insere(arvAtual->esq,num);
        } else if (num > arvAtual->info){
            arvAtual->dir = arv_insere(arvAtual->dir,num);
        }
    }
    return arvAtual;
}

int arv_imprime (Arv* arvAtual){
    if (arvAtual != NULL){
        arv_imprime(arvAtual->esq);
        printf(" %d\n", arvAtual->info);
        arv_imprime(arvAtual->dir);
    }
    return 0;
}

int main()
{
    printf("Implementacao com arvores: \n\n");

    Arv* arvNova = arv_criavazia();

    arvNova = arv_insere(arvNova,2);
    arvNova = arv_insere(arvNova,7);
    arvNova = arv_insere(arvNova,9);
    arvNova = arv_insere(arvNova,4);
    arvNova = arv_insere(arvNova,2);
    arvNova = arv_insere(arvNova,0);
    arvNova = arv_insere(arvNova,1);

    printf("Imprimindo em ordem:\n");
    arv_imprime(arvNova);

    return 0;
}
