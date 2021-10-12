#pragma once
#include "StructPoint.h"
class rectangle
{
private:
	int largeur;
	int longueur;
	Point p1;
public:
	//Constructeur, Destructeur
	rectangle();
	~rectangle();
	rectangle(int lar, int lon);
	//Getters et Setters pour la largeur, la longueur et le point p1
	const int getLar();
	const int getLon();
	const Point getPoint();
	const void setLar(int n);
	const void setLon(int n);
	const void setPoint(float x, float y);
	//Initilisation de la surface, du perimetre et de l'affichage 
	const int surface();
	const int perimetre();
	void AffRectangle();
	//Bonus : Impl�mentez une m�thode prenant un rectangle en param�tre, et qui renvoie true si l�objet poss�de un plus grand p�rim�tre et une plus grande surface que le rectangle pass� en param�tre, false sinon.
	bool DiffPerimetre(rectangle recta);
	bool DiffSurface(rectangle recta);

};

