#include<iostream>
#include <list>
#include <iomanip>
#include <cctype>
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

const vector<Student> INIT_LIST = {
    {1, "Ivanchuk S.O.  ", 4, 3, 3, 4},
    {2, "Panchenko I.A. ", 5, 4, 4, 5},
    {3, "Zaiets O.M.    ", 3, 4, 4, 4},
    {4, "Kravchenko Z.I.", 3, 5, 4, 5}
};

void create_list(vector<Student> init_list, list<Student>& students);
void display_list(list<Student> students);
void run_proces(list<Student>& students);
void display_menu();
void add_student(list<Student>& students);
void remove_student(list<Student>& students);
void clr_list(list<Student>& students);

int main() {

    list<Student> students;
    create_list(INIT_LIST, students);
    display_list(students);
    run_proces(students);

    return 0;
}

void create_list(vector<Student> init_list, list<Student>& students) {
    for (auto& s : init_list) {
        students.push_back(s);
    }
};

void run_proces(list<Student>& students) {
    display_menu();

    while (true) {
        cout << "\nEnter your choice: ";
        char option;
        cin >> option;
        char opt_upper = toupper(option);

        switch (opt_upper)
        {
        case 'A': add_student(students);
            break;
        case 'R': remove_student(students);
            break;
        case 'C': clr_list(students);
            break;
        case 'S': display_list(students);
            break;
        case 'M': display_menu();
            break;
        case 'Q': cout << "Goodbye";
            break;

        default:
            cout << "Something went wrong...." << endl;
            cout << "try again" << endl;
            break;
        }

        if (opt_upper == 'Q') break;
    }
};

void display_menu() {
    cout << "Options:" << endl;
    cout << "'A' to add student" << endl;
    cout << "'R' to remove student" << endl;
    cout << "'C' to clear the list" << endl;
    cout << "'S' to show the list" << endl;
    cout << "'M' to show menu again" << endl;
    cout << "'Q' to end proces" << endl;
    cout << endl;
};

void display_list(list<Student> students) {

    if (students.size() == 0) {
        cout << "your list is empty now" << endl;
    }
    else {

        cout << "List: " << endl;
        for (Student s : students) {
            cout << s.number << " " << s.full_name << endl;
        }
        cout << endl;
    }

};

void add_student(list<Student>& students) {
    cout << "Enter nesesary info" << endl;

    Student student;
    int student_numb = students.size();
    student.number = ++student_numb;

    cout << "Name: ";
    getline(cin >> ws, student.full_name);

    cout << "Math Analysys: ";
    cin >> student.mathAnal;

    cout << "Pgraming: ";
    cin >> student.progr;

    cout << "OS: ";
    cin >> student.os;

    cout << "Algebra: ";
    cin >> student.algb;

    students.push_back(student);

};
void remove_student(list<Student>& students) {
    cout << "enter  number of student to delete: ";
    int del_num;
    cin >> del_num;

    if (del_num > students.size() || del_num < 1) {
        cout << "Wrong number";
    }
    else {
        students.remove_if([del_num](const Student& s) {
            return s.number == del_num;
            });
        cout << "Student removed.\n";
    }

    int i = 1;
    for (auto& s : students) {
        s.number = i++;
    }
};
void clr_list(list<Student>& students) {
    students.clear();
    cout << "list cleared" << endl;
};