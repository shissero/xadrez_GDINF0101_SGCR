#include"buscar_peca.h"

// Procura em lista uma peca que ocupe a casa especificada por coluna e linha
// Retorna um ponteiro para a peça encontrada ou NULL, se não achar nada
struct Peca *buscarPeca(struct ElementoPeca *lista, int coluna, int linha){

	struct Peca *procuranda = NULL;
	struct Peca *aux = NULL;
	

	while(lista != NULL){
		
		aux = lista -> peca;
		
		if( (aux -> coluna == coluna) && (aux -> linha == linha) ){
		
			procuranda = aux;
			break;
		}
		
		lista = lista->prox;
	}
	
	return procuranda;
}
