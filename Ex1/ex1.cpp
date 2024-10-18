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

    List l = flatten(lv);
    affiche(l);
    cout << endl;

    List rl = flatten(rlv);
    affiche(rl);
    cout << endl;
}
