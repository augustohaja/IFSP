#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[]){
    
    // Cria uma variavel do tipo lista
    TLista minhaLista;
    
    // Cria uma lista vazia
    TLista_FazVazia(&minhaLista);
    
    // Cria uma variavel do tipo item
    TItem meuItem;
    
    //Cria a lista do slide 18
    meuItem.valor = 37;
    TLista_Insere(&minhaLista,0,meuItem);
    meuItem.valor = 22;
    TLista_Insere(&minhaLista,1,meuItem);
    meuItem.valor = 6;
    TLista_Insere(&minhaLista,2,meuItem);
    meuItem.valor = 45;
    TLista_Insere(&minhaLista,3,meuItem);
    meuItem.valor = 18;
    TLista_Insere(&minhaLista,4,meuItem);
    meuItem.valor = 51;
    TLista_Insere(&minhaLista,5,meuItem);
    
    // Imprime a Lista na tela
    printf("Lista: ");
    TLista_Imprime(&minhaLista);
    printf("\nTamanho da Lista: %d\n",TLista_Tamanho(&minhaLista));
    
    // Insere o elemento 89 no fim da lista
    meuItem.valor = 89;
    TLista_Insere(&minhaLista,(minhaLista.ultimo),meuItem);
    printf("\n\nLista: ");
    TLista_Imprime(&minhaLista);
    printf("\nTamanho da Lista: %d\n",TLista_Tamanho(&minhaLista));
    
    // Remove o elemento 89 no fim da lista
    TLista_Retira(&minhaLista,(minhaLista.ultimo-1),&meuItem);
    printf("\n\nLista: ");
    TLista_Imprime(&minhaLista);
    printf("\nTamanho da Lista: %d\n",TLista_Tamanho(&minhaLista));
    printf("Elemento Removido: %d\n",meuItem.valor);
    
    // Recupera o terceiro elemento da lista
    TLista_Get(&minhaLista,(minhaLista.ultimo-1),&meuItem);
    printf("\n\nLista: ");
    TLista_Imprime(&minhaLista);

    // Insere o elemento 13 na terceira posicao da lista
    meuItem.valor = 13;
    TLista_Insere(&minhaLista,2,meuItem);
    printf("\n\nLista: ");
    TLista_Imprime(&minhaLista);
    
    // Remove o primeiro elemento da lista
    TLista_Retira(&minhaLista,0,&meuItem);
    printf("\n\nLista: ");
    TLista_Imprime(&minhaLista);
    printf("\nTamanho da Lista: %d\n",TLista_Tamanho(&minhaLista));
    printf("Elemento Removido: %d\n",meuItem.valor);
    
    
    return 0;
}