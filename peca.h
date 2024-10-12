#ifndef PECA_H_
#define PECA_H_

enum Pecas {
    PEAO,
    CAVALO,
    TORRE,
    BISPO,
    DAMA,
    REI
};

struct Peca {

  int tipoPeca;
  int cor;
  int posicao [2];
  int primMov;
  
};

#endif
