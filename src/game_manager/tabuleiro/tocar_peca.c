#include <stddef.h>
#include<GL/glut.h>
#include <stdio.h>

#include"tocar_peca.h"
#include"../../globais.h"
#include"../../debug/gerar_movimentos_aleatorios.h"
#include"../../debug/mostrar_peca.h"
#include"../../debug/mostrar_lista_pecas.h"
#include"../peca/peca.h"
#include"../peca/elemento_peca/elemento_peca.h"
#include"../peca/elemento_peca/buscar_peca.h"
#include"buscar_aliada.h"
#include"../peca/gerar_movimentos.h"
#include"../../debug/mostrar_lista_movimentos.h"
#include"../movimentos/excluir_lista_movimentos.h"

// Retorna verdadeiro se uma peça for tocada
// Caso contrário, retorna falso
void tocarPeca(int coluna, int linha){

	// Procura-se uma peça do time que está jogando que esteja na casa clicada
	TABULEIRO->PecaTocada = buscarAliada(TABULEIRO, coluna, linha);
			
	
	// Se uma peça for encontrada, gera-se os movimentos
	if( TABULEIRO->PecaTocada != NULL ){
	
		if(TABULEIRO->MovimentosPecaTocada != NULL) excluirListaMovimentos( &(TABULEIRO->MovimentosPecaTocada) );
		
		TABULEIRO->MovimentosPecaTocada = gerarMovimentos(TABULEIRO, TABULEIRO->PecaTocada);
		
		// Se não houver movimentos possíveis para aquela peça, voltamos TABULEIRO->PecaTocada para seu estado inicial
		if(TABULEIRO->MovimentosPecaTocada == NULL){
		
			TABULEIRO->PecaTocada = NULL;
		}
	}
}
