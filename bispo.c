#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "colateralmoves.h"
#include "bispo.h"

void criabispo(Peca *bispo) {

    // Inicializa a peça
    char tipoPeca[] = "Bispo"; // Tipo da peça
    int cor = 0; // 0 é branco e 1 é preto
    int coord[2] = {4, 4}; // Posição inicial da torre (4, 4) (só pra testar)
    int primMov = 1; // Inicializa como primeiro movimento

    // Função para inicializar a peça
    inicializarPeca(&bispo, tipoPeca, cor, coord);
    
    int movimentos[8][2];
    // Gera movimentos colaterais do bispo
    colateralmoves(bispo->posicao[1], bispo->posicao[0], movimentos);
}
