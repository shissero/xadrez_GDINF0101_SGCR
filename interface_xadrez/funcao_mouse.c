#include<stdio.h>

#include"funcao_mouse.h"
#include"obter_casa_clicada.h"

void funcaoMouse(int botao, int estado, int x, int y){

	int coord_tela[4];
	
	obterCasaClicada(x, y, coord_tela);
	
	printf("Houve um evento de mouse em %d, %d\n", x, y);
	
	printf("Coordenadas transladadas: (%d, %d)\n", coord_tela[0], coord_tela[1]);
}
