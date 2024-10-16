#include "functions.h"
#include <iostream>
using namespace std;


List create(int n) {
    List result(n);
    for (size_t i = 0; i < result.size(); ++i) {
        cout << "Entrez la valeur à l'indexe " << i << ": ";
        cin >> result[i];
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
