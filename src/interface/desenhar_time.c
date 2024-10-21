#include <stddef.h>
#include<GL/glut.h>

#include"desenhar_time.h"

// Esta função desenha um time inteiro de peças
void desenharTime(struct ElementoPeca *time, float largura){
	
	// Itera-se pela lista de peças
	while(time != NULL){
	
		
		// Esta variável auxiliar é somente para melhorar a legibilidade
		struct Peca *aux = time->peca;
		
		
		glPushMatrix();
		
		
		// Move-se a origem do sistema para o canto inferior esquerdo da área onde a peça será desenhada
		glTranslatef( (aux->coluna-1)*largura, (aux->linha-1)*largura, 0.0f );
		
		
		// Desenha-se a sprite da peça
		desenharSprite(aux->sprite, largura);
		
		
		glPopMatrix();
		
		
		time = time->prox;
	}
}
