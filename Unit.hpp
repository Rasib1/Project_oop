#include<SDL.h>
#include "drawing.hpp"
#include <iostream>
#include <vector>

#pragma once

using namespace std;




class Unit{
    protected:
        SDL_Rect srcRect, moverRect;
        int frame = 0;
        // vector<SDL_Rect> srcRectVector;
public:
void virtual draw();
void virtual move(SDL_Keycode key);
void virtual move();
};