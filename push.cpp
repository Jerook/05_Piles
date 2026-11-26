#include "push.h"
#include <iostream>
#include <array>

using namespace std;

void push(array<int, 5>& pile, int& compteur, int valeur) {
    if (compteur < pile.size()) {
        pile[compteur] = valeur;
        compteur++;
    }else {
        cout << "La pile est pleine." << endl;
    }
}