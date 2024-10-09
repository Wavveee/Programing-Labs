#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float M_x,M_y,r1,r2,d;

    // r1 - внутрішній радіус
    r1= 1;

    // r2 - зовнішній радіус
    r2= 2;


    cout << "enter value of 'M_x'";
        cin >> M_x;

    cout << "enter value of 'M_y'";
        cin >> M_y;

    // відстань від точки до центру кола(у квадраті)
    d=M_x*M_x + M_y*M_y;

    // cout << d;

    if(r1*r1 < d < r2*r2){
        cout << "point M ("<< M_x <<";"<<" "<< M_y <<") belongs to our figure (ring)";
    }else{
        cout << "point M ("<< M_x <<";"<<" "<< M_y <<") does not belongs to our figure (ring)";
    };

    return 0;
}