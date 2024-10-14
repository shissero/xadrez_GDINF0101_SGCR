#include<stdio.h>

#include"mostrar_lista_pecas.h"
#include"mostrar_peca.h"

void mostrarListaPecas(struct ElementoPeca *mostranda){

	printf("\n\n**Mostrando uma lista**\n\n");
	
	int contador = 0;
	
	for(struct ElementoPeca *aux = mostranda; aux != NULL ; aux = aux->prox, contador++){
	
		mostrarPeca(aux->peca);
	}
	
	printf("Mostrados %d pecas\n\n", contador);
}
