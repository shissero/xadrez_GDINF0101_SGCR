#include <stdio.h>
#include <stdlib.h>
#include"inserir_elemento_movimento.h"

// Função para inserir uma peça ao final da lista encadeada
// lista é um ponteiro para um ponteiro porque no caso de uma lista vazia, é necessário mudar o lugar para onde o ponteiro da lista está apontando
void inserirElementoMovimento(struct ElementoMovimento **lista, struct ElementoMovimento *novoElemento) {
  
	if ( *lista == NULL) {
    
		*lista = novoElemento;
	}
	else {
	
		struct ElementoMovimento *aux = *lista;
		
		while (aux->prox != NULL) {
		
			aux = aux->prox;
		}
		
		aux->prox = novoElemento;
		novoElemento->ant = aux;
	}
}
