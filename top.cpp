#include "top.h"
#include <array>
#include <iostream>

using namespace std;

int top(const array<int, 5>& pile, int compteur) {
    if (compteur <= 0) {
    }throw underflow_error("impossible de consulter le sommet d'une pile vide.");
    return pile[compteur - 1];
}
int& top(array<int, 5>& pile, int compteur) {
    if (compteur <= 0) {
    }throw underflow_error("impossible de remplacer le sommet d'une pile vide.");
    return pile[compteur - 1];
}