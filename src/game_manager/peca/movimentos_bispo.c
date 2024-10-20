#include <stdio.h>
#include "movimentos_colaterais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_bispo.h"

struct ElementoMovimento *movimentosBispo(struct Peca *peca) {

  return movimentosColaterais(peca->coluna, peca->linha, 0);
}
