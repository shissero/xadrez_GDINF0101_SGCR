#include <stdio.h>
#include "colateralmoves.h"

 //função para gerar movimentos colaterais
void colateralmoves(int linha, int coluna, int movimentos[8][2]) {
    int index = 0; // Índice para preencher o array de movimentos

    // Verificação dos limites do tabuleiro
    if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
        // Movimentos colaterais
        // Nordeste
        for (int i = 1; linha - i >= 1 && coluna + i <= 8; i++) {
            movimentos[index][0] = linha - i;
            movimentos[index][1] = coluna + i;
            index++;
        }
        // Noroeste
        for (int i = 1; linha - i >= 1 && coluna - i >= 1; i++) {
            movimentos[index][0] = linha - i;
            movimentos[index][1] = coluna - i;
            index++;
        }
        // Sudeste
        for (int i = 1; linha + i <= 8 && coluna + i <= 8; i++) {
            movimentos[index][0] = linha + i;
            movimentos[index][1] = coluna + i;
            index++;
        }
        // Sudoeste
        for (int i = 1; linha + i <= 8 && coluna - i >= 1; i++) {
            movimentos[index][0] = linha + i;
            movimentos[index][1] = coluna - i;
            index++;
        }
    }
}
