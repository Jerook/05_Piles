#include "push.h"
#include <array>
#include <stdexcept>

void push(std::array<int, 5> &pile, int &compteur, int valeur) {
    if (compteur >= 5) {
        throw std::overflow_error("impossible d'empiler dans une pile pleine.");
    }
    pile[compteur] = valeur;
    compteur++;
}
