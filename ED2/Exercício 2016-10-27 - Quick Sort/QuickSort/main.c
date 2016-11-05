#include<stdio.h>
#include<stdlib.h>
#define TAM 9


void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;         //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia

    for(i=esq+1;i<=dir;i++){        //Percorre todos os espaços do vetor
        j = i;                      //atribuição de valor
        if(vet[j] < vet[pivo]){     //verifica se o vetor da posição pivo é maior que de outra posição
            ch = vet[j];               //ch recebe o valor que é menor
            while(j > pivo){           //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0
                vet[j] = vet[j-1];      //reorganiza a posição de vetores
                j--;                    //decremento para a organização
            }
            vet[j] = ch;               // atribuição da variavel menor que o pivo na posição inicial
            pivo++;                    // aumenta a posição do pivo em uma unidade
        }
    }

    if(pivo-1 >= esq){              // verifica se o valor do pivo é maior que o final do vetor.
        quick(vet,esq,pivo-1);      //final da execursão da função
    }

    if(pivo+1 <= dir){              //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor
        quick(vet,pivo+1,dir);      //chama a função para eecutar novamente
    }
 }


int main(){
    int vet[TAM] = {40,20,10,80,60,50,7,30,100};
    int i;                 //Declara a variavel i e o vetor vet com 10 posições de 0 a 9.

    quick(vet,0,TAM-1);             //Chama a função quick com os tres parametros: o vetor, 0 o inicio do vetor e o fim.
    for(i=0;i<TAM;i++)              //percorre o vetor
        printf("%d ",vet[i]);       //imprime o vetor reorganizado
    printf("\n");
    return 0;
}
