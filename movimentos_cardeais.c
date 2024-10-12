#include <stdio.h>
#include "peca.h"
#include "movimentos_cardeais.h"

// Função para gerar movimentos cardeais
void movimentosCardeais(int coluna, int linha) {
  
  //movimentos cardeais
  //norte
  for (int i = 1; linha + i <= 8; i++) {
    printf("(%d, %d)\n", coluna, linha);
  }
  
  //sul
  for (int i = 1; linha - i >= 1; i++) {
    printf("(%d, %d)\n", coluna, linha);
  }
  
  //leste
  for (int i = 1; coluna + i <= 8; i++) {
    printf("(%d, %d)\n", coluna, linha);
  }
  
  //oeste
  for (int i = 1; coluna - i >= 1; i++) {
    printf("(%d, %d)\n", coluna, linha);
  }  
  
    
}
