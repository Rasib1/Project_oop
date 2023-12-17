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
    for (auto& point: hobject ){
            point->move();
        }
}

// void Runner::move()
// {
//     Unit* point;
//     for (auto& point: hobject ){
//             point->move();
//         }
// }
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

void Runner::drawHo()
{
        Unit* point;
    for (auto& point: hobject){
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

void Runner::CreateHo(int x , int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    // Unit* object = new Enemy(x, y);
    Unit* obj = ho.getHo(x,y);
    hobject.push_back(obj);
    
    // return enemy;
}

// bool Runner::CollisionC(  SDL_Rect moverRect_A,   SDL_Rect moverRect_B)
// {

//     // cout << "First mover rect " << &moverRect_A << endl;
//     // cout << "Second mover rect " << &moverRect_B << endl;
    
//     // SDL_bool collision = SDL_HasIntersection(&moverRect_A, &moverRect_B);
//     // cout << collision << endl;
//     // if (collision)
//     // {
//     //     cout << "Collision detected!" << endl;
//     //     cout << &moverRect_A << endl;
//     //     cout << &moverRect_B << endl;

        
//     //     return true;
//     // }
//     // else
//     // {
//     //     return false;
//     // }

//         cout << "x coord of A " << moverRect_A.x << endl;
//         cout << "y coord of A " << moverRect_A.y << endl;

//         cout << "x coord of B " << moverRect_B.x << endl;
//         cout << "y coord of B " << moverRect_B.y << endl;

//         cout << "w coord of A " << moverRect_A.w << endl;
//         cout << "h coord of A " << moverRect_A.h << endl;

//         cout << "w coord of B " << moverRect_B.w << endl;
//         cout << "h coord of B " << moverRect_B.h << endl;

        // cout << "x coord of B + w coord of B " << moverRect_B.x + moverRect_B.w << endl;

        // cout << "x coord of A + w coord of A " << moverRect_A.x + moverRect_A.w << endl;
        // cout << "x coord of B " << moverRect_B.x << endl;


        // cout << "w coord of A " << moverRect_A.w << endl;
        // cout << "w coord of B " << moverRect_B.w << endl;

        // cout << "y coord of A " << moverRect_A.y << endl;
        // cout << "y coord of B " << moverRect_B.y << endl;

        // cout << "h coord of A " << moverRect_A.h << endl;
        // cout << "h coord of B " << moverRect_B.h << endl;

//         if ( //if all these conditions below are met then only true will be returned
//         moverRect_A.x < moverRect_B.x  &&
//         moverRect_A.x + moverRect_A.w  > moverRect_B.x &&
//         moverRect_A.y < moverRect_B.y  &&
//         moverRect_A.y + moverRect_A.h > moverRect_B.y

//         )
//     {
//         cout << "Collided" << endl;
//         return true;
//     }
//     return false;

// }

bool Runner::DetectCollision()
{
    SDL_Rect x = h1.getnew_moverect();
    Enemy* point;
    Hobject* point2;

    for (auto& point: enemy)
    {
        //cout<<"called coldetech"<< endl;
        SDL_Rect enemy_rect = point->getnew_moverect();
        SDL_Rect hero_rect = objects[0]->getnew_moverect();
        cout<<"enemy: ("<<enemy_rect.x<<','<<enemy_rect.y<<')'<<endl;
        cout<<"hero: ("<<hero_rect.x<<','<<hero_rect.y<<')'<<endl;
        int tolerance = 50; // adjust to set colision tolerance/AREA
        if( (enemy_rect.y-hero_rect.y<tolerance && enemy_rect.y-hero_rect.y>-tolerance) && (enemy_rect.x-hero_rect.x<tolerance && enemy_rect.x-hero_rect.x>-tolerance))
        {
            return true;
        }
        //if (point->getnew_moverect())
        //{
        //    cout<<"ok"<<endl;
        //}
    }
        for (auto& point2: hobject)
    {
        //cout<<"called coldetech"<< endl;
        SDL_Rect object_rect = point2->getnew_moverect();
        SDL_Rect hero_rect = objects[0]->getnew_moverect();
        cout<<"object: ("<<object_rect.x<<','<<object_rect.y<<')'<<endl;
        cout<<"hero: ("<<hero_rect.x<<','<<hero_rect.y<<')'<<endl;
        int tolerance = 46; // adjust to set colision tolerance/AREA
        if( (object_rect.y-hero_rect.y<tolerance && object_rect.y-hero_rect.y>-tolerance) && (object_rect.x-hero_rect.x<tolerance && object_rect.x-hero_rect.x>-tolerance))
        {
            return true;
        }

    }



}

Runner::~Runner(){
    for (auto& b : objects){
        delete b;
    }
    objects.clear();
}