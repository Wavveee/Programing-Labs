#include <iostream>
#include <math.h>
using namespace std;

int main() {

int poz=0,neg=0,n,i;

cout << "enter the number of array elements"<<endl;
    cin >> n;

float A[n];

cout << "enter the elements of your array"<<endl;


for(i=0; i<n; i++) {
    cout << "enter element " << i + 1 <<endl;
        cin >> A[i];
};

for(i=0; i<n; i++){
    if(A[i] > 0)
        poz+=1;
    else
        neg+=1;
    
        
};

cout << "your arrey (";
for(i=0; i<n; i++)
cout << " " << A[i];
cout <<" )"<<endl;

cout <<"number of posive elemets "<<poz<<endl;
cout <<"number of negative elements "<<neg<<endl;
    return 0;
}