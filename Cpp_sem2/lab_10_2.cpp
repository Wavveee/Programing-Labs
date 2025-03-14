#include<iostream>
#include<cmath>

using namespace std;

double product_1(int n, int x[]);
double product_2(int n, int x[]);
unsigned long long factorial(int n);

int main() {
    int n{ 3 };
    int x[7] = { 5,6,7,3,9,8,4 };
    double z{ 0 };

    double numerator_1 = factorial(pow(5, n) - 4) + 8;
    double denominator_1 = factorial(pow(2,n)+1);
    double numerator_2 = product_1(n, x);
    double denominator_2 = product_2(n, x);

    z = (numerator_1/denominator_1) + (numerator_2/denominator_2);

    cout << "Result: "<< z <<endl;
    return 0;
}

double product_1(int n, int x[]) {
    double result{ 1.0 };
    unsigned long long fact_n = factorial(n);

    for (int i = 0; i < 7; i++) {
        result *= fact_n + x[i];
    }

    return result;
}

double product_2(int n, int x[]) {
    double result{ 1.0 };

    for (int i = 0; i < 7; i++) {
        result *= cbrt(x[i]);
    }

    return result;
}

unsigned long long factorial(int n) {
    return (n <= 1) ? 1 : n * factorial(n - 1);
}