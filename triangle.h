#pragma once
#include <iostream>
#include "StructPoint.h"
class triangle
{
private:
	Point a, b, c;
public:
	triangle();
	~triangle();

	const Point getPointA();
	const Point getPointB();
	const Point getPointC();
	const void setPointA(Point a);
	const void setPointB(Point b);
	const void setPointC(Point c);

	const float Base(float base);
	const double surface(double s);

	const float AB(float longueur, float d1, float d2);
	const float AC(float longueur, float d1, float d2);
	const float BC(float longueur, float d1, float d2);

	const float hauteur(float h);
	const float longueur();
	void AfficheTriangle();

	bool Isocele();
	bool Rectangle();
	bool Equilateral();




};

