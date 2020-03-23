#include "Game.h"
#include <time.h>
#include "iostream"
#include "PlayerController.h"
#include "Player.h"
using namespace std;




Game::Game()
{
    //ctor
    this->canvas = new Fenetre();
    this->controler = new PlayerController();
    this->Joueur = new Player();
    this->last_time = clock();
    this->fenetre_size = this->canvas->get_fenetre_size();
    cout << "TEST";
}

Game::~Game()
{
    //dtor
}

void Game::_update()
{
    this->controler->checkEvent(this->Joueur);
    this->Joueur->_show();
    this->Joueur->_reverse(this->fenetre_size);
    this->canvas->refresh();
    cout << float( clock () - this->last_time )  << endl;
    this->last_time = clock();
}


bool Game::isRunning()
{
    return this->running;
}




int Game::Gettest()
{
    return test;
}
void Game::Settest( int val)
{
    this->test = val;
}
