#include <stdio.h>
#include "movimentos_cavalo.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"

 //função para gerar movimentos do Cavalo
struct ElementoMovimento *movimentosCavalo(int coluna, int linha) {
    
    struct ElementoMovimento *lista = NULL;
    struct ElementoMovimento *item;
    int movimentos[8][2];
  
    if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
    
        // Cima-esquerda
        movimentos[0][0] = linha + 2; 
        movimentos[0][1] = coluna - 1;
    
        // Cima-direita
        movimentos[1][0] = linha + 2; 
        movimentos[1][1] = coluna + 1; 
    
        // Baixo-esquerda
        movimentos[2][0] = linha - 2; 
        movimentos[2][1] = coluna - 1; 
    
        // Baixo-direita
        movimentos[3][0] = linha - 2; 
        movimentos[3][1] = coluna + 1; 
    
        // Esquerda-cima
        movimentos[4][0] = linha + 1; 
        movimentos[4][1] = coluna - 2; 
    
        // Direita-cima
        movimentos[5][0] = linha + 1; 
        movimentos[5][1] = coluna + 2; 
    
        // Esquerda-baixo
        movimentos[6][0] = linha - 1; 
        movimentos[6][1] = coluna - 2; 
    
        // Direita-baixo
        movimentos[7][0] = linha - 1; 
        movimentos[7][1] = coluna + 2;
    }
  
    for(int i = 0; i < 8; i++){
        
        if(movimentos[i][1] >= 1 && movimentos[i][1] <= 8 && movimentos[i][0] >= 1 && movimentos[i][0] <= 8){
        
            item = criarElementoMovimento(movimentos[i][1], movimentos[i][0], DESLOCAMENTO);
            inserirElementoMovimento (&lista, item);
        }
    }
  
    return lista;
}
