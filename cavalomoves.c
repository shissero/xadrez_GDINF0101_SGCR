#include <stdio.h>
#include "peca.h"
#include "cavalomoves.h"

void cavalomoves(int linha, int coluna, int movimentos[8][2]) {
    
    // Movimentos possíveis do cavalo em "L"
    movimentos[0][0] = linha - 2; movimentos[0][1] = coluna - 1; // Cima-esquerda
    movimentos[1][0] = linha - 2; movimentos[1][1] = coluna + 1; // Cima-direita
    movimentos[2][0] = linha + 2; movimentos[2][1] = coluna - 1; // Baixo-esquerda
    movimentos[3][0] = linha + 2; movimentos[3][1] = coluna + 1; // Baixo-direita
    movimentos[4][0] = linha - 1; movimentos[4][1] = coluna - 2; // Esquerda-cima
    movimentos[5][0] = linha - 1; movimentos[5][1] = coluna + 2; // Direita-cima
    movimentos[6][0] = linha + 1; movimentos[6][1] = coluna - 2; // Esquerda-baixo
    movimentos[7][0] = linha + 1; movimentos[7][1] = coluna + 2; // Direita-baixo
}
