#include<stdio.h>

#include"funcao_mouse.h"
#include"obter_casa_clicada.h"
#include"converter_coordenada.h"


void funcaoMouse(int botao, int estado, int x, int y){

	int coord_tela[4];
	
	
	
	//obterCasaClicada(x, y, coord_tela);
	
	printf("Houve um evento de mouse em %d, %d\n", x, y);
	
	printf("Coordenadas transladadas: %f\n", converterCoordenada(y, 0, 800, 1, 9, 1));
}
