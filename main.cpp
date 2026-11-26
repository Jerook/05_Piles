/*
Auteur(s) : Adonis Chasi, Jeroshan Jegatheeswaran
Date : 27.11.2026
But : Manipulation d'une pile d'entiers
*/

#include "push.h"
#include "pop.h"
#include "clear.h"
#include "empty.h"
#include "size.h"
#include "top.h"

#include <iostream>
#include <array>
#include <stdexcept>

using namespace std;

int main() {
    // Initialisation des valeurs
    const int stockage = 5;
    array<int, stockage> ma_pile;
    int nombre = 0;
    int valeur;
    ma_pile.fill(0);

    // Affichage général
    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;

    int option;

    // Boucle générale du programme
    do {
        // Menu d'option
        cout << "\n1 - Empiler\n"
                << "2 - Depiler\n"
                << "3 - Consulter le sommet\n"
                << "4 - Modifier l'element au sommet\n"
                << "5 - Verifier si la pile est vide\n"
                << "6 - Afficher le nombre de valeurs\n"
                << "7 - Vider la pile\n"
                << "8 - Afficher toute la pile\n"
                << "0 - Quitter\n\n";

        cout << "Votre choix: ";
        cin >> option;
        try {
            switch (option) {
                case 1: // Empiler une valeur
                    cout << "valeur : ";
                    cin >> valeur;
                    push(ma_pile, nombre, valeur);
                    cout << "Valeur empilee." << endl;
                    break;
                case 2: // Dépiler le sommet
                    pop(ma_pile, nombre);
                    cout << "Sommet depile." << endl;
                    break;
                case 3: // Consulter le sommet
                    cout << "Sommet : " << top(ma_pile, nombre) << endl;
                    break;
                case 4: // Modifier le sommet
                    int remplacement;
                    cout << "Valeur de remplacement : ";
                    cin >> remplacement;
                    top(ma_pile, nombre) = remplacement;
                    cout << "Valeur remplacee." << endl;
                    break;
                case 5: // Vérifier si la pile est vide
                    if (empty(ma_pile, nombre)) {
                        cout << "La pile est vide." << endl;
                    } else {
                        cout << "La pile n'est pas vide." << endl;
                    }
                    break;
                case 6: // Afficher le nombre de valeurs
                    cout << "Nombre de valeurs : " << size(ma_pile, nombre) << endl;
                    break;
                case 7: // Vider la pile
                    clear(ma_pile, nombre);
                    cout << "Pile videe." << endl;
                    break;
                case 8: // Affichage de la pile du sommet au fond
                    if (empty(ma_pile, nombre)) {
                        cout << "La pile est vide." << endl;
                    } else if (nombre == 1) {
                        cout << "Sommet / Fond ---> " << ma_pile[0] << endl;
                    } else {
                        for (int i = nombre - 1; i >= 0; i--) {
                            if (i == nombre - 1) {
                                cout << "sommet --->" << ma_pile[i] << endl;
                            } else if (i == 0) {
                                cout << "fond --->  " << ma_pile[i] << endl;
                            } else {
                                cout << "           " << ma_pile[i] << endl;
                            }
                        }
                    }
                    break;
                case 0: // Quitter le programme
                    cout << "Fin de programme." << endl;

                    break;
                default:
                    break;
            }
        } catch (const exception &erreur) {
            cout << "Erreur : " << erreur.what() << endl;
        }
    } while (option != 0);
    return 0;
}
