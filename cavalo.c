#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cavalomoves.h"
#include "cavalo.h"

void cria_cavalo(Peca *cavalo) {

    // Inicializa a peça
    char tipoPeca[] = "Cavalo"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {8, 2}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&cavalo, tipoPeca, cor, coord);

    // Array para armazenar os movimentos do cavalo
    int movimentos[8][2];

    // Gera os movimentos cardeais do cavalo
    cavalomoves(cavalo->posicao[1], cavalo->posicao[0], movimentos);
}
