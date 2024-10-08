#include <iostream>
#include <math.h>
using namespace std;

int main() {

    float x,y;

    cout << "enter value of 'x'" <<endl;
        cin >> x;
    if (x > 0 && x <= 1) {

      y= -atan(x + M_PI) / (x * x);

    } else if(x > 1 && x <10) {

      y=log(abs(pow(x,2)));

    } else if (x <= 0 || x >= 10){

      y=exp(-x);

    } else {
       cout << "incorrect value x!" << endl;
        return 1; 
    }

    cout << "specified x: " << x << endl;
    cout << "func-value y(x): " << y << endl;

    return 0;
}