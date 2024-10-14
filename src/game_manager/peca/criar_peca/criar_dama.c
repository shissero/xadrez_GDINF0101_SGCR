#include <stdlib.h>

#include "../peca.h"
#include "../inicializar_peca.h"
#include "criar_dama.h"

struct Peca *criarDama(int cor, int coluna, int linha) {

    struct Peca *dama = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(dama, DAMA, cor, coluna, linha, 0);
    
    return dama;
}
