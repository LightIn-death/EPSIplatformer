#include "PlayerController.h"
#include <windows.h>
#include "structs.h"
#include "Player.h"





PlayerController::PlayerController()
{
    //ctor
}

PlayerController::~PlayerController()
{
    //dtor
}


void PlayerController::checkEvent(Player* Joueur)
{

    Vector2 velo;

    velo.x = 0;
    velo.y = 0;
    int SPEED=20;


    if(GetAsyncKeyState(VK_LEFT))
    {
        velo.x-=SPEED;
    }
    if(GetAsyncKeyState(VK_RIGHT))
    {
        velo.x+=SPEED;
    }
    if(GetAsyncKeyState(VK_UP))
    {
        velo.y-=SPEED;
    }
    if(GetAsyncKeyState(VK_DOWN))
    {
        velo.y+=SPEED;
    }
    if(GetAsyncKeyState(VK_ESCAPE))
    {
        exit(1);
    }


    if (velo.x !=0 | velo.y !=0)
    {
        Joueur->set_Velocity(velo);
        Joueur->_move();



    }

}




