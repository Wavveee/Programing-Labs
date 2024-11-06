#include <iostream>
#include <math.h>
using namespace std;

int main() { 

    float y=0,x_1,delta_x,x_k,x_k_prev;
    int start,end;

    cout << "Enter value for 'start' ";
      cin >> start;
      //3

    cout << "Enter value for 'end' ";
      cin >> end;
      //17

    cout << "Enter value for 'x_1'";
      cin >> x_1;
      //15.3

    cout << "Enter value for 'delta_x'";
      cin >> delta_x;
      //0.05

    x_k= x_1;
    x_k_prev = x_k; 
    for (int k = start; k <= end; ++k) {

        float num = pow(x_k + x_k_prev, 2);
        float denom = fabs(pow(x_k, 3) - pow(x_k_prev, 2));

        y += num / denom;

        x_k_prev = x_k; 
        x_k += delta_x; 
    }

    cout << "Final sum is y= " << y <<endl;

    return 0;
};