//Assista as vídeo aulas do autor André Backes
#include <stdio.h>
#include <stdlib.h>

//Struct do item
typedef struct {
	int valor;
} TItem;

//Struct do elemento
typedef struct elemento{
	struct elemento *pProx;
	TItem item;
} TElemento;

//struct da Lista
typedef struct {
	struct TElemento *pPrimeiro;
	struct TElemento *pUltimo;
} TLista;

//Método de construção da Lista
void TLista_FazVazia(TLista *pLista) {
	pLista->pPrimeiro = NULL;
	pLista->pUltimo = NULL;
}

//Método de checagem de Lista vazia
int TLista_EhVazia(TLista *pLista){
	return (pLista->pPrimeiro==NULL);
}

//Método de inserção no início da lista
int TLista_InsereInicioLista(TLista *pLista, TItem x) {
	TElemento *novo = (TElemento*) malloc(sizeof(TElemento));
	novo->item = x;
	novo->pProx = NULL;

	if (novo == NULL){		//Verifica se a memória foi alocada
		return -1;
	} else {
		if (TLista_EhVazia(pLista)){
			pLista->pPrimeiro = novo;
			pLista->pUltimo = novo;
		} else {
			novo->pProx = pLista->pPrimeiro;
			pLista->pPrimeiro = novo;
		}
	}
	return 1;
}

int TLista_RetiraInicioLista(TLista *pLista, TItem *pX) {
    TElemento *aux = (TElemento*) malloc(sizeof(TElemento));
	aux = pLista->pPrimeiro;

	if (TLista_EhVazia(pLista)){		//Verifica se a memória foi alocada
		return -1;
	} else {
		TElemento *novo = (TElemento*) malloc(sizeof(TElemento));
		novo->item = aux->item;
		novo->item = aux->item;
		novo->pProx = NULL;
		pX = &novo->item;
		pLista->pPrimeiro = aux->pProx;
	}
	return 1;
}

int TLista_BuscaItem(TLista *pLista, TItem *pX){
	TItem *aux = (TItem*) malloc(sizeof(TItem));
	int valor = pX->valor;
	int flag = -1;
	int cont = 1;

	if (TLista_EhVazia(pLista)){
		return -1;
	} else {
		TElemento *atual = (TElemento*)malloc(sizeof(TElemento));
		atual = pLista->pPrimeiro;
		while (atual != NULL){
            //aux = atual->item;
			if (atual->item.valor == valor){
				flag = cont;
				return flag;
			} else {
				atual = atual->pProx;
			}
			cont++;
		}
	}
	return flag;
}

void TLista_Imprime(TLista *pLista) {
	TElemento *atual = (TElemento*)malloc(sizeof(TElemento));
	atual = pLista->pPrimeiro;
	printf("Lista de todos os numeros cadastrados\n\n");
	while (atual != NULL)	 {
	 	 printf("%d\n", atual->item.valor);
	 	 atual = atual->pProx;
	}
}

/*
int TLista_OrdenaLista(TLista *pLista){
	TElemento *atual = (TElemento*)malloc(sizeof(TElemento));
	TElemento *proximo = (TElemento*)malloc(sizeof(TElemento));
	TElemento *aux = (TElemento*)malloc(sizeof(TElemento));
	if (TLista_EhVazia(pLista)){
		return -1;
	} else {
		atual = pLista->pPrimeiro;
		while (atual != NULL){
			proximo = atual->pProx;
			while (proximo != NULL){
				if (atual->item.valor > proximo->item.valor){
					aux->item.valor = atual->item.valor;
					atual->item.valor = proximo->item.pProx;
					proximo->item.valor = aux->item.valor;
				}
				proximo = proximo->pProx;
			}
			atual = atual->pProx;
		}
	}
	return 1;
}*/

void printMenu() {
	printf("\n");
	printf("   Manipulacao de lista ligada de inteiros \n\n");
	printf("    1 - Inserir um numero no inicio da lista\n");
	printf("    2 - Inserir um numero do final da lista    **a ser programado**\n");
	printf("    3 - Remover um numero no inicio da lista   **a ser programado**\n");
	printf("    4 - Remover um numero do final da lista    **a ser programado**\n");
	printf("    5 - Buscar um numero na lista\n");
	printf("    6 - Mostrar a quantidade de elementos da lista **a ser programado**\n");
	printf("    7 - Iniciar a lista\n");
	printf("    8 - Consulta se a lista esta vazia\n");
	printf("    9 - Lista todos os numeros\n");
	printf("\n\n");
	printf(">>> Digite uma opcao, ou 0 (zero) para sair do menu: ");

}

int main(int argc, char **argv) {
    int fim, opcao, numero;
	fim = 0;

	TLista minhaLista;
	TLista_FazVazia(&minhaLista);

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
			printf("\n Digite o numero inteiro para ser inserido: ");
			scanf("%d", &numero);
			meuItem.valor = numero;
			if (TLista_InsereInicioLista(&minhaLista,meuItem) == 1) {
				printf("\n Numero %d inserido no inicio da lista\n", numero);
			} else {
				printf("\n Erro ao inserir no inicio da lista\n");
			}
			break;

		case 2:
			//printf("\n Digite o numero a ser inserido: ");
			//scanf("%d", &numero);
			//if (InsereFinalLista(numero) == 1) {
			//	printf("Numero %d inserido no final da lista\n", numero);
			//} else {
			//	printf("Erro ao inserir no final da lista\n");
			//}
			printf("\n ** Opcao ainda nao disponivel **\n\n");
			break;

		case 3:
			if (TLista_RetiraInicioLista(&minhaLista, &auxItem) == 1) {
				printf("Numero removido do inicio da lista\n");
			} else {
				printf("Erro ao remover do inicio da lista\n");
			}
			break;

		case 4:
            //if (RetiraFinalLista() == 1) {
			//	printf("Numero removido no final da lista\n");
			//} else {
			//	printf("Erro ao remover ao final da lista\n");
			//}
			printf("\n ** Opcao ainda nao disponivel **\n\n");
			break;

		case 5:
			printf("Digite o numero a ser buscado na lista: ");
			scanf("%d", &numero);
			meuItem.valor = numero;
			if (TLista_BuscaItem(&minhaLista, &meuItem) == 1) {
				printf("Numero %d esta presente na lista\n", numero);
			} else {
				printf("A lista nao contem o numero %d\n", numero);
			}
			break;

		case 6:
			printf("\n ** Opcao ainda nao disponivel **\n\n");
			break;

		case 7:
			TLista_FazVazia(&minhaLista);
			printf("Lista criada \n\n");
			break;

		case 8:
		    if (TLista_EhVazia(&minhaLista))
                printf("A lista esta vazia \n\n");
            else
			printf("A lista contem elementos \n\n");
			break;

		case 9:
			TLista_Imprime(&minhaLista);
			break;

		default:
			printf("\n Favor digitar uma opcao valida, de 0 a 9, obrigado. \n");
			break;
		}
	}
    return 0;
}

