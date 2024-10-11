#include<GL/glut.h>

#include"preparar_desenho.h"
#include"volume_de_projecao.h"


// Esta função prepara a tela para o desenho
void prepararDesenho(){

	glClearColor(1.0, 1.0, 1.0, 1.0); 
	glClear(GL_COLOR_BUFFER_BIT);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	
	glOrtho(TELA_TABULEIRO.esquerdo, TELA_TABULEIRO.direito, TELA_TABULEIRO.inferior, TELA_TABULEIRO.superior, TELA_TABULEIRO.proximal, TELA_TABULEIRO.distal);
}
