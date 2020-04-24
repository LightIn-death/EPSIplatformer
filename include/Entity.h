#ifndef ENTITY_H
#define ENTITY_H

#include "Vector2.h"


class Entity
{
    public:
        Entity();
        virtual ~Entity();



    protected:

        Vector2* position;



    private:
};

#endif // ENTITY_H
