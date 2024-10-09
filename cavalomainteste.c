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
    
}
