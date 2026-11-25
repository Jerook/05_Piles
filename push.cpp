#include "push.h"
#include <iostream>
#include <array>

using namespace std;

void push(array<int, 5>& tableau, int& compteur, int valeur) {
    tableau[compteur] = valeur;
    compteur++;
}


/*    cout << "valeur :" << endl;
    cin >> valeur;

    int b = {valeur};
    int compteur = 0;


    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        cout << a[i] << endl;
    }*/






