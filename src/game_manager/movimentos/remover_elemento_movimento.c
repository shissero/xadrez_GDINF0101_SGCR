#include"remover_elemento_movimento.h"

// Se excluir for verdadeiro, o item é removido da lista e a seu espaço na memória é liberado
void removerElementoMovimento(struct ElementoMovimento **lista, struct ElementoMovimento *item, int excluir) {
  
	if ( *lista != NULL) {
    
		struct ElementoMovimento *aux = *lista;
		
		while (aux->ant != NULL) {
		
			aux = aux->ant;
		}
		
		
		while (aux != NULL) {
		
			if(aux == item){
			
				struct ElementoMovimento *anterior = aux->ant;
				struct ElementoMovimento *proximo = aux->prox;
				
				if(anterior != NULL){
				
					anterior->prox = proximo;
				}
				else{
				
					*lista = proximo;
				}
				
				if(proximo != NULL){
				
					proximo->ant = anterior;
				}
				
				if(excluir) free(aux);
				
				break;
			}
			
			aux = aux->prox;
		}
	}
}
