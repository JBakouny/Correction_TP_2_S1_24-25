#include "functions.h"
#include <iostream>
using namespace std;


List create() {
    List result;
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
        result[n - 1 - i] = l[i];
    }

    return result;
}

std::array<double, 2 * N> concat(const List & l1, const List& l2) {
    std::array<double, 2 * N> res;
    for (int i = 0; i < N; ++i) {
        res[i] = l1[i];
    }
    for (int i = 0; i < N; ++i) {
        res[i+N] = l2[i];
    }
    return res;
}

ListVector createListVector(int numVectors) {
    ListVector result;
    cout << "On voudrai créer un vecteur composé de " << numVectors << " vecteurs de double." << endl;
    for (size_t i = 0; i < numVectors; ++i) {
        result[i] = create();
    }
    return result;
}


void affiche(const ListVector& v) {
    for (const auto& l : v) {
        affiche(l);
        cout << endl;
    }
}


ListVector reverse(const ListVector& v) {
    ListVector result;
    for (size_t i = 0; i < v.size(); ++i) {
        result[i] = reverse(v[i]);
    }
    return result;
}

std::array<double, N * N> flatten(const ListVector& v)
{
    std::array<double, N* N> result{};
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            result[i * N + j] = v[i][j];
        }
    }
    return result;   
}

