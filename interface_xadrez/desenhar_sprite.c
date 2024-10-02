#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_quadrado.h"
#include"desenhar_sprite.h"
#include"obter_tex_de_arquivo.h"

// Função implementada para desenhar sprites 16x16 com pixels RGBA extraídas de arquivos contendo somente com os bytes 

void desenharSprite(int tipo_sprite){

	
	// Este ponteiro conterá todos os bytes que compõem a sprite
	//GLubyte *spr_buffer = (GLubyte *)malloc(SPRITE_BYTES);
	
	GLubyte spr_buffer[16][16][4]; // Maybe the problem is that this is a signed byte
	
	GLubyte *ptr_buffer = &spr_buffer;

	// Obtem-se os bytes da sprite a se desenhada
	switch(tipo_sprite){
	
		case PEAO:
			obterTexDeArquivo("peao_16_tex", ptr_buffer, SPRITE_BYTES);
			break;
	}
	
	
	// Move-se a origem do sistema para a posição do topo da sprite
	// As informações de pixel começam da linha no topo da imagem
	glTranslatef(0.0, 15.0, 0.0);
	
	
	for(int linha = 0; linha < 16; linha++){
	
		glPushMatrix();
		
		for(int coluna = 0; coluna < 16; coluna++){
		
			printf("\nO pixel %d,%d e %hhx %hhx %hhx %hhx\n", linha, coluna, spr_buffer[linha][coluna][0], spr_buffer[linha][coluna][1], spr_buffer[linha][coluna][2], spr_buffer[linha][coluna][3]);
			
			if(spr_buffer[linha][coluna][3] == 0x00){
			
				printf("Achei um pixel trasparente\n");
			
				glColor4ub(0x00, 0x00, 0xff, 0xff);
			}
			else{
				glColor4ub(spr_buffer[linha][coluna][0], spr_buffer[linha][coluna][1], spr_buffer[linha][coluna][2], spr_buffer[linha][coluna][3]);
			}
	
			desenharQuadrado(0.0, 0.0, PIXEL_SIZE);
			
			glTranslatef(PIXEL_SIZE, 0.0, 0.0);
		}
		
		glPopMatrix();
		
		glTranslatef(0.0, -PIXEL_SIZE, 0.0);
	}
	
}
/*

// Move-se a origem do sistema para a posição do topo da spite
	// As informações de pixel começam da linha no topo da imagem
	//glTranslatef(0.0, 15.0, 0.0);
	
	for(int linha = 0; linha < SPRITE_BYTES; linha += 64){
	
		glPushMatrix();
		
		for(int coluna = linha; coluna < linha + 20; coluna +=4){
		
	
			printf("O pixels %d,%d é %hhx %hhx %hhx %hhx\n", linha/64, coluna/64, *(spr_buffer + coluna), *(spr_buffer + coluna + 1), *(spr_buffer + coluna + 2), *(spr_buffer + coluna + 3));
			
			glColor4b(*(spr_buffer + coluna), *(spr_buffer + coluna + 1), *(spr_buffer + coluna + 2), *(spr_buffer + coluna + 3));
	
			desenharQuadrado(0.0, 0.0, PIXEL_SIZE);
			
			glTranslatef(PIXEL_SIZE, 0.0, 0.0);
		}
		
		glPopMatrix();
		
		glTranslatef(0.0, PIXEL_SIZE, 0.0);
	}
	
	for(int channel = 0; channel < 4; channel++, ptr_buffer++){
		
				if(*(ptr_buffer) == 0){
					//continue;
				}
			
			
				printf("O byte %d é %hhx\n", channel + coluna*4 + linha*16*4, *(ptr_buffer));
		
	
				//printf("O pixels %d,%d é %hhx %hhx %hhx %hhx\n", linha/64, coluna/64, *(spr_buffer + coluna), *(spr_buffer + coluna + 1), *(spr_buffer + coluna + 2), *(spr_buffer + coluna + 3));
			
				//glColor4b(*(spr_buffer + coluna), *(spr_buffer + coluna + 1), *(spr_buffer + coluna + 2), *(spr_buffer + coluna + 3));
	
				//desenharQuadrado(0.0, 0.0, PIXEL_SIZE);
			
				//glTranslatef(PIXEL_SIZE, 0.0, 0.0);
			
			}
			
			
			
	
	
	
	
0: 0, 0, 0 -> ?, ?, x%4
1: 0, 0, 1 -> ?, ?, x%4
3: 0, 0, 3 -> ?, ?, x%4
4: 0, 1, 0 -> ?, ?, x%4
5: 0, 1, 1 -> ?, ?, x%4
7: 0, 1, 3 -> ?, ?, x%4
8: 0, 2, 0 -> ?, y/4, x%4
40: 0, 10, 0 -> ?, y/4, x%4
63: 0, 16, 0 -> ?, y/4, x%4*/
