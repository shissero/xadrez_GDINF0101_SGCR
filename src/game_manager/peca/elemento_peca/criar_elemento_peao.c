#include <stdlib.h>

#include"elemento_peca.h"
#include"../criar_peca/criar_peao.h"

struct ElementoPeca *criarElementoPeao(int cor, int coluna, int linha, int primMov){

	struct ElementoPeca *novo = (struct ElementoPeca*)malloc(sizeof(struct ElementoPeca));
	
	novo->peca = criarPeao(cor, coluna, linha, primMov);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}
