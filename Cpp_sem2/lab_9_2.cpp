#include<iostream>
using namespace std;

const int BUILDINGS = 3;
const int FLOORS = 5;
const int ROOMS = 10;

void rand_people(int arr[BUILDINGS][FLOORS][ROOMS], int min_p = 0, int max_p = 5);

int main() {

    int hotel[BUILDINGS][FLOORS][ROOMS];
    rand_people(hotel);

    // for (int i = 0; i < BUILDINGS; i++) {
    //     cout << "--------------------------------"<< endl;
    //     cout << "Building number: " << i + 1 << endl;
    //     cout << "--------------------------------"<< endl;
    //     for (int j = 0; j < FLOORS; j++) {
    //         cout << "--------------------------------"<< endl;
    //         cout << "Floor number: " << j + 1 << endl;
    //         cout << "--------------------------------"<< endl;
    //         for (int k = 0; k < ROOMS; k++) {
    //             cout << "Room number: " << k + 1 << " (" << hotel[i][j][k] << ")" << endl;
    //         }
    //     }
    // }

    cout << "Enter building index: ";
    int b_index{ 0 };
    cin >> b_index;

    cout << "Enter floor index: ";
    int f_index{ 0 };
    cin >> f_index;

    int peple_on_f{ 0 };
    if (b_index > BUILDINGS || b_index < 0) {
        cout << "invalid index of building" << endl;
    }
    else if (f_index > FLOORS || f_index < 0) {
        cout << "invalid index of floor" << endl;
    }
    else {
        for (int k = 0; k < ROOMS; k++) {
            peple_on_f += hotel[b_index][f_index][k];
        }

        cout << "Building " << b_index + 1 << " floor " << f_index + 1 << " has " << peple_on_f << " people"<< endl;
    }

    return 0;
}

void rand_people(int arr[BUILDINGS][FLOORS][ROOMS], int min_p, int max_p) {
    srand(time(0));

    for (int i = 0; i < BUILDINGS; i++) {
        for (int j = 0; j < FLOORS; j++) {
            for (int k = 0; k < ROOMS; k++) {
                arr[i][j][k] = min_p + rand() % (max_p - min_p + 1);
            }
        }
    }
}