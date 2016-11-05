#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct arv{
    int info;
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
        printf(" %d\n", arvAtual->info);
        arv_imprime_pre(arvAtual->esq);
        arv_imprime_pre(arvAtual->dir);
    }
    return 0;
}

int arv_imprime_em (Arv* arvAtual){
    if (arvAtual != NULL){
        arv_imprime_em(arvAtual->esq);
        printf(" %d\n", arvAtual->info);
        arv_imprime_em(arvAtual->dir);
    }
    return 0;
}

int arv_imprime_pos (Arv* arvAtual){
    if (arvAtual != NULL){
        arv_imprime_pos(arvAtual->esq);
        arv_imprime_pos(arvAtual->dir);
        printf(" %d\n", arvAtual->info);
    }
    return 0;
}

Arv* arv_insere(Arv* arvAtual,int num){
    if (arv_vazia(arvAtual) == 1){
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

Arv* arv_ins_inv(Arv* arvAtual,int num){
    if (arv_vazia(arvAtual) == 1){
        arvAtual = (Arv*) malloc(sizeof(Arv));
        arvAtual->info = num;  // ver arv null
        arvAtual->esq = NULL;
        arvAtual->dir = NULL;
    } else {
        if (num > arvAtual->info){
            arvAtual->esq = arv_ins_inv(arvAtual->esq,num);
        } else if (num < arvAtual->info){
            arvAtual->dir = arv_ins_inv(arvAtual->dir,num);
        }
    }
    return arvAtual;
}

Arv* arv_inverte (Arv* arvAtual, Arv* arvInv){
    if (arvAtual != NULL){
        arv_ins_inv(arvInv,arvAtual->info);
        arv_inverte(arvAtual->esq,arvInv);
        arv_inverte(arvAtual->dir,arvInv);
    }
    return arvInv;
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
    Arv* arvInv = arv_criavazia();

    arvNova = arv_insere(arvNova,20);
    arvNova = arv_insere(arvNova,10);
    arvNova = arv_insere(arvNova,40);
    arvNova = arv_insere(arvNova,5);
    arvNova = arv_insere(arvNova,15);
    arvNova = arv_insere(arvNova,25);
    arvNova = arv_insere(arvNova,45);

    printf("Imprimindo em pre-ordem:\n");
    arv_imprime_pre(arvNova);

    arvInv = arv_inverte(arvNova,arvInv);

    printf("Imprimindo em pre-ordem:\n");
    arv_imprime_pre(arvInv);


    printf("Numero de niveis da arvore: %d\n",arv_altura(arvNova));
    //printf(" %d", arv_vazia(&arvNova));

    return 0;
}
