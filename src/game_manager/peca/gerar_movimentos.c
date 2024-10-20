#include <stdio.h>
#include "gerar_movimentos.h"
#include "movimentos_peao.h"
#include "movimentos_torre.h"
#include "movimentos_cavalo.h"
#include "movimentos_bispo.h"
#include "movimentos_dama.h"
#include "movimentos_rei.h"
#include "../movimentos/elemento_movimento.h"

struct ElementoMovimento *gerarMovimentos(struct Peca *peca) {
    
    struct ElementoMovimento *lista = NULL;
    
    switch(peca->tipoPeca){
    
    case PEAO:
      lista = movimentosPeao(peca);
    break;
    
    case TORRE:
      lista = movimentosTorre(peca);
    break;
    
    case CAVALO:
      lista = movimentosCavalo(peca);
    break;
    
    case BISPO:
      lista = movimentosBispo(peca);
    break;
    
    case DAMA:
      lista = movimentosDama(peca);
    break;
    
    case REI:
      lista = movimentosRei(peca);
    break;
    
    }
    
  return lista;
}
