#include"executar_movimento.h"

void executarMovimento(struct Movimento *movimento){

	struct Peca *movenda = TABULEIRO->PecaTocada;
	
	movenda->coluna = movimento->coluna_destino;
	movenda->linha = movimento->linha_destino;
	
	excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
	
	glutPostRedisplay();
}
