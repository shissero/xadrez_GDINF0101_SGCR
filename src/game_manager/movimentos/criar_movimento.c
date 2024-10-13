#include <stdlib.h>

#include"criar_movimento.h"
#include"movimento.h"

struct Movimento *criarMovimento(int coluna, int linha, int natureza){

	struct Movimento *novo = (struct Movimento*)malloc(sizeof(struct Movimento));
	
	novo->coluna_destino = coluna;
	novo->linha_destino = linha;
	novo->natureza = natureza;
	
	return novo;
}
