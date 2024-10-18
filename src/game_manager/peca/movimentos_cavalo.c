#include <stdio.h>
#include "movimentos_cavalo.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"

 //função para gerar movimentos colaterais
struct ElementoMovimento *movimentosCavalo(int coluna, int linha) {
    
    
    // Movimentos possíveis do cavalo em "L"
    movimentos[0][0] = linha - 2; movimentos[0][1] = coluna - 1; // Cima-esquerda
    movimentos[1][0] = linha - 2; movimentos[1][1] = coluna + 1; // Cima-direita
    movimentos[2][0] = linha + 2; movimentos[2][1] = coluna - 1; // Baixo-esquerda
    movimentos[3][0] = linha + 2; movimentos[3][1] = coluna + 1; // Baixo-direita
    movimentos[4][0] = linha - 1; movimentos[4][1] = coluna - 2; // Esquerda-cima
    movimentos[5][0] = linha - 1; movimentos[5][1] = coluna + 2; // Direita-cima
    movimentos[6][0] = linha + 1; movimentos[6][1] = coluna - 2; // Esquerda-baixo
    movimentos[7][0] = linha + 1; movimentos[7][1] = coluna + 2; // Direita-baixo
}
