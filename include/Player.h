#ifndef PLAYER_H
#define PLAYER_H


#include "structs.h"


class Player
{

    private:
        Vector2 position;
        int SPEE;
        int LIFE;
        int JUMP;
        int GRAVITY;

    public:
        Player();
        virtual ~Player();

    protected:


};

#endif // PLAYER_H
