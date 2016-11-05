#include <stdio.h>
#include <stdlib.h>


int buscaSequencial (int *vetor, int valor){
    int i;

    for (i=0;i<18;i++){
        if (vetor[i] == valor){
            printf("\nEncontrado o valor na interacao %d",i+1);
            return 1;
        }
     }
    printf("\nValor nao encontrado!");
    return 0;
}

int buscaBinaria (int *vetor, int valor){
    int i;
    int inicio = 0;
    int fim = 18;
    int meio = (fim - inicio)/2;

    for (i=0;i<18;i++){
        if (vetor[meio] == valor){
            printf("\nEncontrado o valor na interacao %d",i+1);
            return 1;
        } else if (vetor[meio] > valor){
            fim = meio;
            meio = (fim + inicio)/2;
        } else if (vetor[meio] < valor ){
            inicio = meio;
            meio = (fim + inicio)/2;
        }
     }
    printf("\nValor nao encontrado!");
    return 0;
}

int main()
{
    int vetor [18] = {5,9,12,32,41,48,52,55,59,60,62,68,72,78,80,86,95,100};


    buscaSequencial (vetor,4);
    buscaSequencial (vetor,12);
    buscaSequencial (vetor,100);

    buscaBinaria (vetor,8);
    buscaBinaria (vetor,60);
    buscaBinaria (vetor,95);
    buscaBinaria (vetor,100);

    printf("\n\n\nHello world!\n");
    return 0;
}
