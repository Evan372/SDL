//The headers
#include "SDL/SDL.h"
#include <string>

//The attributes of the screen
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;
const int SCREEN_BPP = 32;

//The surfaces that will be used
SDL_Surface *message = NULL;
SDL_Surface *background = NULL;
SDL_Surface *screen = NULL;

SDL_Surface *load_image( std::string filename )
{
	//Temporart storage for the image thats loaded
	SDL_Surface* loadedImage = NULL;

	//The Optimized image that will be used
	SDL_Surface* optimizedImage = NULL;




