#include "push.h"
#include <iostream>
#include <array>

using namespace std;

void push(array<int, 5>& tableau, int& compteur, int valeur) {
    if (compteur < tableau.size()) {
        tableau[compteur] = valeur;
        compteur++;
    }else {
        cout << "La pile est pleine." << endl;
    }
}