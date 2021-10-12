#include <iostream>
#include <math.h>
#include "triangle.h"
#include "StructPoint.h"

triangle::triangle()
{
	Point a, b, c;
}

triangle::~triangle()
{
}

const Point triangle::getPointA() 
{
    return this->a;
}

const Point triangle::getPointB() 
{
    return this->b;
}

const Point triangle::getPointC() 
{
    return this->c;
}

const void triangle::setPointA(Point a) {
    this->a = a;
}

const void triangle::setPointB(Point b) {
    this->b = b;
}

const void triangle::setPointC(Point c) {
    this->c = c;
}

const float triangle::Base(float base)
{
    return base;
}

const double triangle::surface(double s)
{
    s = ((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y)) / 2;
    return s;
}

const float triangle::AB(float longueur, float d1, float d2)
{
    d1 = (a.x - b.x);
    d2 = (a.y - b.y);
    longueur = sqrtf((d1 * d1) + (d2 * d2));
    return longueur;
}

const float triangle::AC(float longueur, float d1, float d2)
{
    d1 = (a.x - c.x);
    d2 = (a.y - c.y);
    longueur = sqrtf((d1 * d1) + (d2 * d2));
    return longueur;
}

const float triangle::BC(float longueur, float d1, float d2)
{
    d1 = (b.x - c.x);
    d2 = (b.y - c.y);
    longueur = sqrtf((d1 * d1) + (d2 * d2));
    return longueur;
}

const float triangle::hauteur(float h)
{
    return h;
}

const float triangle::longueur()
{
    
}

void triangle::AfficheTriangle()
{

}



