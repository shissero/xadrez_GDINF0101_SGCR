#include"executar_movimento.h"

void executarMovimento(struct Movimento *movimento){

	struct Peca *movenda = TABULEIRO->PecaTocada;
	
	movenda->coluna = movimento->coluna_destino;
	movenda->linha = movimento->linha_destino;
	
	if(movimento->natureza == CAPTURA){
	
		struct ElementoPeca *capturanda = buscarAdversaria(TABULEIRO, movimento->coluna_destino, movimento->linha_destino);
		removerElementoPeca( &(TABULEIRO->Aliadas), capturanda, VERDADEIRO);
	}
	
	excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
	
	glutPostRedisplay();
}
