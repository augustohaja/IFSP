#include <stdio.h>
#include <stdlib.h>

void ordenaBubble (int* vetor) {
    int i,j = 0;
    int tamanho = 7;
    int aux = 0;

    for (i=tamanho-1; i>=1; i--) {
        for (j=0; j<i; j++){
            if (vetor[j] > vetor[j+1]){
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

void imprimeVetor (int *vetor){
    int i = 0;

    for (i=0;i<7;i++){
        printf("Posicao %d do vetor - %d\n", i, vetor[i]);
    }
}

int main()
{
    int vet [7] = {8,2,4,1,6,3,9};

    printf("Vetor desordenado:\n");
    imprimeVetor(vet);

    ordenaBubble(vet);

    printf("\n\nVetor ordenado\n");
    imprimeVetor(vet);

    return 0;
}
