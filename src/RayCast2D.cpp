#include "RayCast2D.h"
#include "Vector2.h"
#include <iostream>
#include "Map.h"
using namespace std;


RayCast2D::RayCast2D(Vector2 startpos,Vector2 endpos)
{
    Vector2 fleche = Vector2(endpos.x - startpos.x,endpos.y - startpos.y);
    this->taille =fleche.lenght();
    this->direction = fleche.normalize();
    this->start_point = startpos;
    this->end_point= endpos;
}



RayCast2D::RayCast2D(Vector2 startpos,Vector2 direction,double taille)
{
    this->taille =taille;
    this->direction = direction;
    this->start_point = startpos;
    this->end_point= Vector2((startpos.x + (direction.x * taille)),(startpos.y + (direction.y * taille)));
}

RayCast2D::~RayCast2D()
{
    //dtor
}


bool RayCast2D::check_for_collision(vector<Map*> carte,double step)
{
    //cout << "Checking..." << endl;
    double i;
    for(i=0; i<this->taille; i+=step)
    {

        Vector2 state_position = Vector2((this->start_point.x + (this->direction.x * i)),(this->start_point.y + (this->direction.y * i)));
        int j;
        for(j=0; j<carte.size(); j++)
        {

            Map tile = *(carte[j]);
            //cout << "state : "<< state_position.x << "|"<< state_position.y << "  VS tile : " << tile.get_position()->x << "|" << tile.get_position()->y << "size = " << tile.get_taille()->x << "~" <<tile.get_taille()->y << endl;
            if(state_position.point_is_inside(*(tile.get_position()),*(tile.get_taille())))
            {
                this->CollisionPoint = state_position;
               // cout << "Collision en > "<< state_position.x << " : " << state_position.y << endl;
                return true;
            }
        }
    }
    return false;
}






Vector2 RayCast2D::get_collision_point()
{
    return this->CollisionPoint;
}































