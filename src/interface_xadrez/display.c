#include<GL/glut.h>

#include"desenhar_tabuleiro.h"
#include"display.h"
#include"preparar_desenho.h"

void display(){

	prepararDesenho();
	
 	glColor3f(1.0, 0.0, 0.0);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	
	glTranslatef(-40.0, -40.0, -20.0);
 	
 	glPushMatrix();
 	
 	desenharTabuleiro(PLANO_ESQ, PLANO_DIR, PLANO_INF, PLANO_SUP);
 	
 	glPopMatrix();
 	
 	glFlush();
}
