#pragma once
#include <iostream>
#include "StructPoint.h"
class cercle
{
private:
	int diametre;
	const double pi = 3.14159265;  //Initialisation de PI en constante car la valeur n'est pas modifiable 
	Point centre; //Point du centre du cercle 
public:
	cercle(int d);
	~cercle(); //Destructeur 

	//Getters et Setters pour le point centrale et le diametre du cercle 
	const Point GetCentre(); 
	const int GetDiametre(); 
	const void SetCentre(Point c1); 
	const void SetDiametre(int dia); 

	const double permietre(); //Calcul du perimetre du cercle 
	const double surface(); //Calcul de la surface du cercle 
	double distance(Point d1, Point d2); //Calcul de la distance entre deux points
	void AfficheCercle(); //Affichage des informations concernant le cercle 

	bool SurLeCercle(Point p); //Calcul si le point est sur le cercle 
	bool AppartientAuCercle(Point p); //Calcul si le point ce trouve dans le cercle 

};

