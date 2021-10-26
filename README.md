# FIP1_CPP_TP

// TP3 - Morpion // 

Objectif : programmer un jeu de morpion complet et évolutif :

Traditionnellement, un morpion se joue à deux joueurs sur une grille de 3 x3. Le plateau de jeu peut être modélisé par un tableau d’entiers à deux dimensions. 
En C++, un tableau en deux dimensions d’entiers peut s’écrire : 
int nom_tableau[NB_LIGNES][NB_COLONNES]; 
Par convention, le premier indice entre crochet désigne la ligne (entre 0 et NBLIGNES-1) et le deuxième indice désigne la colonne (entre 0 et NB-COLONNES-1). 
Dans notre cas, on pourra donc définir une grille de morpion de la manière suivante : 
int grille[3][3];


I La classe GrilleMorpion

Ecrivez une classe « grille de morpion » ayant les méthodes suivantes : 

    •Case vide : retourne true ou false si la case donnée en paramètre est libre ou non. 
    •Déposer un jeton. Cette méthode permet de déposer un jeton d’un joueur donné sur la case spécifiée en paramètre. 
    •Ligne complète. retourne true si la ligne donnée en paramètre est rempli par des jetons du joueur dont l’identifiant est donné en paramètre. 
    •Colonne complète. retourne true si la colonne donnée en paramètre est rempli par des jetons du joueur dont l’identifiant est donné en paramètre. 
    •Diagonale complète. retourne true si la diagonale donnée en paramètre est rempli par des jetons du joueur dont l’identifiant est donné en paramètre. 
    • Victoire joueur. retourne true si l’utilisateur dont l’identifiant est donné en paramètre a rempli une condition de victoire. 
    •Affichage de la grille 
    
    
II La classe Jeu

Créez une classe Jeu qui permettra de jouer une partie à deux joueurs successivement sur le même clavier. 

Chaque tour de jeu se déroule de la façon suivante : 

    1. Le joueur dont c’est le tour est invité à saisir la case sur laquelle il veut poser un pion, 
    2. On vérifie que la valeur saisie est bien un entier compris entre 1 et le nombre de lignes, sinon on redemande de saisir. 
    3. On vérifie que la case sélectionnée est vide et dans les bornes du tableau, 
    4. Si c’est le cas, on place le pion pour le joueur et on affiche la grille, 
    5. On vérifie si le joueur a gagné, si oui, la partie est terminée et on félicite le vainqueur.
    6. On vérifie si la grille est pleine, si oui on annonce le match nul et on propose de jouer à nouveau. 
