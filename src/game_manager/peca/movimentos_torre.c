#include <stdio.h>
#include "movimentos_cardeais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_torre.h"

struct ElementoMovimento *movimentosTorre(int coluna, int linha) {

  return movimentosCardeais(coluna, linha);
}
