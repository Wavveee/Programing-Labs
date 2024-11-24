#include <iostream>
using namespace std;

int main() {

    int i,j,m=4,n=6;

    float A[m][n] = { 
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24}
    };
    float B[n][m];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    cout << "initial matrix" << endl;
     for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

     cout << "transposed matrix" << endl;
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}