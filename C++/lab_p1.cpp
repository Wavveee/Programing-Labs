#include <iostream>
#include <math.h>
using namespace std;

int main() {
   
   float c, a, x, y, z;

   // c = 4.5;
   cout << "enter the value of <c>";
      cin >> c; 

   //a = 2.01;
   cout << "enter the value of <a>";
      cin >> a; 

   x=(log10(abs(c+a)) / (M_PI / 2 - atan(M_PI / a)) + 0.17);

   y=(pow(sin(pow(a, 3) / 2), 2) - (1 / tan(c / 4))) / (log(abs(a)) + log(pow(c, 2)));

   z=(c*exp(-2.5*x+pow(y,2))-pow(c * x, 1.0 / 3.0));

  cout << "c = " << c << ", a = " << a << ", x=" << x << ", y=" << y << ", z=" << z << endl;



   return 0;
}