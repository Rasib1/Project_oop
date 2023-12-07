#include <iostream>
#include "Runner.hpp"
#include<typeinfo>
using namespace std;
void Runner::move(SDL_Keycode key)
{
    Unit* pointer;
    for (auto& pointer: objects){
            pointer->move(key);
        }
}
void Runner::move()
{
    Unit* point;
    for (auto& point: enemy ){
            point->move();
        }
}
void Runner::drawObjects()
{
    // call draw functions of all the objects here
    Unit* pointer;
    for (auto& pointer: objects){

            pointer->draw();
            //pointer->fly();
        }

        // for (auto& pointer: objects){

        //     pointer->draw();
        //     //pointer->fly();
        // }
    }

// }
void Runner::drawEnemy()
{
        Unit* point;
    for (auto& point: enemy){
    //     string name = typeid(*pointer).name();

            point->draw();
            //pointer->fly();
        }

}

// creates new objects 
void Runner::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    Unit* object = o.getObject(x,y);
    objects.push_back(object);
}

void Runner::CreateEnemy(int x , int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    // Unit* object = new Enemy(x, y);
    Unit* ene = e.getenemy(x,y);
    enemy.push_back(ene);

}
Runner::~Runner(){
    for (auto& b : objects){
        delete b;
    }
    objects.clear();
}