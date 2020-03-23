#include "Fenetre.h"
#include <graphics.h>
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include "structs.h"



Fenetre::Fenetre()
{
    //ctor

    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight,"",-3,-3);


}

Fenetre::~Fenetre()
{
    //dtor
}



void Fenetre::refresh()
{
    delay(1);
    cleardevice();
}



Vector2 Fenetre::get_fenetre_size(){

    Vector2 fenetre_size;
    fenetre_size.x = GetSystemMetrics(SM_CXSCREEN);
    fenetre_size.y = GetSystemMetrics(SM_CYSCREEN);

    return fenetre_size;
}



