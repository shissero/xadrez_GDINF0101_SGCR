#include <stdio.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cardealmoves.h"
#include "colateralmoves.h"
#include "dama.h"

int main() {
    Peca dama; // Declara a peça do tipo Peca
    cria_dama(&dama); // Chama a função para criar a dama

    // Exibe as informações da dama
    printf("Tipo da peça: %s\n", dama.tipoPeca);
    printf("Cor: %s\n", dama.cor == 0 ? "Branco" : "Preto");
    printf("Posição: (%d, %d)\n", dama.posicao[0], dama.posicao[1]);
    printf("Primeiro movimento: %s\n", dama.primMov ? "Sim" : "Não");

    // Exibe os movimentos possíveis da dama
    printf("Movimentos possíveis da Dama:\n");

    int movimentosCardeais[8][2];
    int movimentosColaterais[8][2];

    // Funções para gerar movimentos
    cardealmoves(dama.posicao[1], dama.posicao[0], movimentosCardeais);
    colateralmoves(dama.posicao[1], dama.posicao[0], movimentosColaterais);

    // Exiba os movimentos cardeais
    for (int i = 0; i < 8; i++) {
        if (movimentosCardeais[i][0] != 0 && movimentosCardeais[i][1] != 0) {
            printf("Cardeal: (%d, %d)\n", movimentosCardeais[i][0], movimentosCardeais[i][1]);
        }
    }

    // Exiba os movimentos colaterais
    for (int i = 0; i < 8; i++) {
        if (movimentosColaterais[i][0] != 0 && movimentosColaterais[i][1] != 0) {
            printf("Colateral: (%d, %d)\n", movimentosColaterais[i][0], movimentosColaterais[i][1]);
        }
    }
}
