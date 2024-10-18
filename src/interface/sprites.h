#ifndef	SPRITE_H_
#define SPRITE_H_

#include<GL/glut.h>

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

#endif
