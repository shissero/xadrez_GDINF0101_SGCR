#include<GL/glut.h>

#include"preparar_desenho.h"

void prepararDesenho(){

	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(-40.0, 40.0, -40.0, 40.0, -40.0, 40.0);
	
	glTranslatef(-40.0, -40.0, -20.0);
}
