#include "Fenetre.h"
#include <graphics.h>
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <SDL2/SDL.h>
#include "Vector2.h"



Fenetre::Fenetre(int with,int height)
{


    window = SDL_CreateWindow("Bouncy Ball", SDL_WINDOWPOS_UNDEFINED,SDL_WINDOWPOS_UNDEFINED , with,height,SDL_WINDOW_RESIZABLE );
    renderer = SDL_CreateRenderer(window, -1,0);
    SDL_MaximizeWindow(window);


  SDL_Surface *surface;


// on charge l'image dans la surface
surface = SDL_LoadBMP("./icon.bmp");   // Declare an SDL_Surface to be filled in with pixel data from an image file



  // The icon is attached to the window pointer
  SDL_SetWindowIcon(window, surface);/**<  */

  // ...and the surface containing the icon pixel data is no longer required.
  SDL_FreeSurface(surface);



}

Fenetre::~Fenetre()
{
}



void Fenetre::render()
{
    SDL_RenderPresent(renderer);
     // delay(2);
    //   SDL_SetRenderDrawColor(renderer,255,255,255,255);
   // SDL_RenderClear(renderer);

}

void Fenetre::clean()
{
    SDL_SetRenderDrawColor(renderer,0,0,0,255);
    SDL_RenderClear(renderer);
}




Vector2* Fenetre::get_fenetre_size(){

Vector2* fenetre_size;
fenetre_size = new Vector2();
int w,h;
SDL_GetWindowSize(this->window,&w,&h);

    fenetre_size->x = double(w);
    fenetre_size->y = double(h);

    return fenetre_size;
}


void Fenetre::DrawCircle(SDL_Renderer * renderer, double centreX, double centreY, double radius)
{
   const double diameter = (radius * 2);

   double x = (radius - 1);
   double y = 0;
   double tx = 1;
   double ty = 1;
   double error = (tx - diameter);

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

