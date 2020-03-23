#ifndef GAME_H
#define GAME_H
#include "PlayerController.h"
using namespace std;


class Game
{
 PlayerController* controler;


    public:

        Game();
        virtual ~Game();
        void _update();
        bool isRunning();




         int Gettest() ;
        void Settest( int val) ;


    protected:

    private:
        bool running = true;
         int test;
};

#endif // GAME_H
