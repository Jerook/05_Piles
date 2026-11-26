#include "pop.h"
#include <iostream>
#include <array>

using namespace std;

void pop(array<int, 5>&, int& compteur) {
    if (compteur <= 0) {
        throw underflow_error("impossible de depiler une pile vide.");
    }
    compteur--;
}