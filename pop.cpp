#include "pop.h"
#include <array>
#include <stdexcept>

void pop(std::array<int, 5> &, int &compteur) {
    if (compteur <= 0) {
        throw std::underflow_error("impossible de depiler une pile vide.");
    }
    compteur--;
}
