#include <stdio.h>

#include "movimentos_cardeais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_torre.h"
#include"../../globais.h"


struct ElementoMovimento *movimentosTorre(struct Tabuleiro *tabuleiro, struct Peca *peca) {

  return movimentosCardeais(tabuleiro, peca, 0);
}
