#include <iostream>
#include "Runner.hpp"
#include<typeinfo>
using namespace std;
void Runner::drawObjects()
{
    // call draw functions of all the objects here
    Unit* pointer;
    for (auto& pointer: objects){
    //     string name = typeid(*pointer).name();
    //     // cout<<name<<endl;
    //     if (name == "3Bee"){
    //         if ((((Bee*)(pointer))->deletebee()) == false){
    //             pointer->draw();
    //             pointer->fly();
    //         }
    //         else{
    //             objects.remove(pointer);
    //             delete pointer;
    //         }
    //     }
        // else{
            pointer->draw();
            pointer->fly();
        }
    }

// }


// creates new objects 
void Runner::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    Unit* object = o.getObject(x,y);
    objects.push_back(object);
}


Runner::~Runner(){
    for (auto& b : objects){
        delete b;
    }
    objects.clear();
}