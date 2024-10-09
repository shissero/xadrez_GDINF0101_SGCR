#include <stdio.h>

 //função para gerar movimentos colaterais
 void colateralmoves (int linha, int coluna) {
 
 //Verificação dos limites do tabuleiro
 if (linha >= 1 && linha <= 8 && coluna <= 8 && coluna >= 1) {
    
    //nordeste
    for (int i = 1; linha - i >= 1 && coluna + i <= 8; i++) 
    //noroeste
    for (int i = 1; linha - i >= 1 && coluna - i >= 1; i++)
    //sudeste
    for (int i = 1; linha + i <= 8 && coluna + i <= 8; i++)
    //sudoeste
    for (int i = 1; linha + i <= 8 && coluna - i >= 1; i++)
    
 }
