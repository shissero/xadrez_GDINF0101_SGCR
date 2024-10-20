#include <stdio.h>

#include "movimentos_cardeais.h"
#include "../movimentos/elemento_movimento.h"
#include "movimentos_torre.h"
#include"../../globais.h"


struct ElementoMovimento *movimentosTorre(struct Peca *peca) {

  return movimentosCardeais(peca->coluna, peca->linha, FALSO);
}
