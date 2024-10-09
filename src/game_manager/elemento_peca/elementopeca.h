#ifndef ELEMENTO_PECA_H_
#define ELEMENTO_PECA_H_

typedef struct {

  Peca peca;
  ElementoPeca *ant;
  ElementoPeca *prox;

}ElementoPeca, *PtrElementoPeca;

#endif
