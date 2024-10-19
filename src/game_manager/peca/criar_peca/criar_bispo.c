#include <stdlib.h>

#include "../peca.h"
#include "../inicializar_peca.h"
#include "criar_bispo.h"

struct Peca *criarBispo(int cor, int coluna, int linha) {

    struct Peca *bispo = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(bispo, BISPO, cor, coluna, linha, 0);
    
    return bispo;
}
