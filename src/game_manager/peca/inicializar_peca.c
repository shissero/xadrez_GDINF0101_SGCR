#include <stdio.h>
#include "inicializar_peca.h"
#include "peca.h"
#include "movimentos_bispo.h"

void inicializarPeca (struct Peca *ptrpeca, int tipoPeca, int cor, int coluna, int linha, int primeiroMovimento) {

    if(tipoPeca < PEAO || tipoPeca > REI){
    
    	printf("Tipo de peça inválido. Inicialização cancelada\n");
    }
    else if(cor != PRETA && cor != BRANCA){
    
    	printf("Cor de peça inválida. Inicialização cancelada\n");
    }
    else{
    
    	ptrpeca->cor = cor;
    	ptrpeca->coluna = coluna;
    	ptrpeca->linha = linha;
    	ptrpeca->primMov = primeiroMovimento;
    	
    	switch(ptrpeca->tipoPeca){
            
            case BISPO:    
              (ptrpeca->gerarMovimentos) = movimentosBispo;
            break;
        
        }
        
    	// As constantes de sprite estão na mesma ordem que as constantes de peça
    	// Como as pretas vêm primeiro, tipoPeca corresponde exatamente à sprite correta
    	// Para as brancas, basta adicionar o número de sprites pretas que vêm antes da primeira sprite branca
    	ptrpeca->sprite = cor == PRETA ? tipoPeca : tipoPeca + 6;
    }
}
