#include <iostream>
using namespace std;

float condition[5][5] = {
    {3, 8, -2, 7, 1},
    {5, -3, 4, 0, 2},
    {-1, 6, 3, 9, -4},
    {0, 7, 3, 2, 5},
    {4, -2, 6, -3, 0}
};

int main() {
    int m,n;
    float max,min,prod;

    cout << "Enter number of rows (m): ";
    cin >> m;
    cout << "Enter number of columns (n): ";
    cin >> n;

    float** A = new float*[m]; 
    for (int i = 0; i < m; i++) {
        A[i] = new float[n]; 
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = condition[i][j];
        }
    }
    
    max = A[0][0];
    min = A[0][0];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] > max) {
                max = A[i][j];
            }
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }

    prod = max * min;

    cout <<"maximum "<<max<<endl;
    cout <<"minimum "<<min<<endl;
    cout << "The product of the maximum and minimum elements " << prod << endl;

    for (int i = 0; i < m; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}