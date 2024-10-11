#include <stdio.h>
#include <string.h>
#include "inicializarpeca.h"
#include "peca.h"

void inicializarPeca (PtrPeca *ptrpeca, char t_peca[], int color, int coord[]) {

    strcpy((*ptrpeca)->tipoPeca, t_peca); 
    (*ptrpeca)->cor = color;                 
    (*ptrpeca)->posicao[0] = coord[0];
    (*ptrpeca)->posicao[1] = coord[1];
    
}

 

