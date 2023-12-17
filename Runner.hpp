#include<SDL.h>
#include "Hero.hpp"
#include "Enemy.hpp"
#include<vector>
#include<list>
#include "Unit.hpp"
#include "horizontalobject1.hpp"
#include "fireObject.hpp"
#include "plentobject.hpp"
#include "ObjectCreator.hpp"
#pragma once

using namespace std;

class Runner{
    vector<Unit*> objects;
    vector<Unit*> enemy;
    vector<Unit*> hobject;
    vector<Unit*> fobject;
    vector<Unit*> pobject;


    

    ObjectCreator o;
    ObjectCreator ho;
    ObjectCreator e;
    ObjectCreator fo;
    ObjectCreator po;



    Hero h1;
    Enemy e1;
    Hobject hobj;
    Fire fobj;
    Plent pobj;



    // Hero h;
    // Enemy e;
    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
   

    //Create your list here
    public:

    
    void drawObjects(); 
    void createObject(int, int);
    void drawEnemy();
    void CreateEnemy(int, int);

    void drawHo();
    void CreateHo(int, int);

    void drawfire();
    void Createfire(int, int);

    void drawplent();
    void Createplent(int, int);
    // bool CollisionC(  SDL_Rect moverRect_A,   SDL_Rect moverRect_B);

    bool DetectCollision();
    void move( SDL_Keycode key);
    void move();
    // void moveobject();

    ~Runner();
    // create destructor which deletes all dynamic objects
};