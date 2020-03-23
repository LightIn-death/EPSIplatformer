using namespace std;
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <cmath>
#include "Game.h"




int main()
{

    Game* game;
    game = new Game();


    while (game->isRunning() ){game->_update();}


    return 1;
}



































/*
    int x1 = 100;                   //x-position of fish 1
//    int y1 = getmaxheight()/2;      //y-position of fish 1

  //  int X = getwindowwidth()/2;
   // int Y = getwindowheight()/2;
    int SPEED = 6;

int gravity = 9.8;

    // Infinite Loop of swimming
    while(1)
    {

    setcolor(RED);
    circle(X,Y,80);


    rectangle(0,0,2,2);


        delay(1);
        cleardevice();














    }

    /*/

    //getch();






