#include "Hero.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
void Hero::draw(){
    // if sr
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}
// Unit* Hero::getObject(int x, int y){
//     // int random = rand()%3;
//     Unit* p =  nullptr;
//     // switch(random){
//     //     case 0:
//         p = new Hero(x,y);
//         // break;

//         // case 1:
//         // p = new Hero(x,y);

//         // break;

//         // case 2:
//         // p = new Hero(x,y);
//         // break;
//     // }
//     return p;
    
  
// }

// fly() is overrided from the superclass
void Hero::move(SDL_Keycode key){
    // 
    cout<<"here"<<endl;
    // moverRect.x += 5;
    if (key == SDLK_UP){
        if (srcRect.x == 8 ){
        srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        }
        else if (srcRect.x == 9){
            srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        }
        else if (srcRect.x==381){
            srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        }
        if (moverRect.y>=0){
            moverRect.y-=10;
        }
        else{
            srcRect = {8,432,279,862};

            moverRect.x = 0;
        }
    }
    else if (key == SDLK_DOWN) {
        // if (srcRect.x == 276 ){
        // srcRect = {9,7,362,407};
        // // srcRect = {1,4,252,435};

        // }
        // else if (srcRect.x == 1){
        //     srcRect = {381,7,736,411};
        // // srcRect = {282,6,645,401};

        // }
        // else if (srcRect.x==282){
        //     srcRect = {8,432,279,862};
        // // srcRect = {276,412,642,818};

        // }
        // if (moverRect.y>=0){
        //     moverRect.y+=10;
        // }
        if (srcRect.x == 8 ){
        srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        }
        else if (srcRect.x == 9){
            srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        }
        else if (srcRect.x==381){
            srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        }
        if (moverRect.y<=520){
            moverRect.y+=10;
        }
        else{
            srcRect = {8,432,279,862};

            moverRect.x = 0;
        }
    }

    else if (key == SDLK_RIGHT) {
        // if (srcRect.x == 276 ){
        // // srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        // }
        // else if (srcRect.x == 1){
        //     // srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        // }
        // else if (srcRect.x==282){
        //     // srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        // }
        // if (moverRect.x>=0){
        //     moverRect.x+=10;
        // }

        if (srcRect.x == 8 ){
        srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        }
        else if (srcRect.x == 9){
            srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        }
        else if (srcRect.x==381){
            srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        }
        if (moverRect.x<=1000){
            moverRect.x+=10;
        }
        else{
            srcRect = {8,432,279,862};

            moverRect.x = 0;
        }


    }
    else if (key == SDLK_LEFT) {
        // if (srcRect.x == 276 ){
        // // srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        // }
        // else if (srcRect.x == 1){
        //     // srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        // }
        // else if (srcRect.x==282){
        //     // srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        // }
        if (srcRect.x == 8 ){
        srcRect = {9,7,362,407};
        // srcRect = {1,4,252,435};

        }
        else if (srcRect.x == 9){
            srcRect = {381,7,736,411};
        // srcRect = {282,6,645,401};

        }
        else if (srcRect.x==381){
            srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};

        }
        if (moverRect.x>=0){
            moverRect.x-=10;
        }
        else{
            srcRect = {8,432,279,862};

            moverRect.x = 0;
        }
    }



}

Hero::Hero(){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {8,432,279,862};
        // srcRect = {276,412,642,818};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {30, 40, 50, 50};
}

// void Hero::move()
// {
//     cout<<"noth"<<endl;
// }
Hero::Hero(int x , int y){
    // src coorinates from assets.png file, they have been found using spritecow.com
    srcRect = {8,432,279,862};


    // it will display pigeon on x = 30, y = 40 location, the size of pigeon is 50 width, 60 height
    moverRect = {x, y, 50, 50};
}