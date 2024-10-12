#include <stdio.h>
#include "peca.h"
#include "cardealmoves.h"

 //função para gerar movimentos cardeais
// Função para gerar movimentos cardeais
void cardealmoves(int linha, int coluna, int movimentos[8][2]) {
    int index = 0; // Índice para preencher o array de movimentos

    // TODO : Não deveria ser competência dessa função checar os limites do tabuleiro
    // Verificação dos limites do tabuleiro
    if (linha >= 1 && linha <= 8 && coluna >= 1 && coluna <= 8) {
    
        // TODO : Se é a direção norte, o número da linha deveria estar aumentando
        // Norte
        for (int i = 1; linha - i >= 1; i++) {
            movimentos[index][0] = linha - i;
            movimentos[index][1] = coluna;
            // TODO : Uma torre pode ter até 14 movimentos possíveis. Usar esse incremento em index funciona, mas, ao gerar os movimentos em outra direções, pode - e vai - causar erro de segmentação
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
