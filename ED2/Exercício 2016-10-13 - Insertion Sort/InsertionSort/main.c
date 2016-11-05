#include <stdio.h>
#include <stdlib.h>

void ordenaIS(int *original, int length)
{
	int i, j, atual;

	for (i = 1; i < length; i++)
	{
		atual = original[i];
		j = i - 1;

		while ((j >= 0) && (atual < original[j]))
		{
			original[j + 1] = original[j];
            j = j - 1;
		}
  		original[j + 1] = atual;
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

    ordenaIS(vet,10);

    printf("\n\nVetor ordenado\n");
    imprimeVetor(vet);

    return 0;
}
