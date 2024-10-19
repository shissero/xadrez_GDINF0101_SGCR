#include"buscar_movimento.h"

// Procura em lista um movimento que ocupe a casa especificada por coluna e linha
// Retorna um ponteiro para o movimento encontrado ou NULL, se não achar nada
struct Movimento *buscarMovimento(struct ElementoMovimento *lista, int coluna, int linha){

	struct Movimento *procuranda = NULL;
	struct Movimento *aux = NULL;
	

	while(lista != NULL){
		
		aux = lista -> movimento;
		
		if( (aux -> coluna_destino == coluna) && (aux -> linha_destino == linha) ){
		
			procuranda = aux;
			break;
		}
		
		lista = lista->prox;
	}
	
	return procuranda;
}
