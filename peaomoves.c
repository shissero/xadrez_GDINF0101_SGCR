#include <stdio.h>
#include "peaomoves.h"

void peaomoves(int linha, int coluna, int movimentos[2][2]) {

  // Verificação se o peão está dentro dos limites do tabuleiro
  if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
        
      // Movimentos do peão
      movimentos[0][0] = linha - 2; movimentos[0][1] = coluna; // primeiro movimento
      movimentos[1][0] = linha - 1; movimentos[1][1] = coluna; // movimento comum
    
  }
}
