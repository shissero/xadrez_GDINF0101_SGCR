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
#include "movimentos_rei.h"
#include "../movimentos/excluir_lista.h"

 //função para gerar movimentos do Rei
struct ElementoMovimento *movimentosRei(struct Peca *peca) {
    
    
    struct ElementoMovimento *lista1 = movimentosCardeais(peca->coluna, peca->linha, 1);
    struct ElementoMovimento *lista2 = movimentosColaterais(peca->coluna, peca->linha, 1);
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
