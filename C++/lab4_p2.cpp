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
    // крок 0.5
       
    if(x>=-2 && x<=0){
       
        while(x<=0){
            y=sin(x)+exp(x);
           
            cout << setw(5) << fixed << setprecision(2) << x
                 << setw(10) << fixed << setprecision(2) << y << endl;  
            x += step;
        };   
    }else if (x>0 && x<=3){
        while(x<=3){
             y=(M_PI - atan(x)) * (x - 0.3);
             
            cout << setw(5) << fixed << setprecision(2) << x
                 << setw(10) << fixed << setprecision(2) << y << endl;
             x += step;
        }; 
    };
   
    return 0;
}