#include <stdio.h>
#include "peca.h"
#include "movimentos_cardeais.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"

// Função para gerar movimentos cardeais
struct ElementoMovimento *movimentosCardeais(int coluna, int linha, int reichamou) {
  
  
  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  
//movimentos cardeais
  
  //norte
  for (int i = 1; linha + i <= 8; i++) {
  
    item = criarElementoMovimento(coluna, linha + i, DESLOCAMENTO);
    inserirElementoMovimento (&lista, item);
    
    if(reichamou) break;
  };
  
  //sul 
  for (int i = 1; linha - i >= 1; i++) {
  
    item = criarElementoMovimento(coluna, linha - i, DESLOCAMENTO);
    inserirElementoMovimento (&lista, item);
    
    if(reichamou) break;
  };
  
  //leste
  for (int i = 1; coluna + i <= 8; i++) {
  
    item = criarElementoMovimento(coluna + i, linha, DESLOCAMENTO);
    inserirElementoMovimento (&lista, item);
    
    if(reichamou) break;
  };
  
  //oeste
  for (int i = 1; coluna - i >= 1; i++) {
  
    item = criarElementoMovimento(coluna - i, linha, DESLOCAMENTO);
    inserirElementoMovimento (&lista, item);
    
    if(reichamou) break;
  };
  
  return lista;
}
