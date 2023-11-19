#include<iostream>
#include "Runner.hpp"
#include <vector>
using namespace std;

Unit character = {{1,0,348,401}, {30, 40, 50, 50}};
// First rectangle is srcRect, second is moverRect
// these values are taken from the corresponding image in assets file
// use spritecow.com to find exact values of other asset images



vector<Unit> characters;


void drawObjects(SDL_Renderer* gRenderer, SDL_Texture* Hmove1){
    SDL_RenderCopy(gRenderer, Hmove1, &character.srcRect, &character.moverRect);


    // TODO: Write code to iterate over all the vectors and draw objects here: 
    
    
    character.moverRect.x+=2; // moves the object two pixel towards right
    // changing the srcRect to other positions of pigeon will make the running animation
    // SDL_RenderPresent is already called in game.cpp file, you don't need to call here
}

void createObject(int x, int y){

    // TODO: create an object randomly, and push it into corresponding vector
    std::cout<<"Mouse clicked at: "<<x<<" -- "<<y<<std::endl;
}
