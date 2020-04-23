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
    this->canvas = new Fenetre();
    this->controler = new PlayerController();
    this->joueur = new Player();
    this->last_time = clock();
    this->fenetre_size = new Vector2();
    this->fenetre_size = this->canvas->get_fenetre_size();
    this->initMap();
}

Game::~Game()
{
}

void Game::update()
{


this->controler->checkEvent(this->joueur,this->deltaT(),this->carte);


this->joueur->_move();


this->joueur->_reverse(this->fenetre_size);


this->joueur->_show();
this->showMap();
this->last_time = clock();
this->canvas->refresh();
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
        tile =new Map();

        Vector2* taille;
        Vector2* position;
        taille =new Vector2();
        position =new Vector2();




        position->x = 100 * i;
        position->y = 1000;



        taille->x = 100;
        taille->y = 100;

        tile->set_taille(taille);
        tile->set_position(position);



        this->carte.push_back(tile);

    }

            Map* tile;
        tile =new Map();

        Vector2* taille;
        Vector2* position;
        taille =new Vector2();
        position =new Vector2();



        position->x = 1000;
        position->y = 600;



        taille->x =  200;
        taille->y =  200;

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























