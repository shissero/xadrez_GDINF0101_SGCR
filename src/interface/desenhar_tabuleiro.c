#include"desenhar_tabuleiro.h"

// Esta função desenha um tabuleiro de xadrez - peças e casas
// Ela presume que a origem do sistema de coordenadas está no centro da tela e que os eixos x e y do volume de projeção são simétricos em relação à origem
void desenharTabuleiro(){
	
	// Copia-se a matriz atual para que as transformações executadas pela função possam ser descartadas com facilidade
 	glPushMatrix();
 	
 	
 	// A função que desenha as casas começa pelo canto inferior esquerdo do quadrado, então é necessário transladar o sistema
	glTranslatef(TELA_TABULEIRO.esquerdo, TELA_TABULEIRO.inferior, 0.0);
	
	
	// Desenha-se as casas
	desenharCasas(TAM_CASA);
 	
 	
 	// Marca-se as casas para onde é possível mover a peça escolhida
 	desenharMovimentosPossiveis(TAM_CASA);
 			
 	
 	// Desenha-se as peças
 	desenharPecas(TAM_CASA);
 	
 	
 	glPopMatrix();
}
