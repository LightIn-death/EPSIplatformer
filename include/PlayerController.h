#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "Player.h"

class PlayerController
{
public:
    PlayerController();
    virtual ~PlayerController();
    void checkEvent(Player* Joueur);

protected:

private:
};

#endif // PLAYERCONTROLLER_H
