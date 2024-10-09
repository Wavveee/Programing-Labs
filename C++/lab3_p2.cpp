#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float k,l,n,m,p;

    cout << "enter value of 'k'(group number)" ;
        cin >> k;

    cout << "enter value of 'l'(variant number)" ;
        cin >> l;

    n=(l-2*k)/2;

    m=(2*l+k)/l;

    p=l*k-9.3;

    if(abs(n) < 5){
        cout << "value of 'n': "<< n << " |square of 'n'"<< n*n <<endl;
    };

    if(abs(m) < 5){
        cout << "value of 'm': "<< m << " |square of 'm'"<< m*m <<endl;
    };

    if(abs(p) < 5){
        cout << "value of 'p': "<< p << " |square of 'p'"<< p*p <<endl;
    };

    if(abs(n) >= 5 && abs(m) >= 5 && abs(p) >= 5){
        cout << "no module of numbers 'n' 'm' 'p' is greater than 5" << n <<endl;
    };

    cout << "entered value of 'k'(group number): "<< k <<"\nentered value of 'l'(variant number): "<< l <<endl;
    return 0;
}