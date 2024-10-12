#ifndef MOVIMENTO_H_
#define MOVIMENTO_H_

#define DESLOCAMENTO 0
#define CAPTURA 1

struct Movimento {

	int coluna_destino; // Coordenadas do movimento
	int linha_destino;
	int natureza;	    // Determina se o movimento é um deslocamento simples ou uma captura
};

#endif
