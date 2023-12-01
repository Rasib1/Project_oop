#include<SDL.h>
#include "drawing.hpp"
#include <iostream>

#pragma once

using namespace std;




class Unit{
    protected:
        SDL_Rect srcRect, moverRect;
        int frame = 0;
public:
void draw();
void virtual fly();
};