#include "Fenetre.h"
#include <graphics.h>
#include <windows.h>
#include <iostream>
#include <cstdio>
#include <cmath>
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
