#include<SDL.h>
#include "Hero.hpp"
#include "Enemy.hpp"
#include<vector>
#include<list>
#include "Unit.hpp"
#include "ObjectCreator.hpp"
#pragma once

using namespace std;

class Runner{
    list<Unit*> objects;
    list<Unit*> enemy;
    

    ObjectCreator o;
    ObjectCreator e;

    // Hero h;
    // Enemy e;
    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
   

    //Create your list here
    public:

    
    void drawObjects(); 
    void createObject(int, int);
    // void drawEnemy();
    void drawEnemy();
    void CreateEnemy(int, int);
    
    void move( SDL_Keycode key);
    void move();

    ~Runner();
    // create destructor which deletes all dynamic objects
};