#include "fireObject.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
void Fire::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets4, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Fire::move(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 243 ){
    srcRect = {144,22,164,72};
}
else if (srcRect.x == 33){
    srcRect = {243,22,262,80};
}
else if (srcRect.x == 144){
    srcRect = {33,31,62,63};
}

 if (moverRect.x>=0){
            moverRect.x+=10;
        }
// else{
//     moverRect.x = 0;
// }


}

SDL_Rect Fire::getnew_moverect()
{
    return moverRect;

}

Fire::Fire(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    srcRect = {33,31,62,63};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Fire::Fire(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {85,550,300,705};
    srcRect = {33,31,62,63};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

