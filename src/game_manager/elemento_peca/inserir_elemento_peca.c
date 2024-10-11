#include <stdio.h>
#include <stdlib.h>
#include "inserir_elemento_peca.h"

// Função para inserir uma peça ao final da lista encadeada
void inserirPeca (struct ElementoPeca *ptrPeca, struct ElementoPeca *novoElemento) {

  novoElemento->prox = NULL;   // Define que o novo elemento será o último da lista
  
  if (ptrPeca == NULL) {    // Verifica se a lista está vazia
  
    ptrPeca = novoElemento;
    
  } else {
  
    struct ElementoPeca *atual = ptrPeca;   // Começa no primeiro elemento da lista
    
    while (atual->prox != NULL) {     // Percorre a lista até o último nó
    
      atual = atual->prox;   // Avança para o próximo nó da lista
    }
    
    atual->prox = novoElemento;    // Insere o novo elemento após o último nó
  }
}
