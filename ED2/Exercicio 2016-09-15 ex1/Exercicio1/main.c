#include <stdio.h>
#include <stdlib.h>

//int busca

void buscaSequencial (int* vetor, int valor) {
    int i = 0;
    int lFound = 0;

    for (i=0; i<10; i++) {
        if (vetor[i] == valor)
            lFound = 1;
    }

    if (lFound == 0){
        printf("Valor %d nao encontrado.\n",valor);
    } else {
        printf("Valor %d encontrado.\n",valor);
    }
}

void buscaBinaria (int *vetor, int valor){
    int meio = 0;
    int i = 0;
    int inicial = 0;
    int fim = 9;

    if ((valor < vetor [inicial]) || (valor > vetor[fim])) {
        printf("Numero %d nao encontrado.\n",valor);
        return;
    }

    for (i=0;i<10;i++){
        meio = ((inicial+fim)/2);
        if (vetor[meio] == valor)
        {
            printf("Numero %d encontrado.\n",valor);
            return;
        }
        else if (valor < vetor[meio])
        {
            fim = meio-1;
        } else
        {
            inicial = meio+1;
        }
    }
}

int main()
{
    int vet [10] = {1,8,4,7,2,0,3,9,5,6};
    int vetOrd [10] = {1,2,3,4,5,6,7,8,9,10};

    buscaSequencial(vet,7);
    buscaSequencial(vet,0);
    buscaSequencial(vet,13);

    buscaBinaria (vetOrd, 7);
    buscaBinaria (vetOrd, 0);
    buscaBinaria (vetOrd, 13);

    return 0;
}

