#include "Hero.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Hero::draw(){
//     // if sr
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


// fly() is overrided from the superclass
void Hero::fly(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 8 ){
    srcRect = {9,7,362,407};
}
else if (srcRect.x == 9){
    srcRect = {381,7,736,411};
}
else if (srcRect.x==381){
    srcRect = {8,432,279,862};
}

if (moverRect.x<=1000){
    moverRect.x+=10;
}
else{
    moverRect.x = 0;
}


}

Hero::Hero(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {8,432,279,862};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Hero::Hero(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {8,432,279,862};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}
