#include "functions.h"
#include <iostream>
using namespace std;


List create(int n) {
    List result;
    for (int i = 0; i < n; ++i) {
        cout << "Entrez la valeur à l'indexe " << i << ": ";
        double x;
        cin >> x;
        result.push_back(x);
    }
    return result;
}

void affiche(const List& v) {
    cout << "[ ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << "]";
}
