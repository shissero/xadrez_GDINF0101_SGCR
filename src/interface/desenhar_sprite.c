#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_sprite.h"
#include"interface.h"
#include"obter_tex_de_arquivo.h"
#include"../game_manager/peca/peca.h"
#include"sprites.h"
#include"desenhar_pixel.h"

// Função implementada para desenhar sprites 16x16 com pixels RGBA extraídas de arquivos contendo somente com os bytes 
// Recebe uma constante que determina a sprite a ser desenhada, e mais dois float para altura e largura máximas que a sprite pode ter
// A sprite é quadrada e a área de desenho também, mas usei essa implementação para ser mais fácil de tornar a função mais genérica em outro momento
void desenharSprite(int tipo_sprite, float max_altura, float max_largura){

	
	// Calculamos o tamanho dos pixels em função de uma das dimensões máximas da sprite
	float tam_pixel = max_largura/16;
	
	GLubyte *spr_buffer;

	// Obtem-se os bytes da sprite a se desenhada
	spr_buffer = SPRITES[tipo_sprite];
	
	
	// Move-se a origem do sistema para a posição do topo da sprite
	// As informações de pixel começam da linha no topo da imagem
	// Como a linha de baixo vai ser desenhada em 0.0, multiplicamos tam_pixel pelo número de linhas a desenhar menos um.
	glTranslatef(0.0, 15*tam_pixel, 0.0);
	
	
	for(int linha = 0; linha < 16; linha++){
	
		// A matriz atual é copiada para facilitar o retorno ao início de linha para desenhar a linha seguinte
		glPushMatrix();
		
		
		// Aqui desenhamos as linhas de pixels
		// Como cada pixel tem 4 bytes, a cada volta, deve-se avançar quatro bytes para encontrar o próximo pixels
		for(int coluna = 0; coluna < 16; coluna++, spr_buffer += 4){
			
			
			// Testa-se o pixel não é transparente. Se ele for, não é necessário desenhá-lo
			if( *(spr_buffer + 3) != 0x00){
				
				desenharPixel(tam_pixel, *spr_buffer, *(spr_buffer + 1), *(spr_buffer + 2), *(spr_buffer + 3));
			}
	
			
			// Move-se a origem do sistema para a direita, para desenhar o próximo pixel
			glTranslatef(tam_pixel, 0.0, 0.0);
		}
		
		// A origem do sistema agora volta para o início da linha de pixels
		glPopMatrix();
		
		
		// Move-se a origem do sistema um pixel para baixo para desenhar a próxima linha
		glTranslatef(0.0, -tam_pixel, 0.0);
	}
	
}

