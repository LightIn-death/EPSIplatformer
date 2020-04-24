#include "PlayerController.h"
#include <windows.h>
#include "Vector2.h"
#include "Player.h"
#include <vector>
#include "Vector2.h"
#include "Map.h"
using namespace std;




PlayerController::PlayerController()
{
}

PlayerController::~PlayerController()
{
}


void PlayerController::checkEvent(Player* Joueur,double deltaT,vector<Map*> carte )
{
    SDL_Event event;
    SDL_PollEvent(&event);


    Vector2* velo = new Vector2();
    RayCast2D legs=  RayCast2D((Joueur->get_position()),Vector2(0,2).normalize(),30);
    RayCast2D head_bonker=  RayCast2D((Joueur->get_position()),Vector2(0,-2).normalize(),30);
    RayCast2D wall_left=  RayCast2D((Joueur->get_position()),Vector2(-2,0).normalize(),25);
    RayCast2D wall_right=  RayCast2D((Joueur->get_position()),Vector2(2,0).normalize(),25);

    velo->x = 0;
    velo->y = 0;
    int SPEED=3;



    if(!wall_left.check_for_collision(carte) )
    {
        //if ( event.key.keysym.sym == SDLK_LEFT )
       if(GetAsyncKeyState(VK_LEFT))
        {
            velo->x-=SPEED;
        }
    }else
    {
        velo->x=1;
    }


    if(!wall_right.check_for_collision(carte) )
    {
        //if ( event.key.keysym.sym == SDLK_RIGHT )
        if(GetAsyncKeyState(VK_RIGHT))
        {
            velo->x+=SPEED;
        }
    }else
    {
        velo->x=-1;
    }



    if(!legs.check_for_collision(carte) )
    {
        Joueur->gravity();
       // if ( event.key.keysym.sym == SDLK_DOWN )
        if(GetAsyncKeyState(VK_DOWN))
        {
            velo->y+=SPEED;
        }
    }

    else
        {
            this->is_jumping = false;
            velo->y = -1;
        }


        //if ( event.key.keysym.sym == SDLK_UP && !this->is_jumping)
        if(GetAsyncKeyState(VK_UP) && !this->is_jumping)
        {
            this->is_jumping = true;
            velo->y-=SPEED ;

        }



    if(head_bonker.check_for_collision(carte) )
    { velo->y = 1;}//cout << "HEAD BONK"<<endl;}









//if ( event.key.keysym.sym == SDLK_ESCAPE )
if(GetAsyncKeyState(VK_ESCAPE) || event.window.event == SDL_WINDOWEVENT_CLOSE)
    {
        exit(1);
    }


    if (velo->x !=0 | velo->y !=0)
    {
        Joueur->set_Velocity(velo,deltaT);

    }



}




