#include <stddef.h>
#include<GL/glut.h>

#include"desenhar_time.h"
#include"desenhar_sprite.h"

void desenharTime(struct ElementoPeca *time, float largura){
	
	while(time != NULL){
	
		struct Peca *aux = time->peca;
		
		glPushMatrix();
		
		glTranslatef( (aux->posicao[0]-1)*largura, (aux->posicao[1]-1)*largura, 0.0f );
		
		desenharSprite(aux->sprite, largura, largura);
		
		glPopMatrix();
		
		time = time->prox;
	}
}
