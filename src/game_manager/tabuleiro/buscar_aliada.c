#include"buscar_aliada.h"
#include"../peca/elemento_peca/buscar_peca.h"

// Procura em lista uma peca que ocupe a casa especificada por coluna e linha
// Retorna um ponteiro para a peça encontrada ou NULL, se não achar nada
struct Peca *buscarAliada(struct Tabuleiro *tabuleiro, int coluna, int linha){

	if(tabuleiro->vez == BRANCA){
        
        	return buscarPeca(tabuleiro->Brancas, coluna, linha);
        }
        else{
        
        	return buscarPeca(tabuleiro->Pretas, coluna, linha);
        }
}
