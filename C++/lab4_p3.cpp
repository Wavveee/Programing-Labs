#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    float z,y,x,x_step,y_step,x_start,y_start;

    cout << "enter value to 'x'";
        cin >> x;
    cout << "enter value to 'y'";
        cin >> y;

    cout << "enter value of 'x_step'";
        cin >> x_step;
        // 0.3

    cout << "enter value of 'y_step'";
        cin >> y_step;
        // 0.2
 
    x_start= x;
    y_start= y;
    
    cout << "-- -- -- -- -- -- -- -- --"<<endl;
    while(y>=0.5 && y<=1.5){
        x= x_start;
        while(x>=1 && x<=4){
            z=log(cos(x*y-1)+2);

            cout << setw(5) << fixed << setprecision(2) << y
                 << setw(10) << fixed << setprecision(2) << x
                 << setw(10) << fixed << setprecision(2) << z << endl;
            x+=x_step;
        };
        cout << "-- -- -- -- -- -- -- -- --"<<endl;
        y+=y_step;
    };

   return 0;
}