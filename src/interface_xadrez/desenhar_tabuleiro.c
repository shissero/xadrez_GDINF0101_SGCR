#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_sprite.h"
#include"desenhar_tabuleiro.h"
#include"interface.h"
#include"desenhar_casas.h"

// Essa função recebe uma área da tela e desenha uma malha quadriculada sobre toda a área
// A cor das casas escuras deve ser decidida antes dessa função ser chamada
// Uma cor das casas claras será a cor do que estiver por trás do tabuleiro (ou a cor de limpeza do buffer
void desenharTabuleiro(float lim_esquerdo, float lim_direito, float lim_inferior, float lim_superior){

	if(lim_direito < lim_esquerdo){
	
		printf("Erro ao desenhar tabuleiro. O limite direito é menor que o esquerdo\n");
		return;
	}
	else {
		float tam_casa = (lim_direito - lim_esquerdo)/8;
	
		glPushMatrix();
			
		desenharCasas(tam_casa);
 		
 		glPopMatrix();
 			
 		desenharSprite(PEAO, tam_casa, tam_casa);
 	}
}
