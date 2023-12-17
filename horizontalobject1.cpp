#include "horizontalobject1.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
void Hobject::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets3, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Hobject::move(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 267 ){
    srcRect = {48,83,116,121};
}
else if (srcRect.x == 460){
    srcRect = {267,80,308,122};
}
else if (srcRect.x == 48){
    srcRect = {460,69,500,121};
}

 if (moverRect.x<=1000){
            moverRect.x-=10;
        }
// else{
//     moverRect.x = 0;
// }


}

SDL_Rect Hobject::getnew_moverect()
{
    return moverRect;

}

Hobject::Hobject(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    srcRect = {460,69,500,121};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Hobject::Hobject(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    srcRect = {460,69,500,121};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

