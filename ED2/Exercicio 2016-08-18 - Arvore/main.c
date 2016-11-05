#include <stdio.h>
#include <stdlib.h>

typedef struct arv{
    int info;
    struct arv* dir;
    struct arv* esq;
} Arv;

void arv_criavazia(){
   return NULL;
}

Arv* arv_cria (int valor, Arv* sae, Arv* sad){
    Arv* a = (Arv*) malloc(sizeof(Arv));
    a->info = valor;
    a->esq = sae;
    a->dir = sad;
    return a;
}

int arv_vazia (Arv* arvAtual){
    return (arvAtual==NULL);
}

int arv_pertence (Arv* arvAtual, int valor){
    int lRetorno = 0;

    if (arv_vazia(arvAtual) == 1){
        lRetorno = 0;
    }
    else {
        if (arvAtual->info == valor){
            lRetorno = 1;
        }
        else {
            if (arv_pertence(arvAtual->esq,valor) == 1){
                lRetorno = 1;
            }
            else {
                if (arv_pertence(arvAtual->dir,valor) == 1){
                    lRetorno == 1;
                }
            }
        }
    }
    return lRetorno;
}

int arv_pertenceTurbo (Arv* arvAtual, int valor){
    if (arv_vazia(arvAtual) == 1){
        return 0;
    }
    else {
        if (arvAtual->info == valor){
            return 1;
        }
        else {
            if (valor < arvAtual->info){
                return arv_pertence(arvAtual->esq,valor);
            } else {
                return arv_pertence(arvAtual->dir,valor);
            }
        }
    }
}

Arv* arv_libera (Arv* arvAtual){
    if (arv_vazia(arvAtual) == 1){
        arv_libera(arvAtual->esq);
        arv_libera(arvAtual->dir);
        free(arvAtual);
    }
    return NULL;
}

void arv_imprime (Arv* arvAtual){
    if (arv_vazia(arvAtual) == 0){
        printf(" %d", arvAtual->info);
        arv_imprime(arvAtual->esq);
        arv_imprime(arvAtual->dir);
    }
}

int main()
{
    printf("Implementacao com arvores: \n\n");

    Arv* arvNova = arv_cria(150,arv_cria(100,NULL,NULL),arv_cria(175,NULL,NULL));

    if (arv_vazia(arvNova) == 1){
        printf("A arvore esta vazia.\n");
    }
    else {
        printf("A arvore nao esta vazia.\n");
    }

    if (arv_pertence(arvNova,150) == 1){
        printf("\nNumero pertence a arvore");
    }
    else {
        printf("\nNumero nao pertence a arvore");
    }

    if (arv_pertenceTurbo(arvNova,100) == 1){
        printf("\nNumero pertence a arvore");
    }
    else {
        printf("\nNumero nao pertence a arvore");
    }

    arv_imprime(arvNova);

    return 0;
}
