#include "Game.h"
#include <time.h>
#include "iostream"
#include "PlayerController.h"
#include "Player.h"
#include "Map.h"
#include <graphics.h>
using namespace std;




Game::Game()
{
    //ctor
    this->canvas = new Fenetre(1920,1000);
    this->controler = new PlayerController();
    this->joueur = new Player(this->canvas);
    this->initMap();
    this->last_time = clock();
    this->fenetre_size = this->canvas->get_fenetre_size();

}

Game::~Game()
{
}

void Game::update()
{
this->controler->checkEvent(this->joueur,this->deltaT(),this->carte);
this->joueur->_move();
this->joueur->_reverse(this->fenetre_size);
this->canvas->clean();
this->joueur->_show();
this->showMap();
this->canvas->render();
this->last_time = clock();

}


bool Game::isRunning()
{
    return this->running;
}


double Game::deltaT()
{
    return ((double)clock()-(double)last_time)/100;
}



int Game::getTest()
{
    return test;
}
void Game::setTest( int val)
{
    this->test = val;
}


void Game::initMap()
{

    int i = 0;
    for(i=0; i<20; i++)
    {

        Map* tile;
        tile =new Map(this->canvas->renderer);
        Vector2* taille;
        Vector2* position;
        taille =new Vector2(100,100);
        position =new Vector2(100 * i,1000);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);

    }

        Map* tile;
        tile =new Map(this->canvas->renderer);
        Vector2* taille;
        Vector2* position;
        taille =new Vector2(200,200);
        position =new Vector2(1000,600);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);




        tile =new Map(this->canvas->renderer);
        taille =new Vector2(300,30);
        position =new Vector2(200,800);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);


        tile =new Map(this->canvas->renderer);
        taille =new Vector2(300,30);
        position =new Vector2(200,800);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);


        tile =new Map(this->canvas->renderer);
        taille =new Vector2(300,30);
        position =new Vector2(1200,600);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);


        tile =new Map(this->canvas->renderer);
        taille =new Vector2(20,400);
        position =new Vector2(50,200);
        tile->set_taille(taille);
        tile->set_position(position);
        this->carte.push_back(tile);


}









void Game::showMap()
{
    for (int i = 0; i < this->carte.size(); i++)
    {
        Map* tile;
        tile = this->carte[i];
        tile->afficher();
    }
}























