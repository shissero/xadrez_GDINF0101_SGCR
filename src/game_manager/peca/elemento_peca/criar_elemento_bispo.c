#include <stdlib.h>

#include"elemento_peca.h"
#include"../criar_peca/criar_bispo.h"

struct ElementoPeca *criarElementoBispo(int cor, int coluna, int linha){

	struct ElementoPeca *novo = (struct ElementoPeca*)malloc(sizeof(struct ElementoPeca));
	
	novo->peca = criarBispo(cor, coluna, linha);
	novo->ant = NULL;
	novo->prox = NULL;
	
	return novo;
}
