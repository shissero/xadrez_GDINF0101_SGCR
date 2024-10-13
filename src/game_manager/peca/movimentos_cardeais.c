#include <stdio.h>
#include "peca.h"
#include "movimentos_cardeais.h"

// Função para gerar movimentos cardeais
void movimentosCardeais(int coluna, int linha) {
  
//movimentos cardeais
  
  //norte
  for (int i = 1; linha + i <= 8; i++)
  //sul
  for (int i = 1; linha - i >= 1; i++)
  //leste
  for (int i = 1; coluna + i <= 8; i++)
  //oeste
  for (int i = 1; coluna - i >= 1; i++)
}
