#include <stdlib.h>

#include "peca.h"
#include "inicializar_peca.h"
#include "criar_rei.h"

struct Peca *criarRei(int cor, int coluna, int linha, int primMov) {

    struct Peca *rei = (struct Peca*)malloc(sizeof(struct Peca));
    
    inicializarPeca(rei, REI, cor, coluna, linha, primMov);
    
    return rei;
}
