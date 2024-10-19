#include <stdlib.h>

#include"elemento_peca.h"
#include"../criar_peca/criar_rei.h"

struct ElementoPeca *criarElementoRei(int cor, int coluna, int linha, int primMov){

	struct ElementoPeca *novo = (struct ElementoPeca*)malloc(sizeof(struct ElementoPeca));
	
	novo->peca = criarRei(cor, coluna, linha, primMov);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}
