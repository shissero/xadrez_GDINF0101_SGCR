#ifndef DESENHAR_SPRITE_H
#define DESENHAR_SPRITE_H

#define SPRITE_BYTES 1024 // este valor corresponde ao tamanho das spites em bytes: cada uma tem 16 linhas e 16 colunas de pixels. 16 * 16 = 256.
			  // Cada pixel tem 4 bytes: 256 * 4 = 1024

#define PIXEL_SIZE 2.0

#define PEAO 0

void desenharSprite(int, float, float);

#endif
