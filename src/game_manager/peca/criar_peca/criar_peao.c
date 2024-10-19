#include <stdlib.h>

#include "../peca.h"
#include "../inicializar_peca.h"
#include "criar_peao.h"

struct Peca *criarPeao(int cor, int coluna, int linha, int primMov) {

    struct Peca *peao = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(peao, PEAO, cor, coluna, linha, primMov);
    
    return peao;
}
