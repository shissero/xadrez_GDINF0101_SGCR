#ifndef INTERFACE_H
#define INTERFACE_H

#include<GL/glut.h>

#include"volume_de_projecao.h"
#include"display.h"
#include"funcao_mouse.h"

enum ConstantesCores {

	CASA_CLARA,
	CASA_ESCURA,
	COR_DESLOCAMENTO,
	COR_CAPTURA
};

extern float CORES[][4];




enum ConstantesSprites {
    PEAO_PRETA,
    TORRE_PRETA,
    CAVALO_PRETA,
    BISPO_PRETA,
    DAMA_PRETA,
    REI_PRETA,
    
    PEAO_BRANCA,
    TORRE_BRANCA,
    CAVALO_BRANCA,
    BISPO_BRANCA,
    DAMA_BRANCA,
    REI_BRANCA
};



extern GLubyte SPRITES[16][1025];



void desenharCasas(float);

void desenharPixel(float, GLubyte*);

void desenharQuadrado(float, float, float);

void desenharSprite(int, float);

void iniciarUI(int *, char**);

void inicializar();

void prepararDesenho();

#endif
