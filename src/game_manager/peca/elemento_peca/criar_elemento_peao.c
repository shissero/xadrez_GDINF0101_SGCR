struct ElementoPeca *criarElementoPeao(int cor, int coluna, int linha, int primMov){

	struct ElementoPeca *novo = (ElementoPeca*)malloc(sizeof(ElementoPeca));
	
	novo.peca = criarPeao(cor, coluna, linha, primMov);
	novo.ant = NULL;
	novo.prox = NULL;
	
	return novo;
}
