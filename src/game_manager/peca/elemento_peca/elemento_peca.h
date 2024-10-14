#ifndef ELEMENTO_PECA_H_
#define ELEMENTO_PECA_H_

#include "../peca/peca.h"

struct ElementoPeca {

  struct Peca *peca;
  //struct ElementoPeca *ant;
  struct ElementoPeca *prox;

};

#endif
