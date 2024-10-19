#include <stdio.h>
#include <stdlib.h>
#include "inserir_elemento_peca.h"

// Função para inserir uma peça ao final da lista encadeada
void inserirElementoPeca(struct ElementoPeca **lista, struct ElementoPeca *novoElemento) {
  
	if ( *lista == NULL) {
    
		*lista = novoElemento;
	}
	else {
	
		struct ElementoPeca *aux = *lista;
		
		while (aux->prox != NULL) {
		
			aux = aux->prox;
		}
		
		aux->prox = novoElemento;
		novoElemento->ant = aux;
	}
}
