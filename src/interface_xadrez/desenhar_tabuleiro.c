#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_sprite.h"
#include"desenhar_tabuleiro.h"
#include"interface.h"


// Essa função recebe uma área da tela e desenha uma malha quadriculada sobre toda a área
// A cor das casas escuras deve ser decidida antes dessa função ser chamada
// Uma cor das casas claras será a cor do que estiver por trás do tabuleiro (ou a cor de limpeza do buffer
void desenharTabuleiro(float lim_esquerdo, float lim_direito, float lim_inferior, float lim_superior){

	float cor_clara[3] = V_LILAS_3F;
	float cor_escura[3] = V_PRETO_3F;

	if(lim_direito < lim_esquerdo){
	
		printf("Erro ao desenhar tabuleiro. O limite direito é menor que o esquerdo\n");
		return;
	}
	else {
	
		float tam_casa = (lim_direito - lim_esquerdo)/8;
	
		glPushMatrix();
			
		for(int i = 0; i < 8; i++){

 			glPushMatrix();
 			
 			for(int j = 0; j < 8; j++){
 		
	 			// Todas as casas do tabuleiro cuja soma das coordenadas é par têm a mesma cor. O mesmo vale para as ímpares
	 			if( (i + j) % 2 ){
	 			
	 				glColor3fv(cor_escura);
	 			}
	 			else{
	 			
	 				glColor3fv(cor_clara);
	 			}
	 			
	 			desenharQuadrado(0.0, 0.0, tam_casa);
 				
 				glTranslatef(tam_casa, 0.0, 0.0);
 			}
 			
 			glPopMatrix();
 		
 			glTranslatef(0.0, tam_casa, 0.0);
 		}
 		
 		glPopMatrix();
 		
 	
 		desenharSprite(PEAO, tam_casa, tam_casa);
 	}
}
