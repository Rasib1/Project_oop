#include "plentobject.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
void Plent::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets5, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Plent::move(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 540 ){
    srcRect = {59,89,129,158};
}
else if (srcRect.x == 378){
    srcRect = {217,90,286,157};
}
else if (srcRect.x == 217){
    srcRect = {378,89,450,157};
}
else if (srcRect.x == 59){
    srcRect = {540,88,607,158};
}
 if (moverRect.x>=0){
            moverRect.x+=10;
        }
// else{
//     moverRect.x = 0;
// }


}

SDL_Rect Plent::getnew_moverect()
{
    return moverRect;

}

Plent::Plent(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    // srcRect = {33,31,62,63};
    srcRect = {540,88,607,158};



    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Plent::Plent(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    // srcRect = {33,31,62,63};
    srcRect = {540,88,607,158};



    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

