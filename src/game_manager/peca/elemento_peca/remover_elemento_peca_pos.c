#include <stdio.h>

#include"remover_elemento_peca_pos.h"

// Se excluir for verdadeiro, além de remover item de lista, esta função também libera seu espaço na memória
void removerElementoPecaPos(struct ElementoPeca **lista, int coluna, int linha, int excluir) {
  
	if ( *lista != NULL) {
    
		struct ElementoPeca *aux_lista = *lista;
		
		while (aux_lista->ant != NULL) {
		
			aux_lista = aux_lista->ant;
		}
		
		
		while (aux_lista != NULL) {
		
			struct Peca *aux_peca = aux_lista->peca;

			if( aux_peca->coluna == coluna && aux_peca->linha == linha ){
			
				struct ElementoPeca *anterior = aux_lista->ant;
				struct ElementoPeca *proximo = aux_lista->prox;
				
				if(anterior != NULL){
				
					anterior->prox = proximo;
				}
				else{
				
					lista = &proximo;
				}
				
				if(proximo != NULL){
				
					proximo->ant = anterior;
				}
				
				if(excluir) free(aux_lista);
				
				break;
			}
			
			aux_lista = aux_lista->prox;
		}
	}
}
