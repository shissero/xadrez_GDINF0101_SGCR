#include <stdio.h>
#include "movimentos_cardeais.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "../tabuleiro/tabuleiro.h"
#include "../tabuleiro/buscar_aliada.h"
#include "../tabuleiro/buscar_adversaria.h"

  // Função para gerar movimentos cardeais
  struct ElementoMovimento *movimentosCardeais(struct Tabuleiro *tabuleiro, struct Peca *peca, int reichamou) {
  
  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  
//movimentos cardeais
  
  //norte
  for (int i = 1; peca->linha + i <= 8; i++) {
    
    if(buscarAliada(tabuleiro, peca->coluna, peca->linha + i) != NULL) break;
    
    if(buscarAdversaria(tabuleiro, peca->coluna, peca->linha + i) != NULL){
            
        item = criarElementoMovimento(peca->coluna, peca->linha + i, CAPTURA);
        inserirElementoMovimento (&lista, item);
        break;
        
    }else{
    
        item = criarElementoMovimento(peca->coluna, peca->linha + i, DESLOCAMENTO);
        inserirElementoMovimento (&lista, item);
    }
    
    if(reichamou) break;
  };
  
  //sul 
  for (int i = 1; peca->linha - i >= 1; i++) {
    
    if(buscarAliada(tabuleiro, peca->coluna, peca->linha - i) != NULL) break;
    
    if(buscarAdversaria(tabuleiro, peca->coluna, peca->linha - i) != NULL){
            
        item = criarElementoMovimento(peca->coluna, peca->linha - i, CAPTURA);
        inserirElementoMovimento (&lista, item);
        break;
        
    }else{
    
        item = criarElementoMovimento(peca->coluna, peca->linha - i, DESLOCAMENTO);
        inserirElementoMovimento (&lista, item);
    }
    
    if(reichamou) break;
  };
  
  //leste
  for (int i = 1; peca->coluna + i <= 8; i++) {
    
    if(buscarAliada(tabuleiro, peca->coluna + i, peca->linha) != NULL) break;
    
    if(buscarAdversaria(tabuleiro, peca->coluna + i, peca->linha) != NULL){
            
        item = criarElementoMovimento(peca->coluna + i, peca->linha, CAPTURA);
        inserirElementoMovimento (&lista, item);
        break;
        
    }else{
    
        item = criarElementoMovimento(peca->coluna + i, peca->linha, DESLOCAMENTO);
        inserirElementoMovimento (&lista, item);
    }
    
    if(reichamou) break;
  };
  
  //oeste
  for (int i = 1; peca->coluna - i >= 1; i++) {
    
    if(buscarAliada(tabuleiro, peca->coluna - i, peca->linha) != NULL) break;
    
    if(buscarAdversaria(tabuleiro, peca->coluna - i, peca->linha) != NULL){
            
        item = criarElementoMovimento(peca->coluna - i, peca->linha, CAPTURA);
        inserirElementoMovimento (&lista, item);
        break;
        
    }else{
    
        item = criarElementoMovimento(peca->coluna - i, peca->linha, DESLOCAMENTO);
        inserirElementoMovimento (&lista, item);
    }
    
    if(reichamou) break;
  };
  
  return lista;
}
