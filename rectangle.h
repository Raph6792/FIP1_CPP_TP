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
	//Bonus : Implémentez une méthode prenant un rectangle en paramètre, et qui renvoie true si l’objet possède un plus grand périmètre et une plus grande surface que le rectangle passé en paramètre, false sinon.
	bool DiffPerimetre(rectangle recta);
	bool DiffSurface(rectangle recta);

};

