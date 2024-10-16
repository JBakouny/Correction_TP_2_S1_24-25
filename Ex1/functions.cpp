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


List reverse(const List& l) {
    List result(l.size());

    size_t n = l.size();

    for (size_t i = 0; i < n; ++i) {
        result[i] = l[n - 1 - i];
    }

    return result;
}

List concat(const List & l1, const List& l2) {
    List result(l1);
    for (auto x : l2) {
        result.push_back(x);
    }
    return result;
}
