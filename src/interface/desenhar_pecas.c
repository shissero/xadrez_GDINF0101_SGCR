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

// Esta função desenha todas as peças que estão em jogo
// Como todas as sprites e as áreas onde serão desenhadas são quadradas
void desenharPecas(float largura){ // TODO: Não seria mais interessante o comprimento da casa como variável local da interface?

	desenharTime(TABULEIRO->Pretas, largura);
	desenharTime(TABULEIRO->Brancas, largura);
}
