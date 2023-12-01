#include<SDL.h>
#include "Hero.hpp"
// #include "bee.hpp"
// #include "butterfly.hpp"
#include<vector>
#include<list>
#include "Unit.hpp"
#include "ObjectCreator.hpp"
#pragma once

using namespace std;

class Runner{
    list<Unit*> objects;
    ObjectCreator o;
    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
   

    //Create your list here
    public:

    
    void drawObjects(); 
    void createObject(int, int);
    ~Runner();
    // create destructor which deletes all dynamic objects
};