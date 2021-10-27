#include <iostream>
#include <math.h>
#include "GrilleMorpion.h"

using namespace std;

int GrilleMorpion::GetCoup()
{
	return coup;
}

const bool GrilleMorpion::CaseVide() // Fonction avec déclaration de la valeur de chaque ligne par défaut 
{
	grille[0][0] = ' ';
	grille[0][1] = ' ';
	grille[0][2] = ' ';
	grille[1][0] = ' ';
	grille[1][1] = ' ';
	grille[1][2] = ' ';
	grille[2][0] = ' ';
	grille[2][1] = ' ';
	grille[2][2] = ' ';
	return true;
}

void GrilleMorpion::DepotJeton(int joueur, int x, int y) // Fonction de dépot de jeton 
{
	if (joueur == 1)
		grille[x - 1] [y - 1] = symbole1; // Symbole du joueur 1
	else
		grille[x - 1] [y - 1] = symbole2; // Symbole du joueur 2
	coup++;
}

const bool GrilleMorpion::LigneComplete()
{
	if ((grille[0][0] == grille[0][1] && grille[0][1] == grille[0][2]) && grille[0][0] != ' ' ||
		(grille[1][0] == grille[1][1] && grille[1][1] == grille[1][2]) && grille[1][0] != ' ' ||
		(grille[2][0] == grille[2][1] && grille[2][1] == grille[2][2]) && grille[2][0] != ' ')
		return true;
	else
		return false;

}

const bool GrilleMorpion::ColonneComplete()
{
	if ((grille[0][0] == grille[1][0] && grille[1][0] == grille[2][0]) && grille[0][0] != ' ' ||
		(grille[0][1] == grille[1][1] && grille[1][1] == grille[2][1]) && grille[0][1] != ' ' ||
		(grille[0][2] == grille[1][2] && grille[1][2] == grille[2][2]) && grille[0][2] != ' ')
		return true;
	else
		return false;
}

const bool GrilleMorpion::DiagonaleComplete()
{
	if ((grille[0][0] == grille[1][1] && grille[1][1] == grille[2][2]) && grille[0][0] != ' ' ||
		(grille[0][2] == grille[1][1] && grille[1][1] == grille[2][0]) && grille[0][2] != ' ')
		return true;
	else
		return false;
}

const bool GrilleMorpion::VictoireJoueur()
{
	if (LigneComplete() || ColonneComplete() || (DiagonaleComplete())) // Victoire d'un joueur 
		return true;
	
	return false;
}

const void GrilleMorpion::AffichageGrille() // Affichage du Morpion 
{
	cout << " ____ ____ ____" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << grille[0][0] << "  | " << grille[0][1] << "  | " << grille[0][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << grille[1][0] << "  | " << grille[1][1] << "  | " << grille[1][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
	cout << "|    |    |    |" << endl;
	cout << "| " << grille[2][0] << "  | " << grille[2][1] << "  | " << grille[2][2] << "  |" << endl;
	cout << "|____|____|____|" << endl;
}
