#ifndef RAYCAST2D_H
#define RAYCAST2D_H
#include "Vector2.h"
#include "Map.h"
 #include <vector>
 using namespace std;

class RayCast2D
{
    public:
        RayCast2D(Vector2 startpos,Vector2 endpos);
        RayCast2D(Vector2 startpos,Vector2 direction,double taille);
        virtual ~RayCast2D();
        bool check_for_collision(vector<Map*> carte,double step = 1);
        Vector2 get_collision_point();


    private:
        Vector2 start_point;
        Vector2 end_point;
        Vector2 direction = Vector2();
        double taille = 1;
        Vector2 CollisionPoint = Vector2();
};

#endif // RAYCAST2D_H
