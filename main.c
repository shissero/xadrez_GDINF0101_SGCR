#include"src/globais.h"
#include"src/interface/interface.h"
#include"src/game_manager/tabuleiro/criar_tabuleiro.h"

int main(int argc, char **argv){

	
	TABULEIRO = criarTabuleiro();
	
	iniciarUI(&argc, argv);
	
	return 0;
}
