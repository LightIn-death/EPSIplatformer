#include "Player.h"
#include <graphics.h>
#include "structs.h"


Player::Player()
{
    //ctor
    this->position.x = 200;
    this->position.y = 200;
}

Player::~Player()
{
    //dtor
}



void Player::set_Velocity(Vector2 velo)
{
    this->velocity = velo;
}


Vector2 Player::_move()
{
    this->position.x += this->velocity.x;
    this->position.y += this->velocity.y;
    return this->position;
}

 void Player::_reverse( Vector2 fenetre_size){
int x = this->position.x;
int y = this->position.y;
if(x>fenetre_size.x){this->position.x=0;}
if(y>fenetre_size.y){this->position.y=0;}
if(x<0){this->position.x=fenetre_size.x;}
if(y<0){this->position.y=fenetre_size.y;}


 }


void Player::_show()
{
    circle(this->position.x,this->position.y,20);

}
