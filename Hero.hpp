#include<SDL.h>
#include "drawing.hpp"
#include "Unit.hpp"
#pragma once
class Hero: public Unit{

    // SDL_Rect srcRect, moverRect;
    // int frame = 0;

public:
    // add the fly function here as well.
    void draw();
    void move(SDL_Keycode key);
    // void move();

    Hero(); 
    Hero(int x, int y);
    // may add other overloaded constructors here... 
};


