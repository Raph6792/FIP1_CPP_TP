#pragma once
class GrilleMorpion
{
public:
	const bool CaseVide(); // Valeur par d�faut des cases vides
	void DepotJeton(int j, int choix); // Fonction pour d�poser les jetons (probl�me de compilation...) 
	const bool LigneComplete(); // condition de victoire : ligne 
	const bool ColonneComplete(); // condition de victoire : colonne 
	const bool DiagonaleComplete(); // condition de victoire : diagonale
	const bool VictoireJoueur(); // Fonction pour d�clarer la victoire 

	const void AffichageGrille(); //Fonction d'affichage de la grille 

private:
	int grille[3][3]; // Tableau (grille) du jeu 
	int coup; // Nombre de fois qu'un joueur joue 
	const char symbole1 = 'X';
	const char symbole2 = 'O';
};

