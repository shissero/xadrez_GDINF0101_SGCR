#include<GL/glut.h>
#include<stdio.h>

#include"desenhar_pecas.h"
#include"desenhar_time.h"
#include"desenhar_sprite.h"
#include"../globais.h"
#include"../game_manager/tabuleiro/tabuleiro.h"
#include"../game_manager/peca/elemento_peca/elemento_peca.h"
#include"../game_manager/peca/elemento_peca/inserir_elemento_peca.h"
#include"../debug/mostrar_peca.h"

void desenharPecas(float largura){

	desenharTime(TABULEIRO->Pretas, largura);
	desenharTime(TABULEIRO->Brancas, largura);
}
