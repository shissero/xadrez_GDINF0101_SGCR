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
#include "../movimentos/excluir_lista_movimentos.h"
#include "../tabuleiro/tabuleiro.h"


struct ElementoMovimento *movimentosDama(struct Tabuleiro *tabuleiro, struct Peca *peca) {
      
    
    struct ElementoMovimento *lista1 = movimentosCardeais(tabuleiro, peca, 0);
    struct ElementoMovimento *lista2 = movimentosColaterais(tabuleiro, peca, 0);
    struct ElementoMovimento *aux = lista2;
    
    while(aux != NULL){
      
      struct ElementoMovimento *copia = copiarElementoMovimento(aux);
      inserirElementoMovimento(&lista1, copia);
      aux = aux->prox;
    }
    
    excluirListaMovimentos(&lista2);

    return lista1;
}
