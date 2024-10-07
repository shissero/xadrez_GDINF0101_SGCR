#include<GL/glut.h>

#include"preparar_desenho.h"


// Esta função prepara a tela para o desenho
void prepararDesenho(){

	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(PLANO_ESQ, PLANO_DIR, PLANO_INF, PLANO_SUP, PLANO_PROX, PLANO_DIST);
}
