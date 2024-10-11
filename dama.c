#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cardealmoves.h"
#include "colateralmoves.h"

void cria_dama(Peca *dama) {

    // Inicializa a peça
    char tipoPeca[] = "Dama"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Chama a função para inicializar a peça
    inicializarPeca(&dama, tipoPeca, cor, coord);
    
    int movimentos[8][2];
    // Gera os movimentos da dama
    cardealmoves(dama->posicao[1], dama->posicao[0], movimentos);
    colateralmoves(dama->posicao[1], dama->posicao[0], movimentos);
}
