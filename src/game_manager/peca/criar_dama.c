#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cardealmoves.h"
#include "colateralmoves.h"

// TODO: Adequar essa função à nova implementação de inicializarPeca
void criarDama(Peca *dama) {

    // Inicializa a peça
    inicializarPeca(&dama, tipoPeca, cor, coord);
}
