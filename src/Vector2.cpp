#include "Vector2.h"
#include <cmath>
#include  <stdlib.h>
#include  <iostream>
#include <stdlib.h>


using namespace std;

Vector2::Vector2()
{
    this->x = 0;
    this->y = 0;
}


Vector2::Vector2(double x, double y)
{
    this->x = x;
    this->y = y;
}


Vector2::~Vector2()
{
    //dtor
}


Vector2 Vector2::normalize()
{
    this->x = this->x / lenght();
    this->y = this->y / lenght();
    return Vector2( this->x,this->y);
}



double Vector2::lenght()
{
    double lenght;
    double x;
    double y;
    x = this->x;
    y = this->y;
    lenght = sqrt((x*x)+(y*y));
    return lenght;
}



Vector2 Vector2::distanceTo(Vector2 vect)
{
    return Vector2(std::abs(double(vect.x-this->x)),std::abs(double(vect.y-this->y)));
}

Vector2 Vector2::vectorTo(Vector2 vect)
{
    return Vector2((vect.x-this->x),(vect.y-this->y));
}



bool Vector2::point_is_inside(Vector2 rect, Vector2 rect_size)
{

    //cout<< "point "<< this->x << ":" << this->y <<  "  rectPoint " << rect.x <<":" << rect.y << "  rect size :  " << rect_size.x << ":" << rect_size.y << endl;
    if((this->x <= rect.x + rect_size.x )&&(this->x >= rect.x ))
    {
       // cout << "inside X" << endl;
        if((this->y <= rect.y + rect_size.y )&&(this->y >= rect.y ))
        {
             //cout << "inside Y" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        // cout << "outside ALL" << endl;
        return false;
    }
}



      Vector2 operator+( Vector2 v1,const Vector2 v2){return v1.Add(v2);}
      Vector2 operator-( Vector2 v1,const Vector2 v2){return v1.Sub(v2);}
      Vector2 operator*( Vector2 v1,const Vector2 v2){return v1.Mult(v2);}
      Vector2 operator/( Vector2 v1,const Vector2 v2){return v1.Div(v2);}


    Vector2 Vector2::operator+=(const Vector2 vect){this->Add(vect);}
    Vector2 Vector2::operator-=(const Vector2 vect){this->Sub(vect);}
    Vector2 Vector2::operator*=(const Vector2 vect){this->Mult(vect);}
    Vector2 Vector2::operator/=(const Vector2 vect){this->Div(vect);}



    Vector2 Vector2::Add(const Vector2 vect){return Vector2((this->x + vect.x),(this->y + vect.y));}
    Vector2 Vector2::Sub(const Vector2 vect){return Vector2((this->x - vect.x),(this->y - vect.y));}
    Vector2 Vector2::Mult(const Vector2 vect){return Vector2((this->x * vect.x),(this->y * vect.y));}
    Vector2 Vector2::Div(const Vector2 vect){return Vector2((this->x / vect.x),(this->y / vect.y));}


          bool operator==(const Vector2 v1,const Vector2 v2){if(v1.x == v2.x && v1.y == v2.y ){return true;}else {return 0;} }


