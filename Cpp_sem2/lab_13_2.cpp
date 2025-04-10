#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int j, i;

    cout << "enter the number of array 'X' elements" << endl;
    int x{ 0 };
    cin >> x;

    cout << "enter the number of array 'Y' elements" << endl;
    int y{ 0 };
    cin >> y;

    cout << "enter the number of array 'Z' elements" << endl;
    int z{ 0 };
    cin >> z;

    float* X = new float [x] { 5.3, 2.3, 3.6, 7.9 };
    float* Y = new float [y] { -3.2, -6.3, 3.6, 7.9 };
    float* Z = new float [z];

    for (i = 0; i < 4; i++) {
        Z[i] = X[i];
    }

    for (i = 0; i < 4; i++) {
        Z[4 + i] = Y[i];
    }

    cout << "an unsorted merged array Z ( ";
    for (i = 0; i < 8; i++) {
        cout << Z[i] << " ";
    }
    cout << ")" << endl;


    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7 - i; j++) {
            if (Z[j] > Z[j + 1]) {
                float sort = Z[j];
                Z[j] = Z[j + 1];
                Z[j + 1] = sort;
            }
        }
    }

    cout << "sorted array Z ( ";
    for (i = 0; i < 8; i++) {
        cout << Z[i] << " ";
    }
    cout << ")" << endl;

    delete[] X;
    delete[] Y;
    delete[] Z;

    return 0;
}