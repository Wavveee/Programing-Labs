#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() { 

    float x_0,x_next,acc,i=0;

    cout<<"Enter initial value of 'x'"<< endl;
    cin>>x_0;
    // 4.5

    cout<<"Enter accuracy"<< endl;
    cin>>acc;
    // 0.001(epsilon)

    x_next = -pow(x_0, 1.0/3.0) + 6.09;

    while(fabs(x_next - x_0) >= acc){
            
        i++;
        x_0 = x_next;
        x_next = -pow(x_0, 1.0/3.0) + 6.09;
    };

    cout << "The root is  " << x_next << endl;
    cout << "Number of iterations " << i << endl;
    return 0;
}