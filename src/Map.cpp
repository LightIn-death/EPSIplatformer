#include "Map.h"
#include "Vector2.h"
#include <graphics.h>



Map::Map()
{
    //ctor
}

Map::~Map()
{
    //dtor
}

void Map::afficher()
{
    setcolor(GREEN);
    rectangle(this->position->x,this->position->y,this->position->x+ this->taille->x,this->position->y + this->taille->y);
}


void Map::set_position(Vector2* value)
{
    this->position = value;
}


void Map::set_taille(Vector2* value)
{
    this->taille = value;
}


Vector2* Map::get_position()
{
    return this->position;
}
Vector2* Map::get_taille()
{
    return this->taille;
}
