#include <iostream>
#include "rectangle.h"
#include "StructPoint.h"

using namespace std;

rectangle::rectangle() //valeurs du rectangle par défaut si l'utilisateur ne renseigne pas de largeur ni de longueur
{
	largeur = 1;
	longueur = 2;
}

rectangle::rectangle(int lar, int lon) //valeurs du rectangle renseigner par l'utilisateur 
{
	largeur = lar;
	longueur = lon;
}

const int rectangle::surface() //Calcul de la surface
{
	return largeur * longueur;
}

const int rectangle::perimetre() //Calcul du perimetre 
{
	return 2 * (longueur + largeur);
}

rectangle::~rectangle() //Destructeur 
{
}

const int rectangle::getLar() //Getter pour la largeur 
{
	return largeur;
}

const int rectangle::getLon() //Getter pour la longueur 
{
	return longueur;
}

const Point rectangle::getPoint() //Getter pour le point 
{
	return p1;
}

const void rectangle::setLar(int n) //Setter pour la largeur 
{
	largeur = n;
}

const void rectangle::setLon(int n) //Setter pour la longueur 
{
	longueur = n;
}

const void rectangle::setPoint(float x, float y) //Setter pour le point, x représentant la largeur et y la longueur 
{
	p1.x = x;
	p1.y = y;
}

void rectangle::AffRectangle() //Affichage du rectangle 
{
	cout << "La largeur du rectangle est de " << largeur << endl;
	cout << "La longueur du rectangle est de " << longueur << endl;
	cout << endl;
	cout << "Le perimetre est de " << this->perimetre() << endl;
	cout << "La surface est de " << this->surface() << endl;
}

bool rectangle::DiffPerimetre(rectangle recta) //Bonus : perimetre
{
	if (perimetre() < recta.perimetre())
		return true;
	else
		return false;

}

bool rectangle::DiffSurface(rectangle recta) //Bonus : surface
{
	if (surface() < recta.surface())
		return true;
	else
		return false;
}
