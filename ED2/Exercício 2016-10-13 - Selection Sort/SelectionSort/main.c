#include <stdio.h>
#include <stdlib.h>

void ordenaSS (int* num,int tam) {
    int i, j, min, aux;
    for (i = 0; i < (tam-1); i++)
    {
        min = i;
        for (j = (i+1); j < tam; j++) {
            if(num[j] < num[min])
                min = j;
            }
        if (i != min) {
            aux = num[i];
            num[i] = num[min];
            num[min] = aux;
        }
    }
}

void imprimeVetor (int *vetor){
    int i = 0;

    for (i=0;i<10;i++){
        printf("Posicao %d do vetor - %d\n", i, vetor[i]);
    }
}

int main()
{
    int vet [10] = {1,8,4,7,2,0,3,9,5,6};

    printf("Vetor desordenado:\n");
    imprimeVetor(vet);

    ordenaSS(vet,10);

    printf("\n\nVetor ordenado\n");
    imprimeVetor(vet);

    return 0;
}

