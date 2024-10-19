#include<stddef.h>
#include<stdlib.h>
#include<time.h>

// Recebe dois inteiros positivos e devolve um inteiro x aleatório tal que inferior <= x < superior
int aleatoriaInt(int inferior, int superior){

	static int resemear = 0;
	
	// A cada chamada de rand(), um número diferente é gerando, então srand() só precisa ser chamada uma vez ao longo do programa
	if(resemear == 0){
	
		srand((unsigned)clock());
		resemear = 1;
	}
	
	// Se os extremos estiverem invertidos, retorna-se um valor padrão
	if(superior < inferior){
	
		return -1;
	}
	
	return rand()%(superior - inferior) + inferior;
}
