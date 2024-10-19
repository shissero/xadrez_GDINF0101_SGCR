#include <stddef.h>

#include"criar_time.h"
#include"../peca/elemento_peca/inserir_elemento_peca.h"
#include"../peca/elemento_peca/criar_elemento_peao.h"
#include"../peca/elemento_peca/criar_elemento_torre.h"
#include"../peca/elemento_peca/criar_elemento_cavalo.h"
#include"../peca/elemento_peca/criar_elemento_bispo.h"
#include"../peca/elemento_peca/criar_elemento_dama.h"
#include"../peca/elemento_peca/criar_elemento_rei.h"

struct ElementoPeca *criarTime(int cor){

	struct ElementoPeca *time = NULL;
	
	
	// linha_pecas armazena o valor da linha em que as peças - exceto os peões - ficam
	// para cor = 1 (BRANCA), 4.5f - cor*(3.5f) = 1
	// para cor = -1 (PRETA), 4.5f - cor*(3.5f) = 8
	int linha_pecas = 4.5f - cor*(3.5f);
	
	
	// linha_peos armazena o valor da linha em que os peões ficam
	// para cor = 1 (BRANCA), 4.5f - cor*(2.5f) = 2
	// para cor = -1 (PRETA), 4.5f - cor*(2.5f) = 7
	for(int i = 1, linha_peoes = 4.5f - cor*(2.5f); i <= 8; i++){
		
		inserirElementoPeca(&time, criarElementoPeao(cor, i, linha_peoes, 1)); // Aqui inserimos os peões
	}
	
	
	// Aqui insere-se as torres
	inserirElementoPeca(&time, criarElementoTorre(cor, 1, linha_pecas, 1));
	inserirElementoPeca(&time, criarElementoTorre(cor, 8, linha_pecas, 1));
	
	
	// Aqui insere-se os cavalos
	inserirElementoPeca(&time, criarElementoCavalo(cor, 2, linha_pecas));
	inserirElementoPeca(&time, criarElementoCavalo(cor, 7, linha_pecas));
	
	
	
	// Aqui insere-se os bispos
	inserirElementoPeca(&time, criarElementoBispo(cor, 3, linha_pecas));
	inserirElementoPeca(&time, criarElementoBispo(cor, 6, linha_pecas));
	
	
	
	// Aqui insere-se a dama
	inserirElementoPeca(&time, criarElementoDama(cor, 4, linha_pecas));
	
	
	
	// Aqui insere-se o rei
	inserirElementoPeca(&time, criarElementoRei(cor, 5, linha_pecas, 1));
	
	return time;
}
