#include <stdlib.h>

#include"elemento_peca.h"
#include"../criar_peca/criar_cavalo.h"

struct ElementoPeca *criarElementoCavalo(int cor, int coluna, int linha){

	struct ElementoPeca *novo = (struct ElementoPeca*)malloc(sizeof(struct ElementoPeca));
	
	novo->peca = criarCavalo(cor, coluna, linha);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}
