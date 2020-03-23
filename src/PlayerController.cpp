#include "PlayerController.h"
#include <windows.h>




PlayerController::PlayerController()
{
    //ctor
}

PlayerController::~PlayerController()
{
    //dtor
}


void PlayerController::checkEvent(){

    int X = 0;
    int Y=0;
    int SPEED=0;


if(GetAsyncKeyState(VK_LEFT)){
            X-=SPEED;
        } else
        if(GetAsyncKeyState(VK_RIGHT)){
            X+=SPEED;
        } else
        if(GetAsyncKeyState(VK_UP)){
            Y-=SPEED;
        } else
        if(GetAsyncKeyState(VK_DOWN)){
            Y+=SPEED;
        }
         else    if(GetAsyncKeyState(VK_ESCAPE)){
            exit(1);
        }


        /*
        if(X > getwindowwidth()){
            X = 0;
        }else
        if(X < 0){
            X =  getwindowwidth();
        }else



        if(Y > getwindowheight()){
            Y = 0;
        }else

        if(Y < 0 ){
            Y =  getwindowheight();
        }

        */

}




