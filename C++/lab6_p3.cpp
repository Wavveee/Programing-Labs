#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    float x, an, pn, s, eps,i=0;
    int k;

    cout << "Enter epsilon ";
    cin >> eps;
    x=M_PI/6;

    k = 1;                
    an = x;               
    s = an;               
    pn = 1;               

    while (fabs(an) > eps) {
        pn = -x * x / (2 * k * (2 * k + 1)); 
        an *= pn;                        
        s += an;                         
        k += 1;                           
        i++;
    }

   
    cout << "sin(" << x << ") = " << s << endl;
    cout << "number of iterations: " << i <<endl;

return 0;
}