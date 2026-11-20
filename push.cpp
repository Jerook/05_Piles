//
// Created by adonis on 18.11.2026.
//

#include "push.h"
#include <iostream>

using namespace std;

int push(int a[]) {
    int valeur;
    cout << "valeur :" << endl;
    cin >> valeur;

    int b = {valeur};
    int compteur = 0;


    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        cout << a[i] << endl;
    }
}









