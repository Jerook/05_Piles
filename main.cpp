#include "push.h"
#include "pop.h"
#include "clear.h"
#include "empty.h"
#include "size.h"
#include "top.h"

#include <iostream>
#include <array>

using namespace std;

int main() {

    // Initialisation des valeurs
    const int stockage = 5 ;
    array<int, stockage> ma_pile;
    int nombre = 0;
    int valeur;
    ma_pile.fill(0);

    // Affichage général
    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;
    cout << "\n1 - Empiler\n"
     << "2 - Depiler\n"
     << "3 - Consulter le sommet\n"
     << "4 - Modifier l'element au sommet\n"
     << "5 - Verifier si la pile est vide\n"
     << "6 - Afficher le nombre de valeurs\n"
     << "7 - Vider la pile\n"
     << "8 - Afficher toute la pile\n"
     << "0 - Quitter\n\n";
    int option;
    do{
        cout << "Votre choix: ";
        cin >> option;

        switch (option) {
            case 1:
                if (nombre < stockage) {
                    cout << "valeur : ";
                    cin >> valeur;

                    push(ma_pile, nombre, valeur);
                    cout << "Valeur empilee." << endl;
                }
                break;
            case 2:
                if (nombre > 0) {
                    pop(ma_pile, nombre);
                    cout << "Sommet depile." << endl;
                }
                else {
                    cout << "La pile est vide." << endl;
                }
                break;
            case 3:
                if (empty(ma_pile, nombre)) {
                    cout << "La pile est vide." << endl;
                }
                else {
                    top(ma_pile, nombre);
                }
                break;
            case 4:
                if (empty(ma_pile, nombre)) {
                    cout << "La pile est vide." << endl;
                }
                else {
                    int remplacement;
                    cout << "Valeur de remplacement : ";
                    cin >> remplacement;
                    top(ma_pile, nombre) = remplacement;
                    cout << "Valeur remplacee." << endl;
                }

                break;
            case 5:
                if (empty(ma_pile, nombre)) {
                cout << "La pile est vide." << endl;
            } else {
                cout << "La pile n'est pas vide." << endl;
            }
                break;
            case 6:
                cout << "Nombre de valeurs : " << size(ma_pile, nombre) << endl;
                break;
            case 7:
                clear(ma_pile,nombre);
                cout << "Pile videe." << endl;
                break;
            case 8:
                if (nombre == 0) {
                    cout << "La pile est vide." << endl;
                } else if (nombre == 1) {
                    cout << "Sommet / Fond ---> " << ma_pile[0] << endl;
                } else {
                    for (int i = nombre - 1; i >= 0; i--) {
                        if (i == nombre -1 ) {
                            cout << "sommet --->" << ma_pile[i] << endl;
                        }else if (i == 0) {
                            cout << "fond --->  " << ma_pile[i] << endl;
                        }else {
                            cout << "           " << ma_pile[i] << endl;
                        }
                    }
                }
                break;
            case 0:
                cout <<"Fin de programme." << endl;

                break;
            default:
                break;
        }
    } while (option != 0);
    return 0;
}
