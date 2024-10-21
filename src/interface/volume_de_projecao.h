#ifndef VOLUME_DE_PROJECAO_H_
#define VOLUME_DE_PROJECAO_H_

struct VolumeProjecaoOrto {

	float esquerdo;
	float direito;
	float inferior;
	float superior;
	float proximal;
	float distal;
};

extern struct VolumeProjecaoOrto TELA_TABULEIRO;

extern float TAM_CASA;

#endif
