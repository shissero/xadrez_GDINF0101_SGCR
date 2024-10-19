#include <stdio.h>
#include "movimentos_colaterais.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"

 //função para gerar movimentos colaterais
struct ElementoMovimento *movimentosColaterais(int coluna, int linha, int reichamou) {

  struct ElementoMovimento *lista = NULL;
  struct ElementoMovimento *item;
  
// Movimentos colaterais
      
        // Nordeste
        for (int i = 1; linha + i <= 8 && coluna + i <= 8; i++){
        
            item = criarElementoMovimento(coluna + i, linha + i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
            
            if(reichamou) break;
        }
        
        // Noroeste 
        for (int i = 1; linha + i <= 8 && coluna - i >= 1; i++){
        
            item = criarElementoMovimento(coluna - i, linha + i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
            
            if(reichamou) break;
        }
        
        // Sudeste
        for (int i = 1; linha - i >= 1 && coluna + i <= 8; i++){
        
            item = criarElementoMovimento(coluna + i, linha - i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
            
            if(reichamou) break;
        }
        
        // Sudoeste
        for (int i = 1; linha - i >= 1 && coluna - i >= 1; i++){
        
            item = criarElementoMovimento(coluna - i, linha - i, DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
            
            if(reichamou) break;
        }
        
  return lista;    
}
