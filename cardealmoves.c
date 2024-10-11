#include <stdio.h>
#include "peca.h"
#include "cardealmoves.h"

 //função para gerar movimentos cardeais
// Função para gerar movimentos cardeais
void cardealmoves(int linha, int coluna, int movimentos[8][2]) {
    int index = 0; // Índice para preencher o array de movimentos

    // Verificação dos limites do tabuleiro
    if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
    
        // Norte
        for (int i = 1; linha - i >= 1; i++) {
            movimentos[index][0] = linha - i;
            movimentos[index][1] = coluna;
            index++;
        }
        // Sul
        for (int i = 1; linha + i <= 8; i++) {
            movimentos[index][0] = linha + i;
            movimentos[index][1] = coluna;
            index++;
        }
        // Leste
        for (int i = 1; coluna + i <= 8; i++) {
            movimentos[index][0] = linha;
            movimentos[index][1] = coluna + i;
            index++;
        }
        // Oeste
        for (int i = 1; coluna - i >= 1; i++) {
            movimentos[index][0] = linha;
            movimentos[index][1] = coluna - i;
            index++;
        }
    }
}
