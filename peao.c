#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"
#include "peaomoves.h"
#include "peaomoves.c"

void cria_peao(Peca *peao) {

    // Inicializa a peça
    char tipoPeca[] = "Peao"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&peao, tipoPeca, cor, coord);
    // Gera os movimentos cardeais do peão
    peaomoves(peao.posicao[1], peao.posicao[0]);
}
