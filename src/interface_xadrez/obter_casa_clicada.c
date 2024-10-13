#include"converter_coordenada.h"
#include"obter_casa_clicada.h"


// Essa função recebe coordenadas de janela, as transforma em coordenadas de tabuleiro que são salvas no arra posicao
void obterCasaClicada(int x, int y, int posicao[]){


	posicao[0] = converterCoordenada(x, 0, 800, 1, 9, 0);
	posicao[1] = converterCoordenada(y, 0, 800, 1, 9, 1);
}
