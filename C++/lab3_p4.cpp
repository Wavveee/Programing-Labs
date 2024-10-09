#include <iostream>
#include <math.h>
using namespace std;

int main() { 

 float a,b,c,avr,b_prof;
 char comp_b; // компанія з найбільшим доходом


 cout <<"enter profit of company 'a'";
    cin >> a;

 cout <<"enter profit of company 'b'";
    cin >> b;

 cout <<"enter profit of company 'c'";
    cin >> c;

 // середній дохід
 avr= (a+b+c)/3;

 if(a >= b && a >= c) {
    b_prof= a;
 } else if (b >= a && b >= c) {
    b_prof= b;
 } else {
    b_prof= c;
 };
 
 if (b_prof == a) {
     comp_b = 'a';
 } else if (b_prof == b) {
     comp_b = 'b';
 } else {
     comp_b = 'c';
 }

 cout<<"profit of company 'a': "<< a <<" | profit of company 'b': "<< b <<" | profit of company 'c': "<< c <<endl;
 cout<<"biggest profit "<< b_prof << "(comany '" << comp_b << "')" <<endl;
 cout<<"average profit "<< avr <<endl;
 cout<<"difference 'biggest' from 'average' "<< b_prof-avr <<endl;

 return 0;
}