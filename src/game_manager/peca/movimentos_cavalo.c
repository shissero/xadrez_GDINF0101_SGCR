#include <stdio.h>
#include "movimentos_cavalo.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "../movimentos/remover_elemento_movimento.h"
#include "../../globais.h"

 //função para gerar movimentos do Cavalo
struct ElementoMovimento *movimentosCavalo(struct Peca *peca) {
    
    struct ElementoMovimento *lista = NULL;
    struct ElementoMovimento *aux_item;
  
        // Cima-esquerda
        aux_item = criarElementoMovimento(peca->coluna - 1, peca->linha + 2, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item);
    
        // Cima-direita
        aux_item = criarElementoMovimento(peca->coluna + 1, peca->linha + 2, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item); 
    
        // Baixo-esquerda
        aux_item = criarElementoMovimento(peca->coluna - 1, peca->linha - 2, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item); 
    
        // Baixo-direita
        aux_item = criarElementoMovimento(peca->coluna + 1, peca->linha - 2, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item); 
    
        // Esquerda-cima
        aux_item = criarElementoMovimento(peca->coluna - 2, peca->linha + 1, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item); 
    
        // Esquerda-baixo
        aux_item = criarElementoMovimento(peca->coluna - 2, peca->linha - 1, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item);  
    
        // Direita-cima
        aux_item = criarElementoMovimento(peca->coluna + 2, peca->linha + 1, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item);
    
        // Direita-baixo
        aux_item = criarElementoMovimento(peca->coluna + 2, peca->linha - 1, DESLOCAMENTO);
	inserirElementoMovimento(&lista, aux_item);
  
    
    
    struct ElementoMovimento *aux_lista = lista;
    
    while(aux_lista != NULL){
    
    	int aux_coluna = aux_lista->movimento->coluna_destino;
    	int aux_linha = aux_lista->movimento->linha_destino;
    	
    	aux_item = aux_lista;
    		
    	aux_lista = aux_lista->prox;
    	
    	if(aux_coluna < 1 || aux_coluna > 8 || aux_linha < 1 || aux_linha > 8){
    	
    		removerElementoMovimento(&lista, aux_item, VERDADEIRO);
    	}
    }
  
    return lista;
}
