#include <iostream>
#include "Jeu.h"

using namespace std;

Jeu::Jeu() // Valeurs par défaut si non renseigner 
{
	c_nom = "MOI";
	c_nombre = 0;
}

Jeu::~Jeu()
{
}

Jeu::Jeu(int nombre, string nom)
{
	c_nombre = nombre;
	c_nom = nom;
}


void Jeu::renommer(string nom)
{
	c_nom = nom;
}

string Jeu::getNom() const
{
	return c_nom;
}

int Jeu::getNombre() const
{
	return c_nombre;
}

void Jeu::SaisieJoueur() // boucle pour savoir quand le joueur gagne ou continue jusqu'à ce que l'une des conditions soient remplis 
{
    int x = 0; // Lignes
    int y = 0; // Colonnes
    cout << "Veuillez entrer un nom pour le joueur 1" << endl;
    cin >> nom;
    Jeu j1(1, nom);

    cout << "Veuillez entrer un nom pour le joueur 2" << endl;
    cin >> nom;
    Jeu j2(2, nom);
    while (morpion.VictoireJoueur() == false || morpion.GetCoup() < 9 )
    {
        cout << "A votre tour, joueur " << joue << ":" << endl;
        cout << "Valeur de x :" << endl;
        cin >> x;
        cout << "Valeur de y :" << endl;
        cin >> y;
        morpion.DepotJeton(joue, x, y);
        morpion.AffichageGrille();
        if (morpion.VictoireJoueur() == true && joue == 1)
            cout << endl << j1.getNom() << " a gagne" << endl;
        else if (morpion.VictoireJoueur() == 1 && joue == 2)
            cout << endl << j2.getNom() << " a gagne" << endl;
        else if (morpion.GetCoup() == 9)
        {
            cout << "Match nul" << endl; // Match nul si égalité
        }
        else if (joue == 1)
            joue = 2;
        else
            joue = 1;
    }
    
}

