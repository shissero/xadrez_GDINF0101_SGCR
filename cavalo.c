#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"
#include "cavalomoves.h"
#include "cavalomoves.c"
#include "cavalo.h"

void cria_cavalo(Peca *cavalo) {

    // Inicializa a peça
    char tipoPeca[] = "Cavalo"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&cavalo, tipoPeca, cor, coord);
    // Gera os movimentos cardeais do cavalo
    cavalomoves(cavalo.posicao[1], cavalo.posicao[0]);
}
