#include <stdio.h>
#include "movimentos_colaterais.h"

 //função para gerar movimentos colaterais
void movimentosColaterais(int coluna, int linha) {

// Movimentos colaterais
      
        // Nordeste
        for (int i = 1; linha + i <= 8 && coluna + i <= 8; i++)
        // Noroeste
        for (int i = 1; linha + i <= 8 && coluna - i >= 1; i++)
        // Sudeste
        for (int i = 1; linha - i >= 1 && coluna + i <= 8; i++)
        // Sudoeste
        for (int i = 1; linha - i >= 1 && coluna - i >= 1; i++)
        
}
