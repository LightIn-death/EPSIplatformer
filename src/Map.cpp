#include "Map.h"
#include "Vector2.h"
#include <SDL2/SDL.h>



Map::Map(SDL_Renderer* render)
{

this->renderer = render;
}

Map::~Map()
{
    //dtor
}

void Map::afficher()
{
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
SDL_Rect rectangle = {this->position->x,this->position->y,this->taille->x,this->taille->y};
SDL_RenderFillRect(renderer, &rectangle);
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
