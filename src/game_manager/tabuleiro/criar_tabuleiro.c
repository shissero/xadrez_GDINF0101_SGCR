#include <stdlib.h>

#include"criar_tabuleiro.h"
#include"criar_time.h"
#include"../peca/peca.h"

struct Tabuleiro *criarTabuleiro(){

	struct Tabuleiro *novo = (struct Tabuleiro*)malloc(sizeof(struct Tabuleiro));
	
	novo->Pretas = criarTime(PRETA);
	novo->Brancas = criarTime(BRANCA);
	
	novo->vez = BRANCA;
	
	novo->PecaTocada = NULL;
	novo->MovimentosPecaTocada = NULL;
	
	return novo;
}
