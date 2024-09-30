#include<SDL2/SDL.h>
#include<iostream>

#include"iniciar_ui.h"

void iniciarUI(){

	SDL_Window* win;
	
	SDL_Surface* winSurface;

	if(SDL_Init( SDL_INIT_EVERYTHING ) == -1){
	
		std::cout << "Failure on SDL_init" << std::endl;
	}
	else{
	
		std::cout << "SDL_init was succesfull" << std::endl; // TODO: Essa linha deve ser removida após o desenvolvimento do projeto
		
		win = SDL_CreateWindow( "xadrez",  SDL_WINDOWPOS_CENTERED,  SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN );
		
		if(win == NULL){
		
			std::cout << "Falha ao criar janela" << std::endl;
			std::cout << "Erro: " << SDL_GetError() << std::endl;
		}
		else{
		
			winSurface = SDL_GetWindowSurface( win );
			
			SDL_FillRect( winSurface, NULL, SDL_MapRGB( winSurface->format, 255, 255, 255 ) );
			
			SDL_UpdateWindowSurface( win );
		}
	}
}
