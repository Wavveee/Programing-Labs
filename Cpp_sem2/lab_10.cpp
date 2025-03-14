#include<iostream>
#include<cmath>
using namespace std;

double product_1(const double a[], const double b[]);
double product_2(const double a[], const double b[]);
double product_3(const double a[], const double b[]);

int main() {
    double x = -3.5;
    double z = 0.5;
    double a[7] = { 0.5, -3.3, 4.1, -1, -6.2, 2.2, 0.8 };
    double b[7] = { -0.5, 2.4, 2.2, 1, 4.4, 2.1, -0.4 };
    double p{ 0 };

    double numerator_1 = product_1(a, b);
    double denominator_1 = log(fabs(1.3 - x * tan(z)));

    double numerator_2 = log(fabs(x - 1.9 * tan(x)));
    double denominator_2 = product_2(a, b);

    double numerator_3 = product_3(a, b);
    double denominator_3 = log(fabs(z * x - 3 * tan(1.2)));

    p = (numerator_1/denominator_1) + (numerator_2/denominator_2) - (numerator_3/denominator_3);

    cout << "Result: " << p << endl;
    return 0;
}

double product_1(const double a[], const double b[]) {
    double result{ 1.0 };
    for (int k = 0; k < 7; k++) {
        result *= cos(b[k]) - a[k] * a[k];
    }
    return result;
}

double product_2(const double a[], const double b[]) {
    double result{ 1.0 };
    for (int k = 1; k < 5; k++) {
        result *= cos(a[k]) - b[k] * b[k];
    }
    return result;
}

double product_3(const double a[], const double b[]) {
    double result{ 1.0 };
    for (int k = 2; k < 7; k++) {
        result *= cos(a[k]) - a[k] * a[k];
    }
    return result;
}