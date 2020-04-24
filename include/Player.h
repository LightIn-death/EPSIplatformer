#ifndef PLAYER_H
#define PLAYER_H
#include "Vector2.h"
#include "Entity.h"
#include "RayCast2D.h"
 #include <vector>
#include "Vector2.h"
#include "Map.h"
#include "Fenetre.h"
#include <SDL2/SDL.h>
using namespace std;

class Player : public Entity
{

private:
    Vector2* velocity;
    int SPEED = 50;
    int LIFE;
    int JUMP;
    int GRAVITY = 1;
    Vector2 fall = Vector2();
SDL_Renderer* renderer;
Fenetre* canvas;


public:
    Player(Fenetre* canvas);
    virtual ~Player();
    void set_Velocity(Vector2* velo,double deltaT);
    Vector2* _move( );
    void _show();
    void _reverse( Vector2* fenetre_size);
    void gravity();
    Vector2 collide(vector<Map*> carte);
    Vector2 get_position();

protected:


};

#endif // PLAYER_H
