#include "top.h"
#include <array>
#include <stdexcept>

int top(const std::array<int, 5> &pile, int compteur) {
    if (compteur <= 0) {
        throw std::underflow_error("impossible de consulter le sommet d'une pile vide.");
    }
    return pile[compteur - 1];
}

int &top(std::array<int, 5> &pile, int compteur) {
    if (compteur <= 0) {
        throw std::underflow_error("impossible de remplacer le sommet d'une pile vide.");
    }
    return pile[compteur - 1];
}
