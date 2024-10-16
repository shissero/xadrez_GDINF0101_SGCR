#include<GL/glut.h>
#include<stdio.h>

#include"desenhar_pecas.h"
#include"desenhar_sprite.h"
#include"../globais.h"
#include"../game_manager/tabuleiro/tabuleiro.h"
#include"../game_manager/peca/elemento_peca/elemento_peca.h"
#include"../debug/mostrar_peca.h"

void desenharPecas(float largura, float altura){

	struct ElementoPeca *time = TABULEIRO->Pretas;
	
	for(int i = 0; i < 9; i++){
	
		struct Peca *aux = time->peca;
		
		glPushMatrix();
		
		glTranslatef( (aux->posicao[0]-1)*largura, (aux->posicao[1]-1)*altura, 0.0f );
		
		mostrarPeca(aux);
		
		desenharSprite(aux->tipoPeca, largura, altura);
		
		glPopMatrix();
		
		time = time->prox;
	}
}
