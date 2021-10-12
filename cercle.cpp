#include <iostream>
#include <math.h>
#include "cercle.h"
#include "StructPoint.h"

using namespace std;

cercle::cercle(int d)
{
	diametre = d;
}

cercle::~cercle()
{
}

const Point cercle::GetCentre() //Renvoi l valeur du point centrale du cercle 
{
	return centre;
}

const int cercle::GetDiametre() //Renvoi le diametre du cercle 
{
	return diametre;
}

const void cercle::SetCentre(Point c1)
{
	centre = c1;
}

const void cercle::SetDiametre(int dia)
{
	diametre = dia;
}

const double cercle::permietre() //Permet de calculer le perimetre du cercle 
{
	return diametre * pi;
}

const double cercle::surface() //Permet de calculer la surface du cercle 
{
	return diametre / 2 * pow(pi, 2);
}

double cercle::distance(Point d1, Point d2) //Distance entre deux points avec l'utilisation des points dans StructPoint
{
	return sqrt(pow(d2.x - d1.x, 2) + pow(d2.y - d1.y, 2));
}

void cercle::AfficheCercle() //Affichage du cercle 
{
	cout << "Le diametre du cercle est de  " << diametre << endl;
	cout << endl;
	cout << "Le perimetre du cercle est de " << this->permietre() << endl;
	cout << "La surface du cercle est de " << this->surface() << endl;
}

bool cercle::SurLeCercle(Point p) //Renvoi true si le point ce trouve sur le cercle, false à contrario 
{
	if (distance(centre, p) == diametre / 2)
		return true;
	else
		return false;
}

bool cercle::AppartientAuCercle(Point p) //Renvoi true si le point ce trouve dans le cercle, false à contrario 
{
	if (distance(centre, p) < pow(diametre / 2, 2))
		return true;
	else
		return false;
}

