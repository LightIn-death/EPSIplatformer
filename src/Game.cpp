#include "Game.h"
#include "iostream"
#include "PlayerController.h"
using namespace std;




Game::Game()
{
    //ctor
    this->controler = new PlayerController();
    cout << "TEST";
}

Game::~Game()
{
    //dtor
}

void Game::_update()
{
    this->controler->checkEvent();
}


bool Game::isRunning(){
    return this->running;
}




         int Game::Gettest() { return test; }
        void Game::Settest( int val) { this->test = val; }
