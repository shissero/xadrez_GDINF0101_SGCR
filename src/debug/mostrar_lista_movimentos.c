#include<stdio.h>

#include"mostrar_lista_movimentos.h"
#include"mostrar_movimento_ptr.h"

void mostrarListaMovimentos(struct ElementoMovimento *mostranda){

	printf("\n\n**Mostrando uma lista**\n\n");
	
	int contador = 0;
	
	for(struct ElementoMovimento *aux = mostranda; aux != NULL ; aux = aux->prox, contador++){
	
		mostrarMovimentoPtr(aux->movimento);
	}
	
	printf("Mostrados %d movimentos\n\n", contador);
}
