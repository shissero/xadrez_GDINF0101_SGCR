#include <stdio.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cavalomoves.h"
#include "cavalo.h"

int main() {
    Peca cavalo; // Declara a peça do tipo Peca
    cria_cavalo(&cavalo); // Chama a função para criar o cavalo

    // Exibe as informações do cavalo
    printf("Tipo da peça: %s\n", cavalo.tipoPeca);
    printf("Cor: %s\n", cavalo.cor == 0 ? "Branco" : "Preto");
    printf("Posição: (%d, %d)\n", cavalo.posicao[0], cavalo.posicao[1]);
    printf("Primeiro movimento: %s\n", cavalo.primMov ? "Sim" : "Não");

    // Gera os movimentos do cavalo
    int movimentos[8][2]; // Array pra armazenar os movimentos
    cavalomoves(cavalo.posicao[0], cavalo.posicao[1], movimentos);

    // Exibe os movimentos válidos
    printf("Movimentos possíveis do Cavalo:\n");
    for (int i = 0; i < 8; i++) {
        int novalinha = movimentos[i][0];
        int novacoluna = movimentos[i][1];

        // Verifica se o movimento está dentro dos limites do tabuleiro
        if (novalinha >= 1 && novalinha <= 8 && novacoluna >= 1 && novacoluna <= 8) {
            printf(" (%d, %d)\n", novalinha, novacoluna);
        }
    }

}
