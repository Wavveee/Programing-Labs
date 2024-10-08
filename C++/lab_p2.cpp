#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float A,B,C,bis;
    
    cout << "enter value of 'A'";
    // A=3
        cin >> A;

    cout << "enter value of 'B'";
    // B=4
        cin >> B;

    cout << "enter value of 'C'";
    // C=5
        cin >> C;

    bis=sqrt(A*C*(1-(pow(B,2)/pow((A+C),2))));

    cout << "The bisector coming from the vertex with sides A and C is " << bis <<endl;
    cout << "with A = " << A << "; B = " << B <<"; C = "<< C << ";" <<endl;

   return 0;
}