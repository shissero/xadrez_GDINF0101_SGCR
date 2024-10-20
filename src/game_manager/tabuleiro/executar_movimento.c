#include"executar_movimento.h"

void executarMovimento(struct Movimento *movimento){

	struct Peca *movenda = TABULEIRO->PecaTocada;
	
	movenda->coluna = movimento->coluna_destino;
	movenda->linha = movimento->linha_destino;
	movenda->primMov = FALSO;
	
	
	if(movimento->natureza == CAPTURA){
	
		removerElementoPecaPos( TABULEIRO->Adversarias, movimento->coluna_destino, movimento->linha_destino, VERDADEIRO);
	}
	
	
	
	//struct ElementoPeca *intermediaria = TABULEIRO->Adversarias;
	
	//TABULEIRO->Adversarias = TABULEIRO->Aliadas;
	//TABULEIRO->Aliadas = intermediaria;
	
	//TABULEIRO->PecaTocada = NULL;
	
	//excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
	
	glutPostRedisplay();
}
