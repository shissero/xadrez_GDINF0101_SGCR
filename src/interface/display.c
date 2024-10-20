#include<GL/glut.h>

#include"desenhar_tabuleiro.h"
#include"display.h"

void display(){

	prepararDesenho();
 	
 	desenharTabuleiro();
 	
 	glFlush();
}
