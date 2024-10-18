#include <stdio.h>
#include "movimentos_colaterais.h"
#include "movimentos_cardeais.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "movimentos_dama.h"

struct ElementoMovimento *movimentosDama(int coluna, int linha) {
      
    struct ElementoMovimento *lista = NULL;
    struct ElementoMovimento *item;
    
       //movimentos cardeais
  
       //norte
       for (int i = 1; linha + i <= 8; i++) {
  
          item = criarElementoMovimento(coluna, linha + i, DESLOCAMENTO);
          inserirElementoMovimento (&lista, item);
        };
  
        //sul 
        for (int i = 1; linha - i >= 1; i++) {
  
          item = criarElementoMovimento(coluna, linha - i, DESLOCAMENTO);
          inserirElementoMovimento (&lista, item);
        };
  
        //leste
        for (int i = 1; coluna + i <= 8; i++) {
  
          item = criarElementoMovimento(coluna + i, linha, DESLOCAMENTO);
          inserirElementoMovimento (&lista, item);
        };
  
        //oeste
        for (int i = 1; coluna - i >= 1; i++) {
  
          item = criarElementoMovimento(coluna - i, linha, DESLOCAMENTO);
          inserirElementoMovimento (&lista, item);
        };
  
        // Movimentos colaterais
      
        // Nordeste
        for (int i = 1; linha + i <= 8 && coluna + i <= 8; i++){
        
            item = criarElementoMovimento(coluna + i, linha + i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
        }
        
        // Noroeste 
        for (int i = 1; linha + i <= 8 && coluna - i >= 1; i++){
        
            item = criarElementoMovimento(coluna - i, linha + i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
        }
        
        // Sudeste
        for (int i = 1; linha - i >= 1 && coluna + i <= 8; i++){
        
            item = criarElementoMovimento(coluna + i, linha - i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
        }
        
        // Sudoeste
        for (int i = 1; linha - i >= 1 && coluna - i >= 1; i++){
        
            item = criarElementoMovimento(coluna - i, linha - i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
        }
    
    
    return lista;
}
