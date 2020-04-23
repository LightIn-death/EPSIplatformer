#ifndef PLAYERCONTROLLER_H
#define PLAYERCONTROLLER_H
#include "Player.h"
 #include <vector>
#include "Vector2.h"
#include "Map.h"
using namespace std;
class PlayerController
{
public:
    PlayerController();
    virtual ~PlayerController();
    void checkEvent(Player* Joueur,double deltaT ,vector<Map*> carte);


protected:

private:
    bool is_jumping= false;
};

#endif // PLAYERCONTROLLER_H
