#include <iostream>
#include <math.h>
using namespace std;

int main() {

int n,i;
float avr,sum=0;

cout << "enter the number of array elements"<<endl;
    cin >> n;
float Z[n];

cout << "enter the elements of your array"<<endl;
for(i=0; i<n; i++) {
    cout << "enter element " << i + 1 <<endl;
        cin >> Z[i];
};


for(i=0; i<n; i++){
    sum+=Z[i];
}

avr=sum/n;

cout << "your arrey (";
for(i=0; i<n; i++)
cout << " " << Z[i];
cout <<" )"<<endl;

cout <<"average salary "<<avr<<endl;
    return 0;
}