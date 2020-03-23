#ifndef GAME_H
#define GAME_H
#include <time.h>
#include "PlayerController.h"
#include "Player.h"
#include "Fenetre.h"
using namespace std;


class Game
{

    clock_t last_time;
    PlayerController* controler;
    Player* Joueur;
    Fenetre* canvas;


public:

    Game();
    virtual ~Game();
    void _update();
    bool isRunning();
    int Gettest() ;
    void Settest( int val) ;



private:
    bool running = true;
    int test;
    Vector2 fenetre_size;


protected:


};

#endif // GAME_H
