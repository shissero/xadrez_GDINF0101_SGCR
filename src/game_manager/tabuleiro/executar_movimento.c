#include"executar_movimento.h"

void executarMovimento(struct Movimento *movimento){

	struct Peca *movenda = TABULEIRO->PecaTocada;
	
	movenda->coluna = movimento->coluna_destino;
	movenda->linha = movimento->linha_destino;
	movenda->primMov = FALSO;
	
	
	if(movimento->natureza == CAPTURA){
	
		struct Peca *capturanda = buscarAdversaria(TABULEIRO, movimento->coluna_destino, movimento->linha_destino);
		destruirAdversaria(capturanda);
	}
	
	
	TABULEIRO->PecaTocada = NULL;
	
	excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
	
	TABULEIRO->vez *= -1;
	
	glutPostRedisplay();
}
