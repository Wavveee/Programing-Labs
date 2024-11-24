#include <iostream>
using namespace std;

int main() {
    int n= 4,m= 4,i,j;  
    float sum =0;

    float B[m][n] = {
        {3, 4, -1.5, 0},
        {2, -1.2, 3, 1},
        {1, 2, 0.3, 4},
        {1.1, 2.5, 0, 1}
    };


    for (i=0; i<n; i++) {
        for (j= i + 1; j<n; j++) {  
            sum += B[i][j];
        }
    }

    cout << "Sum of elements above the main diagonal " << sum << endl;

    return 0;
}