#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"
#include "cardealmoves.h"
#include "cardealmoves.c"

void cria_torre(Peca *torre) {

    // Inicializa a peça
    char tipoPeca[] = "Torre"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&torre, tipoPeca, cor, coord);
    // Gera os movimentos cardeais da torre
    cardealmoves(torre.posicao[1], torre.posicao[0]);
}
