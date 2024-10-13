#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "peaomoves.h"

void criarPeao(Peca *peao) {

    inicializarPeca(&peao, tipoPeca, cor, coord);
}
