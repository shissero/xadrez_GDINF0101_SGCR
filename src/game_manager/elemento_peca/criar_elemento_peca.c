struct ElementoPeca *criarElementoPeca(){

	struct ElementoPeca *novo = (ElementoPeca*)malloc(sizeof(ElementoPeca));
	
	novo.peca = NULL;
	novo.ant = NULL;
	novo.prox = NULL;
	
	return novo;
}
