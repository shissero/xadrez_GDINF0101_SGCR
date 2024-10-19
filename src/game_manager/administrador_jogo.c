#include <stdio.h>

#include"administrador_jogo.h"
#include"tabuleiro/tocar_peca.h"
#include"peca/elemento_peca/buscar_peca.h"
#include"../debug/mostrar_peca.h"
#include"movimentos/buscar_movimento.h"

void administradorJogo(int coluna, int linha){
	
	if(TABULEIRO->PecaTocada == NULL){
		
		tocarPeca(coluna, linha);
	}
	else{
	
		struct Movimento *aux = buscarMovimento(TABULEIRO->MovimentosPecaTocada, coluna, linha);
		
		if(aux != NULL){
		
			printf("\n\nEste é um movimento possível, implemente a execução de movimentos\n\n");
		}
		else{
		
			printf("\n\nEste não é um movimento possível\n\n");
			
			tocarPeca(coluna, linha);
			
			if( TABULEIRO->PecaTocada != NULL ){
			
				printf("\n\nVocê clicou numa aliada\n\n");
			}
		}
	}
		
	glutPostRedisplay();
}
