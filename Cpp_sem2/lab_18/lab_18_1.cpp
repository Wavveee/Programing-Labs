#include<iostream>
#include<vector>
#include <string>
using namespace std;

class Student {
private:
    string full_name;
    int mathAnal;
    int progr;
    int os;
    int algb;
public:
    Student(string name, int ma, int pr, int o, int al) {
        full_name = name;
        mathAnal = ma;
        progr = pr;
        os = o;
        algb = al;
    }

    void setName(string newName) {
        full_name = newName;
    }

    void set_grades(int mathAnal_grade, int progr_grade, int os_grade, int algb_grade) {
        mathAnal = mathAnal_grade;
        progr = progr_grade;
        os = os_grade;
        algb = algb_grade;
    }

    string get_name() const {
        return full_name;
    }

    string get_full_info() const {
        return full_name + " " +
            "MathAnalysis: " + to_string(mathAnal) + ", " +
            "Programing: " + to_string(progr) + ", " +
            "OS: " + to_string(os) + ", " +
            "Algebra: " + to_string(algb);
    }

    string condition_check(int condition) const {
        if (mathAnal != condition && progr != condition && algb != condition && os != condition)
            return get_full_info();
        return "";
    }

};

const vector<Student> INIT_LIST = {
    Student("Ivanchuk S.O.", 4, 3, 3, 4),
    Student("Panchenko I.A.", 5, 4, 4, 5),
    Student("Zaiets O.M.", 3, 4, 4, 4),
    Student("Kravchenko Z.I.", 3, 5, 4, 5)
};

int main() {

    for (auto& s : INIT_LIST) {
        cout << s.get_full_info() << endl;
    }

    cout << "Condition: " << endl;
    int condition{ 0 };
    cin >> condition;
    cout << endl;

    int counter;
    for (int i = 0; i < INIT_LIST.size(); i++) {
        string result = INIT_LIST[i].condition_check(condition);
        if (!result.empty()) {
            counter++;
            cout << result << endl;
        }
    }

    cout << "Number of students who passed the condition: " << counter << endl;

    return 0;
}
