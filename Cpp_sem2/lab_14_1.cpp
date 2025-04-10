#include <iostream>
using namespace std;

float condition [4][4] = {
    {3, 4, -1.5, 0},
    {2, -1.2, 3, 1},
    {1, 2, 0.3, 4},
    {1.1, 2.5, 0, 1}
};

int main() {
    int n, m, i, j;
    float sum = 0;

    cout << "Enter the number of rows (n): ";
    cin >> n;

    cout << "Enter the number of columns (m): ";
    cin >> m;

    float** B = new float*[n]; // вказівник на масив вказівників
    for (i = 0; i < n; i++) {
        B[i] = new float[m];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            B[i][j] = condition[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < m; j++) {
            sum += B[i][j];
        }
    }

    cout << "Sum of elements above the main diagonal: " << sum << endl;

    for (i = 0; i < n; i++) {
        delete[] B[i];
    }
    delete[] B;

    return 0;
}