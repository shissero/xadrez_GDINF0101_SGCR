#ifndef PECA_H_
#define PECA_H_

enum Pecas {
    PEAO,
    TORRE,
    CAVALO,
    BISPO,
    DAMA,
    REI
};

enum Cores {
    PRETA = -1,
    BRANCA = 1
};

struct Peca {

  int tipoPeca;
  int cor;
  int posicao [2];
  int primMov;
  int sprite;
};

#endif
