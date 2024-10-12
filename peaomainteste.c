#include <stdio.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "peao.h"
#include "peaomoves.h"

int main() {
    Peca peao; // Declara a peça do tipo Peca
    cria_peao(&peao); // Chama a função para criar o peão

    // Exibe as informações do peão
    printf("Tipo da peça: %s\n", peao.tipoPeca);
    printf("Cor: %s\n", peao.cor == 0 ? "Branco" : "Preto");
    printf("Posição: (%d, %d)\n", peao.posicao[0], peao.posicao[1]);
    printf("Primeiro movimento: %s\n", peao.primMov ? "Sim" : "Não");
    
    // Gera os movimentos do peão
    int movimentos[2][2]; // Array para armazenar os movimentos
    peaomoves(peao.posicao[0], peao.posicao[1], movimentos);

    // Exibe os movimentos gerados
    printf("Movimentos possíveis do Peão:\n");
    for (int i = 0; i < 2; i++) {
        int novalinha = movimentos[i][0];
        int novacoluna = movimentos[i][1];

        // Verifica se o movimento está dentro dos limites do tabuleiro
        if (novalinha >= 1 && novalinha <= 8 && novacoluna >= 1 && novacoluna <= 8) {
            printf("(%d, %d)\n", novalinha, novacoluna);
        }
    }
}
