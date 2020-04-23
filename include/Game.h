#ifndef GAME_H
#define GAME_H
#include <time.h>
#include <cstdio>
#include <iostream>
#include <windows.h>
#include "PlayerController.h"
#include "Player.h"
#include "Fenetre.h"
 #include <vector>
#include "Vector2.h"
#include "Map.h"
using namespace std;


class Game
{

    clock_t last_time;
    PlayerController* controler;
    Player* joueur;
    Fenetre* canvas;
    vector<Map*> carte;








public:
    Game();
    virtual ~Game();

    void update();
    bool isRunning();
    int getTest() ;
    void setTest( int val) ;
    double deltaT();

    void initMap();
    void showMap();




private:
    bool running = true;
    int test;
    Vector2* fenetre_size;


protected:


};

#endif // GAME_H
