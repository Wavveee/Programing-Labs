#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    float y,x,step;
   
    cout << "enter value to 'x'";
        cin >> x;
    cout << "enter value of 'step'";
        cin >> step;

    while (x>=-2 && x<=3) {

        if (x>=-2 && x<=0) {

             y=sin(x)+exp(x);

        } else {

            y=(M_PI - atan(x)) * (x - 0.3);

        };

        cout << setw(5) << fixed << setprecision(2) << x
             << setw(10) << fixed << setprecision(2) << y << endl;
            x += step;

    };
   
    return 0;
}