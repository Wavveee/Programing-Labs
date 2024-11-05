#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() { 
     
      float start,end;

      cout << "Enter a initial value for calculating the product ";
      cin >> start;
      // 1

      cout << "Enter a final value for calculating the product ";
      cin >> end;
      // 20  

    long long product= 1;
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) { 
            product *= i; 
            cout << "Current number: " << i << ", product: " << product << endl;
        }
    }

    cout << "Product of all even numbers: " << product << endl;

    return 0;
};