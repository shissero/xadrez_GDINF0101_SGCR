#include"gerar_movimentos_fixos.h"
#include"../game_manager/movimentos/criar_elemento_movimento.h"
#include"../game_manager/movimentos/inserir_elemento_movimento.h"

// Esta função sempre gera uma lista com os mesmos elementos movimento
// num determina o quantos elementos serão retornados. Se num > 5 ou num < 1, nenhum movimento é gerado
struct ElementoMovimento *gerarMovimentosFixos(int num){

	struct ElementoMovimento *lista = NULL;
	struct ElementoMovimento *item = NULL;
	
	switch(num){ // Este switch não tem breaks de propósito
	
		case 5:
			item = criarElementoMovimento(1, 5, DESLOCAMENTO);
			inserirElementoMovimento(&lista, item);
		
		case 4:
			item = criarElementoMovimento(2, 4, DESLOCAMENTO);
			inserirElementoMovimento(&lista, item);
			
		case 3:
			item = criarElementoMovimento(3, 3, CAPTURA);
			inserirElementoMovimento(&lista, item);
		
		case 2:
			item = criarElementoMovimento(4, 2, DESLOCAMENTO);
			inserirElementoMovimento(&lista, item);
			
		case 1:
			item = criarElementoMovimento(5, 1, CAPTURA);
			inserirElementoMovimento(&lista, item);
	}
	
	return lista;
}
