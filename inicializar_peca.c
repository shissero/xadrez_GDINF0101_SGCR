#include <stdio.h>
#include "inicializarpeca.h"
#include "peca.h"

void inicializarPeca (Peca *ptrpeca, int tipoPeca, int cor, int coluna, int linha, int primeiroMovimento) {

    if (tipoPeca >= Pecas.PEAO && tipoPeca <= Pecas.REI && (cor == -1 || cor == 1)) {
    ptrpeca->tipoPeca = tipoPeca;
    ptrpeca->cor = cor;
    ptrpeca->posicao[0] = coluna;
    ptrpeca->posicao[1] = linha;
    ptrpeca->primMov = primeiroMovimento;
    }
    
}
