#include<GL/glut.h>

#include"desenhar_casas.h"
#include"desenhar_tabuleiro.h"
#include"interface.h"

void desenharCasas(float tam_casa){
	float cor_clara[3] = V_LILAS_3F;
	float cor_escura[3] = V_PRETO_3F;

	for(int i = 0; i < 8; i++){

 		glPushMatrix();
 			
 		for(int j = 0; j < 8; j++){
 		
	 		// Todas as casas do tabuleiro cuja soma das coordenadas é par têm a mesma cor. O mesmo vale para as ímpares
	 		if( (i + j) % 2 ){
	 			
	 			glColor3fv(cor_clara);
	 		}
	 		else{
	 			
	 			glColor3fv(cor_escura);
	 		}
	 			
	 		desenharQuadrado(0.0, 0.0, tam_casa);
 				
 			glTranslatef(tam_casa, 0.0, 0.0);
 		}
 			
 		glPopMatrix();
 		
 		glTranslatef(0.0, tam_casa, 0.0);
 	}
}
