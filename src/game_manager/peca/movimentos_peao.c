#include <stdio.h>
#include "movimentos_peao.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "peca.h"

struct ElementoMovimento *movimentosPeao(struct Peca *peca) {

  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  
  //Quando o peão chega aos limites do tabuleiro ele vira outra peça, portanto não se faz necessário checar os limites
  item = criarElementoMovimento(peca->coluna, peca->linha + peca->cor, DESLOCAMENTO);
  inserirElementoMovimento(&lista, item);
    
  if(primeiroMovimento) {
    
      item = criarElementoMovimento(peca->coluna, peca->linha + (2*peca->cor), DESLOCAMENTO);
      inserirElementoMovimento(&lista, item);  
  } 
  
  return lista;
}
