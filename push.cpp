#include "push.h"
#include <iostream>
#include <array>

using namespace std;

void push(array<int, 5>& pile, int& compteur, int valeur) {
    if (compteur >= 5) {
        throw overflow_error("impossible d'empiler dans une pile vide.");
    }
    pile[compteur] = valeur;
    compteur++;
}