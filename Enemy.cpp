#include "enemy.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
// void Pigeon::draw(){
//     SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
// }


// fly() is overrided from the superclass
void Enemy::move(int x , int y){
    // 
    // moverRect.x += 5;
if (srcRect.x == 743 ){
    srcRect = {747,47,890,300};
}
else if (srcRect.x == 747){
    srcRect = {743,400,887,663};
}

if (moverRect.x<-1000){
    moverRect.x-=10;
}
else{
    moverRect.x = 0;
}


}

// Enemy::Enemy(){
//     // src coorinates from assets.png file, they have been found using spritecow.com
//     srcRect = {743,400,887,663};

//     // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
//     moverRect = {30, 40, 50, 50};
// }

Enemy::Enemy(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {7,88,160,103};

    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}

