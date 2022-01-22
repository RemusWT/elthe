#include "elthe.h"

int main(void) {
    if (SDL_Init(SDL_INIT_VIDEO) != 0) {
	printf("SDL_Init failed.\n");
	return RETURN_ERROR;
    }
    SDL_Window *window = SDL_CreateWindow("Editor", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1280, 720, SDL_WINDOW_OPENGL);
    if (window == NULL) { printf("SDL_CreateWindow failed.\n"); return RETURN_ERROR;}

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (renderer == NULL) { printf("SDL_CreateRenderer failed.\n"); return RETURN_ERROR;}



    SDL_Event event;
    bool running = true;
    while (running) { // Editor's loop.
	while (SDL_PollEvent(&event)) {
	    switch(event.type) {
	    case SDL_QUIT:
		printf("Quiting.\n");
		running = false;
		break;
		
	    }
	}
	
    }
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
