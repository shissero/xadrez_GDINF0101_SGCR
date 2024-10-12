#ifndef PECA_H_
#define PECA_H_

// TODO : Reescreva essa declaração. Não use typedef nem defina um tipo de ponteiro para peca
typedef struct {

  // TODO : É necessário especificar constantes para cada tipo de peça. Você pode usar macros ou uma enumeração
  int tipoPeca;
  int cor;
  int posicao [2];
  int primMov;
  
}Peca, *PtrPeca;

#endif



