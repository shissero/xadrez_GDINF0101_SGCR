#ifndef ELEMENTO_PECA_H_
#define ELEMENTO_PECA_H_

#include "../peca.h"

struct ElementoPeca {

  struct Peca *conteudo;
  //struct ElementoPeca *ant;
  struct ElementoPeca *prox;

};

#endif
