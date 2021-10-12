// Cercle_TP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <math.h>
#include <iostream>
#include "cercle.h"
#include "StructPoint.h"

using namespace std;
int main()
{
    cercle cer1(2), cer2(4);
    cer1.AfficheCercle();
    cout << endl;
    cer2.AfficheCercle();
}
