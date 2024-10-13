#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "cardealmoves.h"

// TODO: Adequar esta função à nova implementação de de inicializarPeca
void criaTorre(Peca *torre) {

   inicializarPeca(&torre, tipoPeca, cor, coord);
}
