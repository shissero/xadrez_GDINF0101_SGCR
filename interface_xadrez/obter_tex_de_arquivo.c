#include<stdio.h>
#include<GL/glut.h>
#include"obter_tex_de_arquivo.h"

void obterTexDeArquivo(const char *nome, GLubyte *buffer, int byte_count){

	FILE *arquivo = fopen(nome, "rb");
	
	if(arquivo == NULL){
	
		printf("Falha ao tentar abrir o arquivo %s\n", nome);
		return;
	}
	
	
	fread(buffer, 1, byte_count, arquivo);
}
