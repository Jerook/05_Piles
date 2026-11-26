#include "empty.h"
#include <array>

bool empty(const std::array<int, 5>& pile, int compteur) {
    return compteur == 0;
}