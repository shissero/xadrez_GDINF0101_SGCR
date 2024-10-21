#include <stdio.h>
#include "movimentos_colaterais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_bispo.h"
#include "../tabuleiro/tabuleiro.h"
#include "../../globais.h"

struct ElementoMovimento *movimentosBispo(struct Tabuleiro *tabuleiro, struct Peca *peca) {

  return movimentosColaterais(tabuleiro, peca, FALSO);
}
