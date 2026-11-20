#include "push.h"
#include "pop.h"
#include "clear.h"
#include "empty.h"
#include "size.h"
#include "top.h"

#include <iostream>
#include <array>

using namespace std;

int main() {

    const int stockage= 3 ;

    array <int, stockage > tableau;

    cout << "Ce programme permet de manipuler une pile d'entiers." << endl;

    int option;
    cin >> option;

    switch (option) {
        case 1:
            push();
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        default: ;
    }
}
