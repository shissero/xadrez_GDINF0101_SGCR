#ifndef ELEMENTO_MOVIMENTO_H_
#define ELEMENTO_MOVIMENTO_H_

#include"movimento.h"

// Esta struct é a base para uma lista duplamente encadeada de movimentos
struct ElementoMovimento {

	struct Movimento *movimento;
	struct ElementoMovimento *ant;
	struct ElementoMovimento *prox;
};

#endif
