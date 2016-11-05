#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
} TItem;

typedef struct elemento{
    struct elemento *pProx;
    TItem item;
} TElemento;

typedef struct {
    TElemento *pPrimeiro;
    TElemento *pUltimo;
} TFila;

void TFila_FazVazia(TFila *pFila){
    pFila->pPrimeiro = NULL;
    pFila->pUltimo = NULL;
}

int TFila_ehVazia(TFila *pFila){
    return (pFila->pPrimeiro == NULL);
}

int TFila_Enfileira(TFila *pFila, TItem x){
    TElemento *novo = (TElemento*)malloc(sizeof(TElemento));
    novo->item = x;
    novo->pProx = NULL;

    if (novo == NULL){		//Verifica se a memória foi alocada
		return -1;
	}
	else
    {
		if (TFila_ehVazia(pFila)){
            pFila->pPrimeiro = novo;
            pFila->pUltimo = novo;
        }
        else {
            pFila->pUltimo->pProx = novo;
            pFila->pUltimo = novo;
        }
	}
	return 1;
}

int TFila_Desenfileira(TFila *pFila){
    TElemento *descartado = (TElemento*) malloc (sizeof(TElemento));
    descartado = pFila->pPrimeiro;

    if (descartado == NULL)
        return -1;
    else {
        pFila->pPrimeiro = pFila->pPrimeiro->pProx;
        free(descartado);
    }
    return 1;
}

void TFila_Imprime(TFila *pFila){
    TElemento *atual = (TElemento*) malloc(sizeof(TElemento));
    atual = pFila->pPrimeiro;

    printf("Lista de todos os itens da Fila: \n");
    while (atual != NULL){
        printf("%d - " ,atual->item.valor);
        atual = atual->pProx;
    }
}

void printMenu() {
	printf("\n");
	printf("   Manipulacao de fila de inteiros \n\n");
	printf("    1 - Inicia uma fila \n");
	printf("    2 - Consulta se a lista esta vazia\n");
	printf("    3 - Enfileira\n");
	printf("    4 - Desenfileira\n");
	printf("    5 - Lista todos os numeros\n");
    printf("    0 - Sair\n");
	printf("\n\n");
	printf(">>> Digite uma opcao: ");
}


int main()
{
    int fim, opcao, numero;
	fim = 0;

	TFila minhaFila;
	TFila_FazVazia(&minhaFila);

	TItem meuItem;
	TItem auxItem;

	while (!fim) {
		printMenu();
		scanf("%d", &opcao);

		switch (opcao) {
		case 0:
			fim = 1;
			break;

		case 1:
			TFila_FazVazia(&minhaFila);
			printf("Fila criada. \n\n");
			break;

        case 2:
			if (TFila_ehVazia(&minhaFila))
                printf("A fila esta vazia \n\n");
            else
                printf("A fila contem elementos \n\n");
			break;

        case 3:
            printf("\n Digite o numero inteiro para ser inserido: ");
			scanf("%d", &numero);

			meuItem.valor = numero;

			if (TFila_Enfileira(&minhaFila,meuItem) == 1) {
				printf("\n Numero %d inserido na fila.\n", numero);
			} else {
				printf("\n Erro ao inserir na fila\n");
			}
			break;

        case 4:
   			if (TFila_Desenfileira(&minhaFila) == 1) {
				printf("\n Numero retirado da fila.\n");
			} else {
				printf("\n Erro ao retirar numero da fila.\n");
			}
			break;

        case 5:
			TFila_Imprime(&minhaFila);
			break;
		}
    }
    return 0;
}
