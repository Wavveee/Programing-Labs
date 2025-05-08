#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Car {
private:
    string mark;
    int dors;
    int windows;
    int wheels;
public:
    Car(string m, int d, int w, int wh) {
        mark = m;
        dors = d;
        windows = w;
        wheels = wh;
    }

    int get_wheels_numb () const{
        return wheels;
    }

    string get_full_info() const {
        return mark + " " +
            "Doors: " + to_string(dors) + ", " +
            "Windows: " + to_string(windows) + ", " +
            "Wheels: " + to_string(wheels);
    }
};


int main() {

    vector<Car> cars = {
        Car("BMW", 4, 6, 4),
        Car("Audi", 4, 6, 4),
        Car("Tesla", 4, 6, 7),
        Car("Ford", 2, 4, 4),
        Car("Toyota", 4, 6, 4),
        Car("Honda", 4, 6, 4),
        Car("Mazda", 2, 4, 4),
        Car("Kia", 4, 6, 4),
        Car("Mercedes", 4, 6, 6),
        Car("Nissan", 4, 6, 5)
    };

    for (const auto& car : cars) {
        if(car.get_wheels_numb() > 4)
            cout << car.get_full_info() << endl;
    }

    return 0;
}