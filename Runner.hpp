#include<SDL.h>


void drawObjects(SDL_Renderer* gRnderer,SDL_Texture* Hmove1);
void createObject(int x, int y);

struct Unit{
SDL_Rect srcRect, moverRect;
};