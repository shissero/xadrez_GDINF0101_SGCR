#include <stdio.h>
#include "peca.h"
#include "reimoves.h"

void reimoves(int linha, int coluna, int movimentos[8][2]) {
    // Movimentos possíveis para o rei
    movimentos[0][0] = linha - 1; movimentos[0][1] = coluna; // Norte
    movimentos[1][0] = linha + 1; movimentos[1][1] = coluna; // Sul
    movimentos[2][0] = linha; movimentos[2][1] = coluna - 1; // Oeste
    movimentos[3][0] = linha; movimentos[3][1] = coluna + 1; // Leste
    movimentos[4][0] = linha - 1; movimentos[4][1] = coluna - 1; // Noroeste
    movimentos[5][0] = linha - 1; movimentos[5][1] = coluna + 1; // Nordeste
    movimentos[6][0] = linha + 1; movimentos[6][1] = coluna - 1; // Sudoeste
    movimentos[7][0] = linha + 1; movimentos[7][1] = coluna + 1; // Sudeste
}
