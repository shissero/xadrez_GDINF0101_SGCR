#include "excluir_lista_movimentos.h"

void excluirListaMovimentos(struct ElementoMovimento **lista) { 
    
    //Este laço faz lista apontar para o primeiro elemento da lista
    while((*lista)->ant != NULL) {
      
      *lista = (*lista)->ant;
    }
    
    //Este laço faz a liberação da memória
    // Equanto o ponteiro para o qual lista aponta não for nulo, remove-se o primeiro elemento
    while((*lista) != NULL){
        
        removerElementoMovimento(lista, *lista, VERDADEIRO);
    }
}    
