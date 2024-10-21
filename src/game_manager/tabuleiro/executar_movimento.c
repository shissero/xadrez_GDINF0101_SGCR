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
	
	
	if(TABULEIRO->PecaTocada->tipoPeca == PEAO){
	
		struct ElementoPeca *promocao = criarElementoDama(TABULEIRO->PecaTocada->cor, TABULEIRO->PecaTocada->coluna, TABULEIRO->PecaTocada->linha);
		
		
		if(TABULEIRO->vez == BRANCA && movimento->linha_destino == 8){
		
			removerElementoPeca(TABULEIRO->Brancas, TABULEIRO->PecaTocada)
		}
		else if(TABULEIRO->vez == PRETA && movimento->linha_destino == 1){
		
			removerElementoPeca(TABULEIRO->Pretas, TABULEIRO->PecaTocada)
		}
	}
	
	
	TABULEIRO->PecaTocada = NULL;
	
	excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
	
	TABULEIRO->vez *= -1;
	
	glutPostRedisplay();
}
