#include <stdlib.h>

#include"elemento_peca.h"
#include"../criar_peca/criar_dama.h"

struct ElementoPeca *criarElementoDama(int cor, int coluna, int linha){

	struct ElementoPeca *novo = (struct ElementoPeca*)malloc(sizeof(struct ElementoPeca));
	
	novo->peca = criarDama(cor, coluna, linha);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}
