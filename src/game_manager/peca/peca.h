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
  int coluna;
  int linha;
  int primMov;
  int sprite;
  struct ElementoMovimento *(*gerarMovimentos)(struct Peca *peca);  
};

#endif
