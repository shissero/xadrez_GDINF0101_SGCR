#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"
#include "reimoves.h"
#include "reimoves.c"

void cria_rei(Peca *rei) {

    // Inicializa a peça
    char tipoPeca[] = "Rei"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&rei, tipoPeca, cor, coord);
    // Gera os movimentos cardeais do rei
    reimoves(rei.posicao[1], rei.posicao[0]);
}
