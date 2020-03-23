#ifndef PLAYER_H
#define PLAYER_H
#include "structs.h"


class Player
{

private:
    Vector2 position;
    Vector2 velocity;
    int SPEED;
    int LIFE;
    int JUMP;
    int GRAVITY;

public:
    Player();
    virtual ~Player();
    void set_Velocity(Vector2 velo);
    Vector2 _move();
    void _show();
    void _reverse( Vector2 fenetre_size);

protected:


};

#endif // PLAYER_H
