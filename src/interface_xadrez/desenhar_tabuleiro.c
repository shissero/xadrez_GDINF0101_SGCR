#include<GL/glut.h>
#include <stdio.h>

#include"desenhar_sprite.h"
#include"desenhar_tabuleiro.h"
#include"interface.h"
#include"desenhar_casas.h"
#include"volume_de_projecao.h"

// Essa função desenha um tabuleiro de xadrez - peças e casas
// A origem do sistema deve estar no centro do volume de projeção
void desenharTabuleiro(){
	
	// A função que desenha as casas começa pelo canto inferior esquerdo do quadrado, então é necessário transladar o sistema
	// Essa implementação é simples porque o volume de projeção é simétrico em relação à origem
	glTranslatef(TELA_TABULEIRO.esquerdo, TELA_TABULEIRO.inferior, Z_CASAS_TABULEIRO);

	float tam_casa = (TELA_TABULEIRO.direito - TELA_TABULEIRO.esquerdo)/8.0f;
	
	glPushMatrix();
			
	desenharCasas(tam_casa);
 		
 	glPopMatrix();
 			
 	desenharSprite(PEAO, tam_casa, tam_casa);
}
