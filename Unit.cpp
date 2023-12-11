#include <SDL.h>
#include "Unit.hpp"



void Unit::draw(){}
    //SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
    // SDL_RenderCopy(Drawing::gRenderer, Drawing::assets2, &srcRect, &moverRect);

// }
// SDL_Rect Unit::getnew_moverect() const {
//     return moverRect;
// }
SDL_Rect Unit::getnew_moverect() const {
    //cout<<"called get"<<endl;
    return moverRect;
}
void Unit::move(SDL_Keycode key){}
void Unit::move() {}
// void Unit::moveobject() {}



