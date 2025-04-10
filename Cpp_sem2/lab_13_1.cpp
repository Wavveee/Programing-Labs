#include <iostream>
#include <math.h>
using namespace std;

int main() {

int x,i;

cout << "enter the number of array elements"<<endl;
    cin >> x;
// 7

// Динамічно виділяємо пам’ять
float* B = new float[x];
//"Створи динамічний масив x елементів типу float, і збережи адресу початку цього масиву в змінну B."


cout << "enter the elements of your array"<<endl;
// (6.3;-1.6;1.1;0.1;-2.0;2.3;6.3)

for(i=0; i<x; i++) {
    cout << "enter element " << i + 1 <<endl;
        cin >> B[i];
}


float min = B[0];
for (i = 1; i < x; i++) {
    if (B[i] < min) {
        min = B[i];
    }
}



cout << "your arrey"<<endl;
for(i=0; i<x; i++)
cout << " " << B[i];

cout << "\nlowest element" << min <<endl;

delete[] B;


return 0;
}