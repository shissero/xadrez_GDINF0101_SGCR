#include <stdio.h>
#include "movimentos_colaterais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_bispo.h"

struct ElementoMovimento *movimentosBispo(int coluna, int linha) {

  return movimentosColaterais(coluna, linha);
}
