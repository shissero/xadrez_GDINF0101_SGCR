#include<GL/glut.h>

#include"desenhar_movimentos_possiveis.h"
#include"interface.h"
#include"../game_manager/movimentos/elemento_movimento.h"


// Esta função desenha quadrados translúcidos sobre as casas, que correspondem aos movimentos possíveis para a peça tocada
void desenharMovimentosPossiveis(float tam_casa){

	
	// Obtém-se a lista dos movimentos possíveis para a peça tocada
	struct ElementoMovimento *movimentos = TABULEIRO->MovimentosPecaTocada;
	
	
	// Itera-se pela lista de movimentos
	while(movimentos != NULL){
	
		
		// Esta variável auxiliar é somente para melhorar a legibilidade do código
		struct Movimento *aux = movimentos->movimento;
		
		
		// Copia-se a matriz atual para descartar as alterações feitas
		glPushMatrix();
		
		
		// Posiciona-se a origem do sistema de coordenadas no canto inferior esquerdo da casa correspondente ao movimento,
		// lembrando que as coordenadas de tabuleiro estão no intervalo inteiro [1, 8], então é necessário subtrair 1 delas
		// e multiplicar pelo tamanho da casa para obter a translação correta
		glTranslatef( (aux->coluna_destino - 1)*tam_casa, (aux->linha_destino - 1)*tam_casa, 0.0f );
		
		
		
		// Ajusta-se a cor de desenho
		switch(aux->natureza){
		
			case DESLOCAMENTO:
				glColor4fv(CORES[COR_DESLOCAMENTO]);
				break;
			
			case CAPTURA:
				glColor4fv(CORES[COR_CAPTURA]);
				break;
			// TODO: Adicionar cases para as outras constantes de natureza	
			default:
				fprintf(stderr, "A função desenharMovimentosPossiveis recebeu %d como valor de natureza. Abortando\n", aux->natureza);
				abort();
		}
		
		
		
		// Desenha-se o quadrado sobre a casa
		desenharQuadrado(0.0f, 0.0f, tam_casa);
		
		
		// Descarta-se a matriz
		glPopMatrix();
		
		
		// Passa-se para o próximo elemento da lista de movimentos
		movimentos = movimentos->prox;
	}
}
