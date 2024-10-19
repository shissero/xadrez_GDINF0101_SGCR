#include"gerar_movimentos_fixos.h"
#include"../game_manager/movimentos/criar_elemento_movimento.h"
#include"../game_manager/movimentos/inserir_elemento_movimento.h"

// Esta função sempre gera uma lista com os mesmos três elementos movimento
struct ElementoMovimento *gerarMovimentosFixos(){

	struct ElementoMovimento *lista = NULL;
	
	struct ElementoMovimento *item = criarElementoMovimento(4, 5, DESLOCAMENTO);
	
	inserirElementoMovimento(&lista, item);
	
	item = criarElementoMovimento(2, 8, DESLOCAMENTO);
	
	inserirElementoMovimento(&lista, item);
	
	item = criarElementoMovimento(3, 4, CAPTURA);
	
	inserirElementoMovimento(&lista, item);
	
	return lista;
}
