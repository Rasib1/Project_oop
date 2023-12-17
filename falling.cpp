#include "falling.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
void Falling::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets6, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Falling::move(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 136 ){
    // srcRect = {92,40,242,297};
    srcRect = {12,33,91,108};

}
// else if (srcRect.x == 284){
//     // srcRect = {437,36,594,295};
//     srcRect = {160 ,60 ,230 ,123};

// }
else if (srcRect.x == 263){
    // srcRect = {437,36,594,295};
    srcRect = {136 ,28 ,222 ,110};

}
else if (srcRect.x == 12){
    // srcRect = {437,36,594,295};
    srcRect = {263 ,23 ,357 ,111};

}
 if (moverRect.y<= 600){ //&&  moverRect.y<=400 ){
            moverRect.y-=10;
        }
// else{
//     moverRect.x = 0;
// }


}
SDL_Rect Falling::getnew_moverect()
{
    return moverRect;
}

Falling::Falling(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {300 ,60 ,341 ,123};
    // srcRect = {284 ,57 ,356 ,127};
    srcRect = {263 ,23 ,357 ,111};



    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Falling::Falling(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    // srcRect = {300 ,60 ,341 ,123};
    // srcRect = {284 ,57 ,356 ,127};
    srcRect = {263 ,23 ,357 ,111};



    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

