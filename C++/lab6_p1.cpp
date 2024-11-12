#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

float y_next,y,eps,i,x,n;

	cout<<"Enter initial value of 'y'"<<endl;
	cin>>x;
    // 9.26

    cout<<"Enter value of 'n'"<<endl;
    cin>>n;
    // 3

    cout<<"Enter the accuracy"<<endl;
    cin>>eps;
    // 0.1

	y=x;

    y_next=(1.0/n)*(x/pow(y, n-1)+(n-1)*y);

    while (fabs(y_next-y) <= eps){
			y=y_next;

			y_next=(1.0/n)*(x/pow(y, n-1)+(n-1)*y);
	};

    cout<<"the root of " << n <<" power from " << x <<" approximately equal to " << y_next <<endl;
    cout<<"accuracy is "<< eps <<endl;
 
return 0;
}