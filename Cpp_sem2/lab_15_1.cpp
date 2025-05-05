#include<iostream>
#include <iomanip>
#include <vector>
using namespace std;



struct Student {
    int number;
    string full_name;
    int mathAnal;
    int progr;
    int os;
    int algb;
};

void display(vector<Student>);
void sort(vector<Student>& list, vector<Student>& sorted, int condition);

int main() {

    vector<Student> list = {
        {1, "Іванчук С.О.  ", 4, 3, 3, 4},
        {2, "Панченко І.А. ", 5, 4, 4, 5},
        {3, "Заєць О.М.    ", 3, 4, 4, 4},
        {4, "Кравченко З.І.", 3, 5, 4, 5}
    };
   
    display(list);

    cout << "число сртування?" << endl;
    int condition{ 0 };
    cin >> condition;
    cout << endl;

    vector<Student> sorted;
    sort(list, sorted, condition);
    display(sorted);



    return 0;
}

void display(vector<Student> list) {
    cout << left
        << setw(5) << "№"
        << setw(25) << "Прізвище"
        << setw(20) << "Мат.Аналіз"
        << setw(29) << "Програмування"
        << setw(10) << "ОС"
        << setw(15) << "Алгебра"
        << endl;

    cout << string(62, '-') << endl;

    for (const auto& s : list) {
        cout << left << setw(4) << s.number
            << setw(16) << s.full_name
            << right
            << setw(8) << s.mathAnal
            << setw(12) << s.progr
            << setw(11) << s.os
            << setw(10) << s.algb
            << left << endl;
    }
    cout << endl;
}

void sort(vector<Student>& list, vector<Student>& sorted, int condition) {
    sorted.clear();
    for (const auto& s : list) {
        if (s.mathAnal != condition && s.progr != condition && s.algb != condition && s.os != condition)
            sorted.push_back(s);
    }
}