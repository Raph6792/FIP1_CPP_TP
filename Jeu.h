#pragma once
#include "GrilleMorpion.h"
#include <string>
using namespace std;
class Jeu
{
public:
	Jeu(); // Constructeur
	~Jeu(); // Destructeur
	GrilleMorpion morpion; // Appel de la classe GrilleMorpion pour utiliser les fonctions 
	Jeu(int nombre, string nom); // numéro du joueur et le pseudo 
	void renommer(string nom); // renommer un joueur quand rematch 
	string getNom() const;
	int getNombre() const;
	void SaisieJoueur(); // saisie des joueurs 

private:
	string c_nom;
	int c_nombre;
	int choix;
	int joue = 1;
	string nom;
};

