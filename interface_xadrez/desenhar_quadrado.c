#include<GL/glut.h>

#include"desenhar_quadrado.h"

void desenharQuadrado(float x, float y, float comprimento){

	glBegin(GL_POLYGON);
		glVertex3f(x, y, 0.0);
		glVertex3f(x, y + comprimento, 0.0);
		glVertex3f(x + comprimento, y + comprimento, 0.0);
		glVertex3f(x + comprimento, y, 0.0);
	glEnd();
}
