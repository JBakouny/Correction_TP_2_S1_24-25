// 080064

#include <iostream>
#include <vector>
#include "functions.h"
using namespace std; 




int main() {
    vector<double> v = create(3);
    cout << "v = ";
    affiche(v);
    cout << endl;

    return 0;
}