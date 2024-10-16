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


List reverse(const List& l) {
    List result(l.size());

    size_t n = l.size();

    for (size_t i = 0; i < n; ++i) {
        result[i] = l[n - 1 - i];
    }

    return result;
}

List concat(List l1, const List& l2) {
    for (auto x : l2) {
        l1.push_back(x);
    }
    return l1;
}
