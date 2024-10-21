#include <stdio.h>
#include "movimentos_peao.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "peca.h"
#include "../tabuleiro/tabuleiro.h"
#include "../tabuleiro/buscar_aliada.h"
#include "../tabuleiro/buscar_adversaria.h"

struct ElementoMovimento *movimentosPeao(struct Tabuleiro *tabuleiro, struct Peca *peca) {
 
  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  struct Peca *auxAli = buscarAliada(tabuleiro, peca->coluna, peca->linha + peca->cor);
  struct Peca *auxAdv = buscarAdversaria(tabuleiro, peca->coluna, peca->linha + peca->cor);
 
  if((auxAli == NULL) && (auxAdv == NULL)){
      
      item = criarElementoMovimento(peca->coluna, peca->linha + peca->cor, DESLOCAMENTO);
      inserirElementoMovimento(&lista, item);
      
      auxAli = buscarAliada(tabuleiro, peca->coluna, peca->linha + 2*(peca->cor));
      auxAdv = buscarAdversaria(tabuleiro, peca->coluna, peca->linha + 2*(peca->cor));
      
      if((auxAli == NULL) && (auxAdv == NULL) && peca->primMov){
      
          item = criarElementoMovimento(peca->coluna, peca->linha + 2*(peca->cor), DESLOCAMENTO);
          inserirElementoMovimento(&lista, item);
      }
  }
  
  auxAdv = buscarAdversaria(tabuleiro, peca->coluna + 1, peca->linha + peca->cor);
  if(auxAdv != NULL){
      
      item = criarElementoMovimento(peca->coluna + 1, peca->linha + peca->cor, CAPTURA);
      inserirElementoMovimento(&lista, item);
  
  }
  
  auxAdv = buscarAdversaria(tabuleiro, peca->coluna - 1, peca->linha + peca->cor);
  if(auxAdv != NULL){
  
      item = criarElementoMovimento(peca->coluna - 1, peca->linha + peca->cor, CAPTURA);
      inserirElementoMovimento(&lista, item);
  
  }
  
  return lista;
}
