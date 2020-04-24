using namespace std;
#include <iostream>
#include <cstdio>
#include <windows.h>
#include <cmath>
#include <SDL2/SDL.h>
#include <iostream>
#include "include/Game.h"




int main(int argc, char **argv)
{
    const int FPS = 60;
    const int frameDelay = 1000/FPS;
    Uint32 frameStart;
    int frameTime;




    Game* game;
    game = new Game();
    cout << "init full" << endl;
    while (game->isRunning() )
    {

        frameStart = SDL_GetTicks();
            game->update();

            frameTime = SDL_GetTicks() - frameStart;

            if (frameDelay>frameTime){SDL_Delay(frameDelay - frameTime);}




    }





        cout << "jeux finit" << endl;
    return 1;
}







/*
#include <iostream>
#include <SDL2/SDL.h>

void DrawCircle(SDL_Renderer * renderer, int32_t centreX, int32_t centreY, int32_t radius)
{
   const int32_t diameter = (radius * 2);

   int32_t x = (radius - 1);
   int32_t y = 0;
   int32_t tx = 1;
   int32_t ty = 1;
   int32_t error = (tx - diameter);

   while (x >= y)
   {
      //  Each of the following renders an octant of the circle
      SDL_RenderDrawPoint(renderer, centreX + x, centreY - y);
      SDL_RenderDrawPoint(renderer, centreX + x, centreY + y);
      SDL_RenderDrawPoint(renderer, centreX - x, centreY - y);
      SDL_RenderDrawPoint(renderer, centreX - x, centreY + y);
      SDL_RenderDrawPoint(renderer, centreX + y, centreY - x);
      SDL_RenderDrawPoint(renderer, centreX + y, centreY + x);
      SDL_RenderDrawPoint(renderer, centreX - y, centreY - x);
      SDL_RenderDrawPoint(renderer, centreX - y, centreY + x);

      if (error <= 0)
      {
         ++y;
         error += ty;
         ty += 2;
      }

      if (error > 0)
      {
         --x;
         tx += 2;
         error += (tx - diameter);
      }
   }
}

int main(int argc,char* argv[]){
SDL_Init(SDL_INIT_EVERYTHING);


SDL_Window* window;
SDL_Renderer* renderer;//Déclaration du renderer



SDL_Rect rectangle = {0,0,250,250};



    SDL_RenderClear(renderer);

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    //SDL_RenderDrawRect(renderer, &rect);
    SDL_RenderFillRect(renderer, &rectangle);
    DrawCircle(renderer,150,150,200);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);


    SDL_RenderPresent(renderer);

SDL_Delay(5000);
SDL_Quit();
return EXIT_SUCCESS;
}
*/
