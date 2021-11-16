// Morpion_TP3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <iostream>
#include <string>
#include "Jeu.h"
#include "GrilleMorpion.h"

using namespace std;

int main()
{
    int i = 0;
    GrilleMorpion morpion;
    Jeu Morpion;
    morpion.CaseVide();
    Morpion.SaisieJoueur();
    return 0;
}