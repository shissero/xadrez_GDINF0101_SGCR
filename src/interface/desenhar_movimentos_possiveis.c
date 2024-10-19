#include<GL/glut.h>

#include"desenhar_movimentos_possiveis.h"
#include"interface.h"
#include"../game_manager/movimentos/elemento_movimento.h"

void desenharMovimentosPossiveis(float tam_casa){
	
	struct ElementoMovimento *movimentos = TABULEIRO->MovimentosPecaTocada;
	
	while(movimentos != NULL){
	
		struct Movimento *aux = movimentos->movimento;
		
		glPushMatrix();
		
		glTranslatef( (aux->coluna_destino - 1)*tam_casa, (aux->linha_destino - 1)*tam_casa, 0.0f );
		
		
		
		
		switch(aux->natureza){
		
			case DESLOCAMENTO:
				glColor4f(COR_DESLOCAMENTO);
				break;
			
			case CAPTURA:
				glColor4f(COR_CAPTURA);
				break;
				
			default:
				fprintf(stderr, "A função desenharMovimentosPossiveis recebeu %d como valor de natureza. Abortando\n", aux->natureza);
				abort();
		}
		
		
		
		
				
		desenharQuadrado(0.0f, 0.0f, tam_casa);
		
		glPopMatrix();
		
		movimentos = movimentos->prox;
	}
}
