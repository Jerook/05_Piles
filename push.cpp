#include "push.h"
#include <iostream>
#include <array>

using namespace std;

void push(array<int, 5>& tableau, int& compteur, int valeur) {
    tableau[compteur] = valeur;
    compteur++;
}