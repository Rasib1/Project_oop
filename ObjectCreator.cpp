#include "ObjectCreator.hpp"


Unit* ObjectCreator::getObject(int x, int y){
    // int random = rand()%3;
    Unit* p =  nullptr;
    // switch(random){
    //     case 0:
        p = new Hero(x,y);

    return p;
 
}

Unit* ObjectCreator::getenemy(int x, int y){
    // int random = rand()%3;
    Unit* q =  nullptr;
    // switch(random){
    //     case 0:
        q = new Enemy(x,y);

    return q;
 
}

Unit* ObjectCreator::getHo(int x, int y){
    // int random = rand()%3;
    Unit* h =  nullptr;
    // switch(random){
    //     case 0:
        h = new Hobject(x,y);

    return h;
 
}
// Hero* ObjectCreator::gethero(int x, int y){
//     // int random = rand()%3;
//     Hero* p =  nullptr;
//     // switch(random){
//         // case 0:
//         p = new Hero(x,y);
// }

// Enemy* ObjectCreator::getenemy(int x, int y){
//     // int random = rand()%3;
//     Enemy* p =  nullptr;
//     // switch(random){
//         // case 0:
//         p = new Enemy(x,y);
// }
        // break;

        // case 1:
        // p = new Hero(x,y);

//         break;

//         case 2:
//         p = new Hero(x,y);
//         break;
//     }
//     return p;
    
  
// }