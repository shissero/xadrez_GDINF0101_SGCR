#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"

int main() {
    
    Peca peca;
    Peca ptrpeca = &peca;       
    
    int tipo = 1;
    int cor = 0; 
    int coluna = 1;
    int linha = 0;
    
    inicializarPeca(&ptrpeca, tipo, cor, posicao);
    
    printf("%s\n", peca.tipoPeca);
    printf("cor %d\n", peca.cor);
    printf("coord (%d, %d)\n", peca.posicao[0], peca.posicao[1]);
     
}
