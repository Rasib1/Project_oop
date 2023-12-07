#include "enemy.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }
void Enemy::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets2, &srcRect, &moverRect);
}

// fly() is overrided from the superclass
void Enemy::move(){
    // 
    // moverRect.x += 5;
if (srcRect.x == 437 ){
    srcRect = {92,40,242,297};
}
else if (srcRect.x == 92){
    srcRect = {437,36,594,295};
}

 if (moverRect.x<=1000){
            moverRect.x-=10;
        }
// else{
//     moverRect.x = 0;
// }


}

Enemy::Enemy(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {92,40,242,297};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

Enemy::Enemy(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {92,40,242,297};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

