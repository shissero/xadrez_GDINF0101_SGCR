#include <stdio.h>
#include <stdlib.h>
#include "movimentos_colaterais.h"
#include "movimentos_cardeais.h"
#include "../movimentos/movimento.h"
#include "../../debug/mostrar_lista_movimentos.h"
#include "../movimentos/criar_elemento_movimento.h"
#include "../movimentos/copiar_elemento_movimento.h"
#include "../movimentos/elemento_movimento.h"
#include "../movimentos/inserir_elemento_movimento.h"
#include "movimentos_dama.h"
#include "../movimentos/excluir_lista.h"


struct ElementoMovimento *movimentosDama(int coluna, int linha) {
      
    
    struct ElementoMovimento *lista1 = movimentosCardeais(coluna, linha);
    struct ElementoMovimento *lista2 = movimentosColaterais(coluna, linha);
    struct ElementoMovimento *item;
    struct ElementoMovimento *aux = lista2;
    
    while(aux != NULL){
      
      item = aux;
      struct ElementoMovimento *copia = copiarElementoMovimento(aux);
      inserirElementoMovimento(&lista1, copia);
      aux = aux->prox;
    }
    
    excluirLista(lista2);

    return lista1;
}
