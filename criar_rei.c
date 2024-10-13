#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "reimoves.h"

// TODO: Adequar essa função à nova implementação de inicializarPeca
void criarRei(Peca *rei) {

    inicializarPeca(&rei, tipoPeca, cor, coord);
}
