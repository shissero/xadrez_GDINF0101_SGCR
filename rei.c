#include <stdio.h>
#include "rei.h"


 //função para gerar movimentos do bispo
 void reimove (int linha, int coluna) {
 
 //Verificação dos limites do tabuleiro
 if (linha >= 1 && linha <= 8 && coluna <= 8 && coluna >= 1) {
    
    //movimentos colaterais
    
    //nordeste
    for (int i = 1; linha - i >= linha-1 && coluna + i <= coluna+1; i++) 
    //noroeste
    for (int i = 1; linha - i >= linha-1 && coluna - i >= coluna-1; i++)
    //sudeste
    for (int i = 1; linha + i <= linha+1 && coluna + i <= coluna+1; i++)
    //sudoeste
    for (int i = 1; linha + i <= linha+1 && coluna - i >= coluna-1; i++)
    
    //movimentos cardeais
    
    //norte
    for (int i = 1; linha - i >= linha-1; i++)
    //sul
    for (int i = 1; linha + i <= linha+1; i++)
    //leste
    for (int i = 1; coluna + i <= coluna+1; i++)
    //oeste
    for (int i = 1; coluna - i >= coluna-1; i++)
    
 }
