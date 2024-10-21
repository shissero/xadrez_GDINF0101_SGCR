#include <stdlib.h>
#include"elemento_movimento.h"
#include"copiar_elemento_movimento.h"
#include"movimento.h"

struct ElementoMovimento *copiarElementoMovimento(struct ElementoMovimento *ponteiroelemento){

	struct ElementoMovimento *novo = (struct ElementoMovimento*)malloc(sizeof(struct ElementoMovimento));
	
	novo->movimento = ponteiroelemento->movimento;
	novo->prox = NULL;
	novo->ant = NULL;
	
	return novo;
}
