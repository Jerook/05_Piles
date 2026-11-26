#include "pop.h"
#include <iostream>
#include <array>

using namespace std;

void pop(array<int, 5>&, int& compteur) {
    if (compteur > 0) {
        compteur--;
    }else {
        cout << "La pile est deja vide" << endl;
    }
}