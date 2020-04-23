#ifndef MAP_H
#define MAP_H

#include "Vector2.h"
#include "Entity.h"

class Map : public Entity
{
    public:
        Map();
        virtual ~Map();
        void afficher();
       void set_position(Vector2* value);
       void set_taille(Vector2* value);
        Vector2* get_position();
        Vector2* get_taille();


    protected:

    private:

        Vector2* position;
        Vector2* taille;

};

#endif // MAP_H
