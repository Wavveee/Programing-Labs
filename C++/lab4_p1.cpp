#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() { 

    float y,x,start_x,end_x,n,step; // n - кінець для "for"

    cout<<"enter value of 'start_x'";
        cin>> start_x;
    // початок для while  2.3
    // початок для for  1.2

    cout<<"enter value of 'end_x'";
        cin>> end_x;
    // кінець для while  5.4
    // кінець для for 0

    cout<<"Enter the step to change the argumen ";
        cin>> step;
    
    x= start_x;

    while(x <= end_x){
        y = (x + cos(2*x)) / (3*x);

        cout << "value '" << x << "'   result '"<< y <<"'"<<endl;

        x += step;
    };
    
    // cout<<"Enter the number of repetitions ";
    //     cin>> n;

    // for (float i= 0; i < n; i++) {
    //     y = (x + cos(2*x)) / (3*x);

    //     cout << setw(5) << fixed << setprecision(2) << x
    //          << setw(10) << fixed << setprecision(2) << y << endl;

    //     x += step;
    // };

    return 0;
}




// таблиця

//#include <iomanip>
// cout << setw(5) << fixed << setprecision(2) << x
//      << setw(10) << fixed << setprecision(2) << y << endl;

// setw(n) --> визначає ширину поля для виводу.
// setprecision(n) --> задає кількість знаків після коми.
// fixed --> фіксує формат числа (без наукової нотації).
// left/right --> задають вирівнювання.