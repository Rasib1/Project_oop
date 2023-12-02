#include <SDL.h>
#include "Unit.hpp"



void Unit::draw(){
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

void Unit::move(SDL_Keycode key){}
void Unit::move(int x , int y) {}
