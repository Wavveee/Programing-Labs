#include <iostream>
using namespace std;

int main() {
    int m= 5,n= 5;
    float max,min,prod;

    float A[m][n] = {
        {3, 8, -2, 7, 1},
        {5, -3, 4, 0, 2},
        {-1, 6, 3, 9, -4},
        {0, 7, 3, 2, 5},
        {4, -2, 6, -3, 0}
    };
    
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

    return 0;
}