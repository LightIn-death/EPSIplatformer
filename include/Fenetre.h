#ifndef FENETRE_H
#define FENETRE_H
#include <SDL2/SDL.h>
#include "Vector2.h"


class Fenetre
{


public:
    SDL_Window* window;
    SDL_Renderer* renderer;


    Fenetre(int with = 360 ,int height = 480);
    virtual ~Fenetre();

    void refresh();
    Vector2* get_fenetre_size();
    void DrawCircle(SDL_Renderer * renderer, double centreX, double centreY, double radius);
    void render();
    void clean();


protected:

private:
};

#endif // FENETRE_H
