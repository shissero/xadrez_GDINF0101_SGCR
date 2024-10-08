#include<stdio.h>

#include"funcao_mouse.h"
#include"obter_casa_clicada.h"
#include"converter_coordenada.h"


void funcaoMouse(int botao, int estado, int x, int y){

	int coord_casa[2];
	
	obterCasaClicada(x, y, coord_casa);
	
	printf("Houve um evento de mouse em %d, %d\n", x, y);
	
	printf("Casa correspondente: %d, %d\n", coord_casa[0], coord_casa[1]);
}
