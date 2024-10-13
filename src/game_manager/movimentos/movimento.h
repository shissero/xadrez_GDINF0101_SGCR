#ifndef MOVIMENTO_H_
#define MOVIMENTO_H_

enum Naturezas { DESLOCAMENTO,
			CAPTURA };

struct Movimento {

	int coluna_destino; // Coordenadas do movimento
	int linha_destino;
	int natureza;	    // Determina se o movimento é um deslocamento simples ou uma captura
};

#endif
