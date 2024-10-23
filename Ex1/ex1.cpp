// 080064

#include <iostream>
#include <vector>
#include "functions.h"
using namespace std; 

int main() {

    ListVector lv = createListVector(3);
    affiche(lv);
    cout << endl;

    ListVector rlv = reverse(lv);
    affiche(rlv);
    cout << endl;

    std::array<double, N* N> l = flatten(lv);
    cout << "[ ";
    for (auto x : l) {
        cout << x << " ";
    }
    cout << "]";
    cout << endl;

    std::array<double, N* N> rl = flatten(rlv);
    cout << "[ ";
    for (auto x : rl) {
        cout << x << " ";
    }
    cout << "]";
    cout << endl;
}
