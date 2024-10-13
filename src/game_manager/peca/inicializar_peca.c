#include <stdio.h>
#include "inicializar_peca.h"
#include "peca.h"

void inicializarPeca (struct Peca *ptrpeca, int tipoPeca, int cor, int coluna, int linha, int primeiroMovimento) {

    if (tipoPeca >= PEAO && tipoPeca <= REI && (cor == PRETA || cor == BRANCA)) {
    ptrpeca->tipoPeca = tipoPeca;
    ptrpeca->cor = cor;
    ptrpeca->posicao[0] = coluna;
    ptrpeca->posicao[1] = linha;
    ptrpeca->primMov = primeiroMovimento;
    }
    
}
