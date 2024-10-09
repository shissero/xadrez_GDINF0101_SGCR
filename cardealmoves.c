#include <stdio.h>
#include "peca.h"

 //função para gerar movimentos cardeais
 void cardealmoves (int linha, int coluna) {
 
 //Verificação dos limites do tabuleiro
 if (linha >= 1 && linha <= 8 && coluna <= 8 && coluna >= 1) {
    
    //movimentos cardeais
    
    //norte
    for (int i = 1; linha - i >= 1; i++)
    //sul
    for (int i = 1; linha + i <= 8; i++)
    //leste
    for (int i = 1; coluna + i <= 8; i++)
    //oeste
    for (int i = 1; coluna - i >= 1; i++)
    
 }
