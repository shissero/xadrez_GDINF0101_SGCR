#ifndef DESENHAR_MOVIMENTOS_POSSÍVEIS_H_
#define DESENHAR_MOVIMENTOS_POSSÍVEIS_H_

#include <stdio.h>

#include"../globais.h"

// TODO: Essa implementação não é boa o suficiente
#define COR_DESLOCAMENTO 0.0f, 1.0f, 0.0f, 0.5f // Essa macro deve ser passada como argumento para a função glColor4f()
#define COR_CAPTURA 1.0f, 0.0f, 0.0f, 0.5f // Essa macro deve ser passada como argumento para a função glColor4f()

void desenharMovimentosPossiveis(float);

#endif
