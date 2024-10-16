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

List concat(List l1, const List& l2) {
    for (auto x : l2) {
        l1.push_back(x);
    }
    return l1;
}

ListVector createListVector(int numVectors) {
    ListVector result;
    cout << "On voudrai créer un vecteur composé de " << numVectors << " vecteurs de double." << endl;
    for (size_t i = 0; i < numVectors; ++i) {
        cout << "Saisissez la taille du vecteur numero " << i << " : ";
        int n;
        cin >> n;
        result.push_back(create(n));
    }
    return result;
}


void affiche(const ListVector& v) {
    for (const auto& l : v) {
        affiche(l);
        cout << endl;
    }
}
