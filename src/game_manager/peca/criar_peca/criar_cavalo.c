#include <stdlib.h>

#include "../peca.h"
#include "../inicializar_peca.h"
#include "criar_cavalo.h"

struct Peca *criarCavalo(int cor, int coluna, int linha) {

    struct Peca *cavalo = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(cavalo, CAVALO, cor, coluna, linha, 0);
    
    return cavalo;
}
