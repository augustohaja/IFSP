#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arv{
    char info;
    struct arv* dir;
    struct arv* esq;
} Arv;

Arv* arv_criavazia(){
    Arv* a = NULL;
   return a;
}


int arv_vazia (Arv* arvAtual){
    return (arvAtual==NULL);
}


Arv* arv_libera (Arv* arvAtual){
    if (arvAtual == NULL){
        arv_libera(arvAtual->esq);
        arv_libera(arvAtual->dir);
        free(arvAtual);
    }
    return NULL;
}

int arv_imprime_pre (Arv* arvAtual){
    if (arvAtual != NULL){
        printf(" %c\n", arvAtual->info);
        arv_imprime_pre(arvAtual->esq);
        arv_imprime_pre(arvAtual->dir);
    }
    return 0;
}

int arv_imprime_em (Arv* arvAtual){
    if (arvAtual != NULL){
        arv_imprime_em(arvAtual->esq);
        printf(" %c\n", arvAtual->info);
        arv_imprime_em(arvAtual->dir);
    }
    return 0;
}

int arv_imprime_pos (Arv* arvAtual){
    if (arvAtual != NULL){
        arv_imprime_pos(arvAtual->esq);
        arv_imprime_pos(arvAtual->dir);
        printf(" %c\n", arvAtual->info);
    }
    return 0;
}

Arv* arv_insere(Arv* arvAtual,char letra){
    if (arv_vazia(arvAtual) == 1){
        arvAtual = (Arv*) malloc(sizeof(Arv));
        arvAtual->info = letra;  // ver arv null
        arvAtual->esq = NULL;
        arvAtual->dir = NULL;
    } else {
        if (letra < arvAtual->info){
            arvAtual->esq = arv_insere(arvAtual->esq,letra);
        } else if (letra > arvAtual->info){
            arvAtual->dir = arv_insere(arvAtual->dir,letra);
        }
    }
    return arvAtual;
}

int arv_altura (Arv* arvAtual){
    if (arvAtual == NULL){
        return -1;
    } else {
        int he = arv_altura(arvAtual->esq);
        int hd = arv_altura(arvAtual->dir);
        if (he < hd){
            return hd + 1;
        } else {
            return he + 1;
        }
    }
}

int main()
{
    printf("Implementacao com arvores: \n\n");

    Arv* arvNova = arv_criavazia();

    arvNova = arv_insere(arvNova,'a');
    arvNova = arv_insere(arvNova,'m');
    arvNova = arv_insere(arvNova,'e');
    arvNova = arv_insere(arvNova,'r');
    arvNova = arv_insere(arvNova,'i');
    arvNova = arv_insere(arvNova,'c');
    arvNova = arv_insere(arvNova,'o');


    printf("Numero de niveis da arvore: %d\n",arv_altura(arvNova));

    return 0;
}
