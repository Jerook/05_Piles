//
// Created by adonis on 18.11.2026.
//

#include "top.h"
#include <array>
#include <iostream>
using namespace std;

int main() {
    int valeur;
    cout << "valeur :" << endl;
    cin >> valeur;

    int a[] = {valeur};

    int compteur += a[];

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
    cout << a[i] << endl;
    }
}
