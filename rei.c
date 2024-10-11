#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "reimoves.h"

void cria_rei(Peca *rei) {

    // Inicializa a peça
    char tipoPeca[] = "Rei"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {1, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&rei, tipoPeca, cor, coord);
    
    // Array para armazenar os movimentos do rei
    int movimentos[8][2];
    // Gera os movimentos do rei
    reimoves(rei->posicao[1], rei->posicao[0], movimentos);
}
