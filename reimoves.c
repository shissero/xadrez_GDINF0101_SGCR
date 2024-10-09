#include <stdio.h>
#include "reimoves.h"


void reimoves(int linha, int coluna) {
    
// Movimentos possíveis para o rei
  int movimentos[8][2] = {
       {linha - 1, coluna},     // Norte
       {linha + 1, coluna},     // Sul
       {linha, coluna - 1},     // Oeste
       {linha, coluna + 1},     // Leste
       {linha - 1, coluna - 1}, // Noroeste
       {linha - 1, coluna + 1}, // Nordeste
       {linha + 1, coluna - 1}, // Sudoeste
       {linha + 1, coluna + 1}  // Sudeste
  };

    for (int i = 0; i < 8; i++) {
        int novaLinha = movimentos[i][0];
        int novaColuna = movimentos[i][1];
    }
}
