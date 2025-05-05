#include<iostream>
#include <iomanip>
#include<vector>
using namespace std;

struct MaleData {
    bool is_military;
};

struct FemaleData {
    int num_children;
    bool is_married;
};

struct Worker {
    string full_name;
    int birth_year;
    string address;
    bool is_female;
    double salary;

    MaleData male;
    FemaleData female;
};

vector<Worker> list = {
    {"Ivanchuk S.O.", 1980, "Rivne", true, 20000, {}, {2, true}},
    {"Panchenko I.A.", 1982, "Lviv", false, 25000, {true}, {}},
    {"Zayets O.M.", 1985, "Kyiv", true, 18000, {}, {1, false}},
    {"Kravchenko Z.I.", 1978, "Odesa", false, 22000, {false}, {}},
    {"Semenchuk L.M.", 1990, "Kharkiv", true, 23000, {}, {0, true}}
};

void display(vector<Worker> list);
void add_worker(vector<Worker>& list);
void find_condition(vector<Worker> list);

int main() {
    display(list);

    // add_worker(list);
    // display(list);

    vector<Worker> list_condition;
    find_condition(list);

    return 0;
}

void display(vector<Worker> list) {
    cout << left
        << setw(18) << "Surname"
        << setw(8) << "Year"
        << setw(12) << "Address"
        << setw(10) << "Gender"
        << setw(12) << "Salary"
        << setw(10) << "Military"
        << setw(8) << "Child"
        << setw(10) << "Married" << endl;

    cout << string(80, '-') << endl;

    for (const auto& w : list) {
        cout << left
            << setw(18) << w.full_name
            << setw(8) << w.birth_year
            << setw(12) << w.address
            << setw(10) << (w.is_female ? "Female" : "Male")
            << setw(12) << w.salary
            << setw(10) << (w.is_female ? "-" : (w.male.is_military ? "yes" : "no"))
            << setw(8) << (w.is_female ? to_string(w.female.num_children) : "-")
            << setw(10) << (w.is_female ? (w.female.is_married ? "yes" : "no") : "-")
            << endl;
    }
    cout << endl;
}

void add_worker(vector<Worker>& list) {
    cout << "Enter nesesary info" << endl;

    Worker Worker;
    cout << "Surname: ";
    getline(cin >> ws, Worker.full_name); // ws --> чистить пробіли

    cout << "Year: ";
    cin >> Worker.birth_year;

    cout << "Address: ";
    getline(cin >> ws, Worker.address);

    cout << "Gender(1 or 0): ";
    cin >> Worker.is_female;

    cout << "Salary: ";
    cin >> Worker.salary;

    if (Worker.is_female) {
        cout << "Child: ";
        cin >> Worker.female.num_children;

        cout << "Married(1 or 0): ";
        cin >> Worker.female.is_married;
    }
    else {
        cout << "Military(1 or 0): ";
        cin >> Worker.male.is_military;
    }

    list.push_back(Worker);
};

void find_condition(vector<Worker> list) {
    for (const auto& w : list) {
        if (w.female.num_children >= 1 && w.female.is_married == false)
            cout << w.full_name << " " << w.salary << endl;

    }
};