#include"remover_elemento_peca.h"

// Se excluir for verdadeiro, além de remover item de lista, esta função também libera seu espaço na memória
void removerElementoPeca(struct ElementoPeca **lista, struct Peca *item, int excluir) {
  
	if ( *lista != NULL) {
    
		struct ElementoPeca *aux = *lista;
		
		while (aux->ant != NULL) {
		
			aux = aux->ant;
		}
		
		
		while (aux != NULL) {
		
			if(aux->peca == item){
			
				struct ElementoPeca *anterior = aux->ant;
				struct ElementoPeca *proximo = aux->prox;
				
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
