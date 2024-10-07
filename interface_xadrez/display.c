#include<GL/glut.h>

#include"desenhar_quadrado.h"
#include"desenhar_sprite.h"
#include"display.h"
#include"preparar_desenho.h"

void display(){

	prepararDesenho();
	
 	glColor3f(1.0, 0.0, 0.0);
 	
 	glPushMatrix();
 	
 	
 	for(int i = 0, offset = 20; i < 8; i++){

 		for(int j = 0; j < 4; j++){
 		
 			desenharQuadrado(0.0, 0.0, 10.0);
 			
 			glTranslatef(offset, 0.0, 0.0);
 		}
 		
 		offset = -offset;
 		
 		glTranslatef(offset/2, 10.0, 0.0);
 	}
 	
 	glPopMatrix();
 	
 	glTranslatef(10.0, 20.0, 5.0);
 	
 	desenharSprite(PEAO);
 	
 	glFlush();
}
