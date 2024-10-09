#include <stdio.h>
#include "peca.h"
#include "cavalomoves.h"

 //função para gerar movimentos do cavalo
void cavalomoves(int linha, int coluna) {
    
  // Verificação dos limites do tabuleiro
  if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
        
    // Movimentos possíveis do cavalo em "L"
    // Cada par de (linha, coluna) representa uma direção
    int movimentos[8][2] = {
        {linha - 2, coluna - 1}, // Cima-esquerda
        {linha - 2, coluna + 1}, // Cima-direita
        {linha + 2, coluna - 1}, // Baixo-esquerda
        {linha + 2, coluna + 1}, // Baixo-direita
        {linha - 1, coluna - 2}, // Esquerda-cima
        {linha - 1, coluna + 2}, // Direita-cima
        {linha + 1, coluna - 2}, // Esquerda-baixo
        {linha + 1, coluna + 2}  // Direita-baixo
    };

        for (int i = 0; i < 8; i++) {
            int novalinha = movimentos[i][0];
            int novacoluna = movimentos[i][1];
          
     }
   }
}
