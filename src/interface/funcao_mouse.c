#include<GL/glut.h>
#include<stdio.h>

#include"funcao_mouse.h"
#include"obter_casa_clicada.h"
#include"converter_coordenada.h"
#include"../game_manager/tabuleiro/tocar_peca.h"
#include"../game_manager/administrador_jogo.h"


void funcaoMouse(int botao, int estado_mouse, int x, int y){

	if(botao == GLUT_LEFT_BUTTON && estado_mouse == GLUT_DOWN){

		int coord_casa[2];
	
		obterCasaClicada(x, y, coord_casa);
	
		administradorJogo(coord_casa[0], coord_casa[1]);
	}
}
