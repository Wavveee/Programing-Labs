#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() { 
    float y,p,S,i,i_end,n,P;
 
    cout << "Enter a initial value for calculating the amount ";
    cin >> n;
    // 3

    cout << "Enter a number of repetitions to determine the product ";
    cin >> i_end;
    // 12
   
   // Сумма
    S=0;;
    for(i=n; i<=i_end; i++) {
        
        y=(i+2)/((i+4)*(i+6));

        S+=y;

        // cout << "i= " << i << "\t"<< "y= " << y << endl;
    };

    cout << "S= " << S <<endl;

    //Добуток
    P=1;
    for(i=5; i<=11; i++){

        p=pow(-1,i)*((i*i + 3)/(3*i+2));

        P*=p;

        // cout << "i= " << i << "\t"<< "P= " << P << endl;
    };

    cout << "P= " << P <<endl;

    return 0;
};