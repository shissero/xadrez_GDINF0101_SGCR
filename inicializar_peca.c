#include <stdio.h>
#include <string.h>
#include "inicializarpeca.h"
#include "peca.h"

// TODO: É necessário mudar os tipos dos parâmetros para se adequar à nova forma da struct Peca
// TODO: As coordenadas devem ser passsadas como dois parâmetros diferentes
void inicializarPeca (PtrPeca *ptrpeca, char t_peca[], int color, int coord[]) {

    // TODO: É necessário validar o tipo de peça recebido, para garantir que um tipo inválido não será passado
    strcpy((*ptrpeca)->tipoPeca, t_peca); 
    (*ptrpeca)->cor = color;                 
    (*ptrpeca)->posicao[0] = coord[0];
    (*ptrpeca)->posicao[1] = coord[1];
    
}

 

