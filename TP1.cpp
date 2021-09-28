#include <iostream>
#include <string>
using namespace std;


//I.1.1 : Ecrivez une fonction qui prenne en paramètre deux int, et qui renvoie la somme de ces deux entiers //

int fctnNombre(int a, int b)
{
    return a + b;  //On retourne la somme des deux entiers
}

//I.1.2 : Ecrivez une méthode qui prenne en paramètre deux entiers et qui inverse leur valeur //

void fctnInverse(int a, int b)
{
    int c = a;
    a = b;
    b = c;
    cout << a << b << endl;
}

//I.1.3 : Ecrivez une fonction qui prend en paramètre 3 entiers, et qui remplace la valeur du troisième par la somme des deux premiers /

void fctnPtr(int* a, int* b, int* c) // Fonction Pointeur en "void" car elle ne retourne aucunes valeurs
{
    *c = *b + *a;
}

void fctnRef(int& a, int& b, int& c) // Fonction de Réference en "void" car elle ne retourne aucunes valeurs
{
    c = b + a;
}

//I.1.4 : Ecrivez un programme générant un tableau d’entiers rempli de valeurs aléatoires toutes positives ( pas fini...) //

void Tabl()
{
    int tab[20];
    int i;

    for (i = 0; i <= 19; i++)
    {
        int a = rand() % 20;
        tab[i] = a;
    }
}

void AffTabl(int tab, int i)
{
   

}

//II.  Jeu de Tennis //

void Score(int j1, int j2) 
{

    int tab[2][5] = { {0, 1, 2, 3, 4},{0, 15, 30, 40} };

    if (j1 >= 3 && j2 >= 3)
    {
        if (j1 > j2)
        {
            if (j1 - j2 == 2)
            { 
                cout << "Jeu, joueur 1" << endl;
            }
            else 
            { 
                cout << "Aventage joueur 1, balle de break" << endl; 
            }
        }
        else if (j2 > j1)
        {
            if (j1 - j2 == 2)
            { 
                cout << "Jeu, joueur 2" << endl; 
            }
            else 
            { 
                cout << "Avantage joueur 2, balle de break" << endl; 
            }
        }
        else 
        {
            cout << "Egalite ! " << endl;
        }
    }
    else {
            for (int i = 0; i < 1; i++) 
            {
                for (int j = 0; j < 6; j++) 
                {
                    if (j1 == tab[0][j])
                    { 
                        cout << "Score du joueur 1 : " << tab[1][j] << endl; 
                    }
                    if (j2 == tab[0][j]) 
                    { 
                        cout << "Score du joueur 2 : " << tab[1][j] << endl; 
                    }
                }
            }
    }

}

//III.1 : Affichage et saisie de chaînes de caractères. (sans le bonus)//

void Salutation()
{
    string nom, prenom;

    cout << "Bonjour, pouvez-vous saisir votre nom et prenom svp ?" << endl;
    getline(cin >> nom, prenom);
    cout << "Bonjour " << prenom << " " << nom << " ! " << endl;

}

//III.2 : Affichage et saisie de nombres.  (sans le bonus)//

void NombreSaisie()
{
    int i, n;

    cout << "Bienvenue ! Vous devez trouver le bon nombre..." << endl;
    i = rand() % 1000;
    do
    {
        cout << "Entre 0 et 1000, quel est le bon nombre ?" << endl;
        cin >> n;
        if (n < i)
        {
            cout << "Non, plus grand !" << endl;
        }
        else if (n > i)
        {
            cout << "Non, plus petit !" << endl;
        }
        else 
        {
            cout << "Bien joué ! " << endl;
     
        }
    } while (n != i);
}


int main()
{
    
    
    /*int scoreJ1 = 0, scoreJ2 = 0;
    cout << "Manches remporter par le joueur 1 : ";
    cin >> scoreJ1;
    cout << "Manches remporter par le joueur 2 : ";
    cin >> scoreJ2;

    Score(scoreJ1, scoreJ2);

    return 0;*/

    //Salutation();

    //NombreSaisie();

    /*int a, b, c;
    a = b = c = 3;
    cout << c << endl;
    fctnRef(a, b, c);
    cout << c << endl;*/


}
