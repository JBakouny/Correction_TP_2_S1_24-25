// 080064

#include <iostream>
#include <vector>
#include "functions.h"
using namespace std; 

int main() {
    List l1 = create(5);
    cout << "l1 = ";
    affiche(l1);
    cout << endl;

    List l2 = reverse(l1);
    cout << "l2 = ";
    affiche(l2);
    cout << endl;

    List l = concat(l1, l2);
    cout << "l = ";
    affiche(l);
    cout << endl;

    return 0;
}
