#include "top.h"
#include <array>
#include <iostream>

using namespace std;

void top(const array<int, 5>& tableau, int compteur) {
    if (compteur > 0) {
        cout << "Sommet : " << tableau [compteur-1] << endl;
    }
}
