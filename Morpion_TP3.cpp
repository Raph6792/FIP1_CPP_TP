// Morpion_TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <iostream>
#include <string>
#include "Jeu.h"
#include "GrilleMorpion.h"

using namespace std;

int main()
{
    int i = 0;
    int choix;
    GrilleMorpion morpion;
    Jeu Morpion;
    morpion.CaseVide();
    Morpion.SaisieJoueur();
    morpion.DepotJeton(i, choix); // Fonction posant problème... impossible de faire disparaître l'erreur lors de la compilation
    morpion.AffichageGrille();

    return 0;
}