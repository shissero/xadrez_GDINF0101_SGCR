#include <stdlib.h>

#include"elemento_movimento.h"
#include"criar_elemento_movimento.h"
#include"criar_movimento.h"
#include"movimento.h"

struct ElementoMovimento *criarElementoMovimento(int coluna, int linha, int natureza){

	struct ElementoMovimento *novo = (struct ElementoMovimento*)malloc(sizeof(struct ElementoMovimento));
	
	novo->movimento = criarMovimento(coluna, linha, natureza);
	novo->prox = NULL;
	novo->ant = NULL;
	
	return novo;
}
