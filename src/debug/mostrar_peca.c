#include<stdio.h>

#include"mostrar_peca.h"

void mostrarPeca(struct Peca *mostranda){

	printf("\n\n**Mostrando uma peça**\n\n");
	
	printf("Tipo: %d ", mostranda->sprite);
	
	switch(mostranda->tipoPeca){
	
		case PEAO:
			printf("peao");
			break;
	
		case TORRE:
			printf("torre");
			break;
	
		case CAVALO:
			printf("cavalo");
			break;
	
		case BISPO:
			printf("bispo");
			break;
	
		case DAMA:
			printf("dama");
			break;
	
		case REI:
			printf("rei");
			break;
	
		default:
			printf("natureza desconhecida");
	}
	
	printf("\n\n");
	
	printf("Cor: ");
	
	switch(mostranda->cor){
	
		case PRETA:
			printf("preta");
			break;
			
		case BRANCA:
			printf("branca");
			break;
		
		default:
			printf("cor desconhecida");
	}
	
	printf("\n\nPosição: (%d, %d)\n", mostranda->coluna, mostranda->linha);
	
	if(mostranda->tipoPeca == PEAO || mostranda->tipoPeca == TORRE || mostranda->tipoPeca == REI){
	
		if(mostranda->primMov){
			printf("Ainda não foi movida\n");
		}
		else{
		
			printf("Já foi movida\n");
		}
	}
}
