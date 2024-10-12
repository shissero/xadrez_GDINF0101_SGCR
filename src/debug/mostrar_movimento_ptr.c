#include<stdio.h>

#include"mostrar_movimento_ptr.h"

void mostrarMovimentoPtr(struct Movimento *mostranda){

	printf("\n\n**Mostrando um movimento**\n\n");
	printf("Destino do movimento: (%d, %d)\n", mostranda->coluna_destino, mostranda->linha_destino);
	
	printf("Natureza: ");
	
	switch(mostranda->natureza){
	
		case CAPTURA:
			printf("Captura");
			break;
	
		case DESLOCAMENTO:
			printf("Deslocamento");
			break;
	
		default:
			printf("Natureza desconhecida");
	}
	
	printf("\n\n");
}
