#include <stdio.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "reimoves.h"
#include "rei.h"

int main() {
    Peca rei; // Declara a peça do tipo Peca
    cria_rei(&rei); // Chama a função para criar o rei

    // Exibe as informações do rei
    printf("Tipo da peça: %s\n", rei.tipoPeca);
    printf("Cor: %s\n", rei.cor == 0 ? "Branco" : "Preto");
    printf("Posição: (%d, %d)\n", rei.posicao[0], rei.posicao[1]);
    printf("Primeiro movimento: %s\n", rei.primMov ? "Sim" : "Não");

    // Gera e exibe os movimentos do rei
    int movimentos[8][2]; // Array para armazenar os movimentos
    reimoves(rei.posicao[0], rei.posicao[1], movimentos); // Chama a função para obter os movimentos

    printf("Movimentos possíveis do Rei:\n");
    for (int i = 0; i < 8; i++) {
        if (movimentos[i][0] >= 1 && movimentos[i][0] <= 8 && movimentos[i][1] >= 1 && movimentos[i][1] <= 8) {
            printf("(%d, %d)\n", movimentos[i][0], movimentos[i][1]);
        }
    }
}
