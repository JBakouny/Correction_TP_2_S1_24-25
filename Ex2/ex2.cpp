// Exercice 2 :
// ============

#include <iostream>
#include <string>
using namespace std;


void affiche(double v[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; ++i) {
        cout << v[i] << " ";
    }
    cout << "]";
}

void fill(double result[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Entrez la valeur à l'indexe " << i << ": ";
        cin >> result[i];
    }
}

void reverse(const double l[], int n, double result[]) {
    for (int i = 0; i < n; ++i) {
        result[i] = l[n - 1 - i];
    }
}

void concat(const double l1[], int n1, const double l2[], int n2, double result[]) {
    for (int i = 0; i < n1; ++i) {
        result[i] = l1[i];
    }

    for (int i = n1; i < n1 + n2; ++i) {
        result[i] = l2[i - n1];
    }
}

const int C = 3;

void fill(double result[][C], int l) {
    cout << "On voudrai créer une matrice composé de " << l << " lignes et de " << C << " colonnes" << endl;
    for (int i = 0; i < l; ++i) {
        cout << "Saisissez la ligne numero " << i << " : " << endl;
        fill(result[i], C);
    }
}

void affiche(double result[][C], int l) {
    for (int i = 0; i < l; ++i) {
        affiche(result[i], C);
        cout << endl;
    }
}

void reverse(const double v[][C], int l, double result[][C]) {
    for (int i = 0; i < l; ++i) {
        reverse(v[i], C, result[i]);
    }
}

void flatten(const double v[][C], int l, double result[]) {
    for (int i = 0; i < l; ++i) {
        for (int j = 0; j < l; ++j) {
            result[i * C + j] = v[i][j];
        }
    }


    //ou
//    for (int i = 0; i < l; ++i) {
//        concat(result, i * C, v[i], C, result);
//    }
}


int main() {
    const int L = 3;
    double lv[L][C];
    fill(lv, L);
    affiche(lv, L);
    cout << endl;

    double rlv[L][C];
    reverse(lv, L, rlv);
    affiche(rlv, L);
    cout << endl;

    double l[L * C];
    flatten(lv, L, l);
    affiche(l, L * C);
    cout << endl;

    double rl[L * C];
    flatten(rlv, L, rl);
    affiche(rl, L * C);
    cout << endl;

    return 0;
}

// Main de la Partie 3:
//int main() {
//    const int L = 3;
//    double v[L][C];
//    fill(v, L);
//    affiche(v, L);
//}

// Main de la Partie 2:
//int main () {
//    const int N = 3;
//    double l1[N];
//    fill(l1, N);
//    cout << "l1 = ";
//    affiche(l1, N);
//    cout << endl;
//
//    double l2[N];
//    reverse(l1, N, l2);
//    cout << "l2 = ";
//    affiche(l2, N);
//    cout << endl;
//
//    double l[N + N];
//    concat(l1, N, l2, N, l);
//    cout << "l = ";
//    affiche(l, 2 * N);
//    cout << endl;
//
//    return 0;
//}


// Main Partie 1:
//int main() {
//    const int N = 5;
//    double v[N];
//    fill(v, N);
//    affiche(v, N);
//    cout << endl;
//
//    return 0;
//}



