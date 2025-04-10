#include<iostream>
#include <string>
using namespace std;

const int SIZE = 20;
string init_arr[SIZE] = { "Toyota", "Honda", "Ford", "Chevrolet", "BMW",
    "Mercedes", "Audi", "Volkswagen", "Hyundai", "Kia",
    "Nissan", "Mazda", "Subaru", "Lexus", "Jeep",
    "Volvo", "Porsche", "Ferrari", "Lamborghini", "Peugeot" };
void show_arr(string arr[], int numb);

int main() {
    cout << "We have" << endl;
    show_arr(init_arr, SIZE);

    while (true) {

        cout << "how many we show this time?" << endl;
        int numb{ 0 };
        cin >> numb;

        if (numb > 0 && numb <= SIZE) {
            show_arr(init_arr, numb);
        }
        else {
            cout << "goodbye" << endl;
            break;
        }
    }

    return 0;
}

void show_arr(string arr[], int numb) {
    for (int i = 0; i < numb; ++i) {
        cout << i + 1 << ". " << arr[i] << std::endl;
    }
};