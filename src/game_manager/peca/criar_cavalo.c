#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cavalomoves.h"
#include "cavalo.h"

// TODO: Essa função precisa ser readequada à nova implementação de inicializarPeca
void criarCavalo(Peca *cavalo) {

    inicializarPeca(&cavalo, tipoPeca, cor, coord);
}
