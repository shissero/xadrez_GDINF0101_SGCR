#ifndef TABULEIRO_H_
#define TABULEIRO_H_

struct Tabuleiro {

	struct ElementoPeca *Pretas;
	struct ElementoPeca *Brancas;
	int vez; // Esse campo dita qual dos times está jogando
};

#endif
