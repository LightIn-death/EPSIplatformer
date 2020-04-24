#include "Player.h"
#include <graphics.h>
#include "Vector2.h"
#include "RayCast2D.h"
#include <vector>
#include "Vector2.h"
#include "Map.h"
#include <iostream>
using namespace std;

Player::Player(Fenetre* canvas)
{

this->canvas = canvas;
this->renderer = canvas->renderer;
    this->position = new Vector2() ;
    this->velocity= new Vector2() ;
    this->position->x = 400;
    this->position->y = 400;
}

Player::~Player()
{
    //dtor
}


Vector2 Player::get_position(){return *(this->position);}

void Player::set_Velocity(Vector2* velo,double deltaT)
{
    velo;

    velo->x *= this->SPEED * deltaT;
    velo->y *= this->SPEED * deltaT;


    this->velocity = velo ;
}

void Player::gravity()
{
this->velocity->y += this->GRAVITY;

}




Vector2* Player::_move()
{

   this->position->x += this->velocity->x ;
   this->position->y += this->velocity->y ;
    return this->position;
}

void Player::_reverse( Vector2* fenetre_size)
{
    int x = this->position->x;
    int y = this->position->y;
    if(x>fenetre_size->x)
    {
        this->position->x=0;
    }
    if(y>fenetre_size->y)
    {
        this->position->y=fenetre_size->y - 50;
    }
    if(x<0)
    {
        this->position->x=fenetre_size->x;
    }
    if(y<0)
    {
        this->position->y=fenetre_size->y;
    }


}


void Player::_show()
{
 SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

    this->canvas->DrawCircle(renderer,this->position->x,this->position->y,20);
     SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);

}
