#ifndef EXECUTAR_MOVIMENTO_H_
#define EXECUTAR_MOVIMENTO_H_


#include<GL/glut.h>

#include"../../globais.h"
#include"../movimentos/movimento.h"
#include"../movimentos/excluir_lista_movimentos.h"
#include"../peca/peca.h"
#include"../peca/elemento_peca/remover_elemento_peca_pos.h"
#include"buscar_adversaria.h"

void executarMovimento(struct Movimento*);

#endif
