#ifndef FENETRE_H
#define FENETRE_H

#include "Vector2.h"


class Fenetre
{


public:
    Fenetre();
    virtual ~Fenetre();

    void refresh();
    Vector2* get_fenetre_size();


protected:

private:
};

#endif // FENETRE_H
