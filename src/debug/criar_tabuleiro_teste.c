#include <stdlib.h>
#include"criar_tabuleiro_teste.h"

struct Tabuleiro *criarTabuleiroTeste(struct ElementoPeca *time1, struct ElementoPeca *time2){

	struct Tabuleiro *novo = (struct Tabuleiro*)malloc(sizeof(struct Tabuleiro));
	
	novo->Pretas = time2;
	novo->Brancas = time1;
	
	novo->vez = BRANCA;
	
	novo->PecaTocada = NULL;
	novo->MovimentosPecaTocada = NULL;
	
	return novo;
}
