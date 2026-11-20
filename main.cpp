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
        cout << "Votre choix: " <<endl;
        cin >> option;

        switch (option) {
            case 1:
                if (compteur < stockage) {
                    cout << "valeur : "<< " ";
                    cin >> valeur;

                    tableau[compteur] = valeur;
                    compteur++;
                }

                for (int i = 0; i < stockage; i++) {
                cout << tableau[i] << endl;
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 0:
                cout <<"Fin du programme" << endl;

                break;
            default:
                break;
        }
    } while (option != 0);
    return 0;
}
