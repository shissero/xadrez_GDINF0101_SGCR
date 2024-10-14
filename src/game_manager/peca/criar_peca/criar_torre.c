#include <stdlib.h>

#include "../peca.h"
#include "../inicializar_peca.h"
#include "criar_torre.h"

struct Peca *criarTorre(int cor, int coluna, int linha, int primMov) {

    struct Peca *torre = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(torre, TORRE, cor, coluna, linha, primMov);
    
    return torre;
}
