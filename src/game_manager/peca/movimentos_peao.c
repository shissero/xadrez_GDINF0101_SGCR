#include <stdio.h>
#include "movimentos_peao.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"

struct ElementoMovimento *movimentosPeao(int coluna, int linha, int cor, int primeiroMovimento) {

  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  
  //Quando o peão chega aos limites do tabuleiro ele vira outra peça, portanto não se faz necessário checar os limites
  item = criarElementoMovimento(coluna, linha + cor, DESLOCAMENTO);
  inserirElementoMovimento(&lista, item);
    
  if(primeiroMovimento) {
    
      item = criarElementoMovimento(coluna, linha + (2*cor), DESLOCAMENTO);
      inserirElementoMovimento(&lista, item);  
  } 
  
  return lista;
}
