#include<GL/glut.h>

#include"desenhar_tabuleiro.h"
#include"display.h"
#include"preparar_desenho.h"

void display(){

	prepararDesenho();
	
 	glColor3f(1.0, 0.0, 0.0);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
 	
 	glPushMatrix();
 	
 	desenharTabuleiro();
 	
 	glPopMatrix();
 	
 	glFlush();
}
