#ifndef GERAR_MOVIMENTOS_H_
#define GERAR_MOVIMENTOS_H_

#include <stdio.h>
#include "gerar_movimentos.h"
#include "movimentos_peao.h"
#include "movimentos_torre.h"
#include "movimentos_cavalo.h"
#include "movimentos_bispo.h"
#include "movimentos_dama.h"
#include "movimentos_rei.h"
#include "../movimentos/elemento_movimento.h"
#include "../tabuleiro/tabuleiro.h"
#include "peca.h"

// Função para criar um bispo
struct ElementoMovimento *gerarMovimentos(struct Tabuleiro *tabuleiro, struct Peca *peca);

#endif
