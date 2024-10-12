#include <stdio.h>

#include "src/game_manager/elemento_peca/elemento_peca.h"
#include "src/game_manager/inicializarpeca.h"

int main () {
  
  struct ElementoPeca peca1, peca2, peca3, peca4;
  struct ElementoPeca *ptrPeca;
  
  int array [2] = {1, 2};
  
  inicializarPeca (&(peca1.conteudo), "Cavalo", 1, array);
  inicializarPeca (&(peca2.conteudo), "Rainha", 0, array);
  
  printf ("%s, %d, (%d, %d)\n", peca1.conteudo.tipoPeca, peca1.conteudo.cor, peca1.conteudo.posicao[0], peca1.conteudo.posicao[1]);
  printf ("%s, %d, (%d, %d)\n\n", peca2.conteudo.tipoPeca, peca2.conteudo.cor, peca2.conteudo.posicao[0], peca2.conteudo.posicao[1]);
  
  ptrPeca = &peca1;
  //peca1.prox = &peca2;
  //peca2.prox = NULL;
  
  while (ptrPeca != NULL) {
  
    printf ("%s, %d, (%d, %d)\n", ptrPeca->conteudo.tipoPeca, ptrPeca->conteudo.cor, ptrPeca->conteudo.posicao[0], ptrPeca->conteudo.posicao[1]);
    ptrPeca = ptrPeca->prox;
  }
  return 0;
}
