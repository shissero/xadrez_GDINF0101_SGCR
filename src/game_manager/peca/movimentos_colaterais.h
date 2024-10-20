#ifndef MOVIMENTOS_COLATERAIS_H_
#define MOVIMENTOS_COLATERAIS_H_

#include"peca.h"
#include "../tabuleiro/tabuleiro.h"

struct ElementoMovimento *movimentosColaterais (struct Tabuleiro *tabuleiro, struct Peca *peca, int);

#endif
