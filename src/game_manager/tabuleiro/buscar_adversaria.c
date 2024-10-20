#include"buscar_adversaria.h"
#include"../peca/elemento_peca/buscar_peca.h"

// Procura em lista uma peca que ocupe a casa especificada por coluna e linha
// Retorna um ponteiro para a peça encontrada ou NULL, se não achar nada
struct Peca *buscarAdversaria(struct Tabuleiro *tabuleiro, int coluna, int linha){

	return buscarPeca(tabuleiro->Adversarias, coluna, linha);
}
