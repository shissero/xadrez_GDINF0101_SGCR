#include <stdio.h>

#include"converter_coordenada.h"

/* Parâmetros:

	coordenada = valor a ser convertido para outro sistema
	inf_inicial = maior valor posssível que é menor ou igual a @coordenada
	e sup_inicial = menor valor posssível que é maior que @coordenada
	inf_final = maior valor posssível que é menor ou igual ao valor de retorno da função
	sup_final = menor valor posssível que é maior que o valor de retorno da função
	inverter = verdadeiro se, e somente se, a orientação dos eixos for oposta
	
   Retorno:
   
   	o valor de @coordenada convertido
   
   
   Aviso:
   
   	se algum dos intervalos for inteiro, deve-se usar
*/
float converterCoordenada(float coordenada, float inf_inicial, float sup_inicial, float inf_final, float sup_final, int inverter){

	float matriz[2][2] = { { coordenada - inf_inicial, inf_final }, { coordenada - sup_inicial, sup_final } };
	
	printf("\n\nCoordenada = %f\nm = %f\nn = %f\np = %f\nq = %f\n", coordenada, inf_inicial, sup_inicial, inf_final, sup_final);
	
	printf("coordenada - inf_final = %f", coordenada - inf_final);
	
	printf("\n\n %f %f\n%f %f\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);
	
	if(inverter){
	
		matriz[0][1] = sup_final;
		matriz[1][1] = inf_final;
	}
	
	return (matriz[0][0]*matriz[1][1] - matriz[0][1]*matriz[1][0])/(sup_inicial - inf_inicial);
}
