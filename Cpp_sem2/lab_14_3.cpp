#include<iostream>
using namespace std;

float condition[4][6] = {
    {1, 2, 3, 4, 5, 6},
    {7, 8, 9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18},
    {19, 20, 21, 22, 23, 24}
};

int main() {
    int m, n;

    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    float** A = new float*[m];
    for (int i = 0; i < m; i++) {
        A[i] = new float[n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            A[i][j] = condition[i][j];
        }
    }

    float** B = new float*[n]; 
    for (int i = 0; i < n; i++) {
        B[i] = new float[m]; 
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    cout << "Initial matrix A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Transposed matrix B:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }


    for (int i = 0; i < m; i++) {
        delete[] A[i];
    }
    delete[] A;

    for (int i = 0; i < n; i++) {
        delete[] B[i];
    }
    delete[] B;

    return 0;
}