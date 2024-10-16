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
    List result;

    size_t n = l.size();

    for (int i = n-1; i >= 0; --i) {
        result.push_back(l[i]);
    }

    return result;
}

List concat(List l1, const List& l2) {
    for (auto x : l2) {
        l1.push_back(x);
    }
    return l1;
}
