#include"desenhar_pixel.h"
#include"interface.h"

void desenharPixel(float tam_pixel, GLubyte vermelho, GLubyte verde, GLubyte azul, GLubyte alfa){

	glColor4ub(vermelho, verde, azul, alfa);
				
	desenharQuadrado(0.0, 0.0, tam_pixel);
}
