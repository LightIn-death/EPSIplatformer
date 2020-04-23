#include "Fenetre.h"
#include <graphics.h>
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cmath>
#include "Vector2.h"



Fenetre::Fenetre()
{
    //ctor

    DWORD screenWidth = GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight = GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth,screenHeight,"",-3,-3);

    setbkcolor(9);
//9
//12
//42
//11
//10






}

Fenetre::~Fenetre()
{
    //dtor
}



void Fenetre::refresh()
{
    delay(2);
    cleardevice();
}



Vector2* Fenetre::get_fenetre_size(){

    Vector2* fenetre_size;
    fenetre_size = new Vector2();

    fenetre_size->x = GetSystemMetrics(SM_CXSCREEN);
    fenetre_size->y = GetSystemMetrics(SM_CYSCREEN);

    return fenetre_size;
}



