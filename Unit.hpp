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
virtual SDL_Rect getnew_moverect() const;
void virtual move(SDL_Keycode key);
void virtual move();
// void virtual moveobject();

};