#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_quadrado.h"
#include"desenhar_sprite.h"
#include"desenhar_tabuleiro.h"


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
		
		printf("O tamanho das casas é %f\n", tam_casa);
	
		glPushMatrix();
		
		//  A variável offset só é necessária porque foi feita uma gambiarra para desenhar os quadrados
		for(int i = 0, offset = tam_casa*2; i < 8; i++){

 			for(int j = 0; j < 4; j++){
 		
	 			desenharQuadrado(0.0, 0.0, tam_casa);
 				
 				glTranslatef(offset, 0.0, 0.0);
 			}
 		
 			offset = -offset;
 		
 			glTranslatef(offset/2, 10.0, 0.0);
 		}
 		
 		glPopMatrix();
 		
 	
 		desenharSprite(PEAO, tam_casa, tam_casa);
 	}
}
