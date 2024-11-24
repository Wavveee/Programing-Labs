#include <iostream>
#include <math.h>
using namespace std;

int main() {

int j,i;
  float X[4] = {5.3, 2.3, 3.6, 7.9},
        Y[4] = {-3.2, -6.3, 3.6, 7.9},
        Z[8];

    for ( i = 0; i < 4; i++) {
        Z[i] = X[i];
    }

    for ( i = 0; i < 4; i++) {
        Z[4 + i] = Y[i];
    }

    cout << "an unsorted merged array Z ( ";
    for ( i = 0; i < 8; i++) {
        cout << Z[i] << " ";
    }
    cout <<")"<< endl;


    for ( i = 0; i < 7; i++) {
    for ( j = 0; j < 7 - i; j++) {
        if (Z[j] > Z[j + 1]) {
            float sort = Z[j];
            Z[j] = Z[j + 1];
            Z[j + 1] = sort;
        }
    }
}

    cout << "sorted array Z ( ";
    for ( i = 0; i < 8; i++) {
        cout << Z[i] << " ";
    }
    cout <<")"<< endl;

    return 0;

return 0;
}