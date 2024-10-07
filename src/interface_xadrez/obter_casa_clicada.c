#include"obter_casa_clicada.h"


// Essa função recebe coordenadas de janela, as transforma em coordenadas de tabuleiro que são salvas no arra posicao
void obterCasaClicada(int x, int y, int posicao[]){


	// Temos que retornar as coordenadas de tela para NDC, que vão ficam no intervalo [-1.0, 1.0]
	// Em seguida, como a projeção é ortográfica e o frustum é simétrico em relação à origem, basta multiplicar as coordenadas pelos planos coorespondentes
	// Por último, manipulamos essas coordenadas para que elas caiam no intervalo [0, 8] para sabermos qual casa foi clicada
	
	// Para a coordenada x:
	// O sistema de coordenadas vai de [0, 800]
	// Dividimos pelo comprimento da tela, o resultado fica no intervalo [0.0, 1.0];
	// Subtraímos 0.5, o resultado fica no intervalo [-0.5, 0.5]
	// Multiplicamos por 2 e chegamos ao intervalo [-1.0, 1.0]
	// Multiplicamos por 40 e chegamos ao intervalo [-40.0, 40.0]
	// Somamos o módulo do plano esquerdo e temos o intervalo [0, 80]
	// Dividimos por 10 (o comprimento de cada casa e temos o intervalo [0, 8]
	posicao[0] = (int)(((float)x/800.0f - 0.5f)*80.0f+40.0)/10;
	
	// Para a coordenada y:
	// O sistema vai de [800, 0]
	// Multiplica-se por -1, o resultado fica entre [-800, 0]	
	// Dividimos pela altura da tela, o resultado fica no intervalo [-1.0, 0.0];
	// Adicionamos 0.5, o resultado fica no intervalo [-0.5, 0.5]
	// Multiplicamos por 2 e chegamos ao intervalo [-1.0, 1.0]
	// Multiplicamos por 40 e chegamos ao intervalo [-40.0, 40.0]
	// Somamos o módulo do plano inferior e temos o intervalo [0, 80]
	// Dividimos por 8 e temos o intervalo [0, 8]
	posicao[1] = (int)(((float)(-y)/800.0f + 0.5f)*80.0f+40.0f)/10;
}
