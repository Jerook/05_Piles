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

    const int stockage = 5 ;

    array<int, stockage> tableau;
    int compteur = 0;
    int valeur;
    tableau.fill(0);


    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;
    int option;
    do{
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

        switch (option) {
            case 1:
                if (compteur < stockage) {
                    cout << "valeur : ";
                    cin >> valeur;

                    push(tableau, compteur, valeur);
                    cout << "Valeur empilee." << endl;
                }


                break;
            case 2:
                if (compteur > 0) {
                    pop(tableau, compteur);
                    cout << "Sommet depile." << endl;
                }
                else {
                    cout << "La pile est vide." << endl;
                }
                break;
            case 3:
                top(tableau, compteur);
                break;
            case 4:
                break;
            case 5:
                if (compteur == 0) {
                    cout << "La pile est vide." << endl;
                }
                else {
                    cout << "La pile n'est pas vide." << endl;
                }
                break;
            case 6:
                cout << "Nombre de valeurs: " << compteur << endl;
                break;
            case 7:
                compteur = 0;
                break;
            case 8:
                if (compteur == 0) {
                    cout << "La pile est vide." << endl;
                } else if (compteur == 1) {
                    cout << "Sommet / Fond ---> " << tableau[0] << endl;
                } else {
                    for (int i = compteur - 1; i >= 0; i--) {
                        if (i == compteur -1 ) {
                            cout << "sommet --->" << tableau[i] << endl;
                        }else if (i == 0) {
                            cout << "fond --->  " << tableau[i] << endl;
                        }else {
                            cout << "           " << tableau[i] << endl;
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
