#include "ObjectCreator.hpp"


Unit* ObjectCreator::getObject(int x, int y){
    int random = rand()%3;
    Unit* p =  nullptr;
    switch(random){
        case 0:
        p = new Hero(x,y);
        break;

        case 1:
        p = new Hero(x,y);

        break;

        case 2:
        p = new Hero(x,y);
        break;
    }
    return p;
    
  
}