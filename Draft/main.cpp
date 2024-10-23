#include <iostream>
#include <string>
using namespace std;


const int N = 3;
const int M = 4;

void fill(int t[][M]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            t[i][j] = i + j;
        }
    }
}

void affiche(const int A[][M]) {
    for(int i=0;i<N;++i){
        for (int j = 0; j < M; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}


int main() {

    int A[N][M];

    fill(A);

    affiche(A);



    return 0;
}






