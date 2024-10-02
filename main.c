#include <stdio.h>
#include <string.h>
#include "peca.h"
#include "inicializarpeca.h"
#include "inicializarpeca.c"

int main() {
    
    Peca peca;
    PtrPeca ptrpeca = &peca;       
    
    char tipo[] = "Cavalo";
    int cor = 0; 
    int posicao[] = {1, 0};
    
    inicializarPeca(&ptrpeca, tipo, cor, posicao);
    
    printf("%s\n", peca.tipoPeca);
    printf("cor %d\n", peca.cor);
    printf("coord (%d, %d)\n", peca.posicao[0], peca.posicao[1]);
     
}
