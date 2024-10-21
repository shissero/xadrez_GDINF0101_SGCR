#include"destruir_adversaria.h"

void destruirAdversaria(struct Peca *capturanda){

	if(TABULEIRO->vez == BRANCA){

		removerElementoPeca( &(TABULEIRO->Pretas), capturanda, VERDADEIRO);
	}
	else{
	
		removerElementoPeca( &(TABULEIRO->Brancas), capturanda, VERDADEIRO);
	}
}
