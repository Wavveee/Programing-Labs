#include<iostream>
#include<vector>
#include <iomanip>
#include <fstream>

using namespace std;

struct Student {
    int number;
    string full_name;
    int mathAnal;
    int progr;
    int os;
    int algb;
};

const string UNFILTERED_F_PATH = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_16_2\\lab-16-2.txt";
const string FILTERED_F_PATH = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_16_2\\lab-16-2( s ).txt";

void create_list(vector<Student>& list, string path);
void filter_list(vector<Student>& list, vector<Student>& filtered, int condition);

int main() {
    vector<Student> list = {
        {1, "Іванчук С.О.  ", 4, 3, 3, 4},
        {2, "Панченко І.А. ", 5, 4, 4, 5},
        {3, "Заєць О.М.    ", 3, 4, 4, 4},
        {4, "Кравченко З.І.", 3, 5, 4, 5},
        {5, "Мельник Т.Г.  ", 5, 5, 5, 5},
        {6, "Шевченко Р.В. ", 4, 4, 3, 4},
        {7, "Данилюк Л.О.  ", 2, 3, 3, 2},
        {8, "Бондар О.Є.   ", 4, 5, 4, 5},
        {9, "Гриценко І.П. ", 3, 3, 2, 3},
        {10, "Сидоренко М.Н.", 5, 4, 5, 4}
    };

    create_list(list, UNFILTERED_F_PATH);

    cout << "How do we filter students?: ";
    int condition{ 0 };
    cin >> condition;

    vector<Student> filtered;
    filter_list(list, filtered, condition);
    create_list(filtered, FILTERED_F_PATH);

    return 0;
}

void create_list(vector<Student>& list, string path) {
    ofstream file(path);

    file << left
        << setw(5) << "№"
        << setw(25) << "Прізвище"
        << setw(20) << "Мат.Аналіз"
        << setw(29) << "Програмування"
        << setw(10) << "ОС"
        << setw(15) << "Алгебра"
        << endl;

    file << string(62, '-') << endl;

    for (const auto& s : list) {
        file << left << setw(4) << s.number
            << setw(16) << s.full_name
            << right
            << setw(8) << s.mathAnal
            << setw(12) << s.progr
            << setw(11) << s.os
            << setw(10) << s.algb
            << left << endl;
    }

    cout << "list is created" << endl;

    file.close();
};

void filter_list(vector<Student>& list, vector<Student>& filtered, int condition) {
    filtered.clear();
    int passed = 0;

    if (condition > 5 || condition < 1) {
        cout << "please enter a number between 1 and 5." << endl;
    } else {
        for (const auto& s : list) {
            if (s.mathAnal != condition && s.progr != condition && s.algb != condition && s.os != condition){
                filtered.push_back(s);
                passed++;
            }
        }

        cout << "Passed students: " << passed << endl;
    }

};