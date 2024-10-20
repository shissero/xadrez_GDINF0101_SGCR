#ifndef MOVIMENTOS_BISPO_H_
#define MOVIMENTOS_BISPO_H_

#include <stddef.h>
#include"peca.h"
#include "../tabuleiro/tabuleiro.h"

struct ElementoMovimento *movimentosBispo (struct Tabuleiro *tabuleiro, struct Peca *peca);

#endif
