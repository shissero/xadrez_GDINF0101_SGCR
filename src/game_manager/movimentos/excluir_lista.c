#include <stdio.h>
#include <stdlib.h>
#include "excluir_lista.h"
#include "elemento_movimento.h"
#include "../peca/movimentos_colaterais.h"

void excluirLista(struct ElementoMovimento *lista) { 
  
    struct ElementoMovimento *item;
    
    //Este laço faz lista apontar para o primeiro elemento da lista
    while(lista->ant != NULL) {
      
      lista = lista->ant;
    }
    
    //Este laço faz a liberação da memória
    while(lista != NULL){
        
        item = lista;
        lista = lista->prox;
        free(item);
      
    }
    
}    
