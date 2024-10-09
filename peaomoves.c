#include <stdio.h>
#include "peaomoves.h"

void peaomoves(int linha, int coluna) {

  // Verificação se o peão está dentro dos limites do tabuleiro
  if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
        
      // Movimentos comuns do peão
      int movimentos[2][2] = {
          {linha - 1, coluna}, // Movimento comum (uma casa para frente)
          {linha - 2, coluna}  // Primeiro movimento (duas casas para frente)
      };
  }
}
