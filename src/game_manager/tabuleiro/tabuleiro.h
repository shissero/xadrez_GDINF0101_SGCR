#ifndef TABULEIRO_H_
#define TABULEIRO_H_

enum EstadosClique {
	INICIAL,
	PECA_TOCADA
};

struct Tabuleiro {

	struct ElementoPeca *Pretas;
	struct ElementoPeca *Brancas;
	
	struct ElementoPeca *Aliadas;	// Aliadas e Adversarias dizem respeito a qual time está jogando nesse momento
	struct ElementoPeca *Adversarias;
	
	struct Peca *PecaTocada;
	struct ElementoMovimento *MovimentosPecaTocada;
	int Estado; // Determina o estado do tabuleiro para que o administrador de jogo execute as tarefas necessárias
};

#endif
