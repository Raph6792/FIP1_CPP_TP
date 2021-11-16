#pragma once
class GrilleMorpion
{
public:
	int GetCoup();

	const bool CaseVide();// Valeur par défaut des cases vides
	void DepotJeton(int joueur, int x, int y); // Fonction pour déposer les jetons  
	const bool LigneComplete(); // condition de victoire : ligne 
	const bool ColonneComplete(); // condition de victoire : colonne 
	const bool DiagonaleComplete(); // condition de victoire : diagonale
	const bool VictoireJoueur(); // Fonction pour déclarer la victoire 

	const void AffichageGrille(); //Fonction d'affichage de la grille 

private:
	char grille[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	}; // Tableau (grille) du jeu 
	int coup = 0; // Nombre de fois qu'un joueur joue 
	const char symbole1 = 'X';
	const char symbole2 = 'O';
};

