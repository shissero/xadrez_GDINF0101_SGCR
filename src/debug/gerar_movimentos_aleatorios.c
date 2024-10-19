#include <stddef.h>
#include <stdio.h>

#include"../utilitarios/aleatoria_int.h"
#include"../game_manager/movimentos/movimento.h"
#include"../game_manager/movimentos/criar_elemento_movimento.h"
#include"../game_manager/movimentos/inserir_elemento_movimento.h"
#include"mostrar_lista_movimentos.h"

struct ElementoMovimento *gerarMovimentosAleatorios(){

	struct ElementoMovimento *lista = NULL;
	struct ElementoMovimento *item = NULL;
	
	int controle;
	
	printf("\n\nQuantos movimentos devem ser gerados? (máx 5)\n\n");
	
	scanf("%d", &controle);
	
	if(controle > 5) controle = 5;
	else if(controle < 0) controle = 0;
	
	for(int i = 0; i < controle; i++){
	
		item = criarElementoMovimento( aleatoriaInt(1, 9), aleatoriaInt(1, 9), aleatoriaInt(0, 2));
		inserirElementoMovimento(&lista, item);
	}
	
	return lista;
}
