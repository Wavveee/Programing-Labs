#include<iostream>
#include<vector>
#include <iomanip>
#include <fstream>

using namespace std;

class Student {
private:
    int number;
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

const string UNFILTERED_F_PATH = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_18_2\\lab-18-2.txt";
const string FILTERED_F_PATH = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_18_2\\lab-18-2( s ).txt";

void create_list(vector<Student>& list, string path);
void filter_list(vector<Student>& list, string path, int condition);

int main() {

    vector<Student> list = {
        Student("Іванчук С.О.  ", 4, 3, 3, 4),
        Student("Панченко І.А. ", 5, 4, 4, 5),
        Student("Заєць О.М.    ", 3, 4, 4, 4),
        Student("Кравченко З.І.", 3, 5, 4, 5),
        Student("Мельник Т.Г.  ", 5, 5, 5, 5),
        Student("Шевченко Р.В. ", 4, 4, 3, 4),
        Student("Данилюк Л.О.  ", 2, 3, 3, 2),
        Student("Бондар О.Є.   ", 4, 5, 4, 5),
        Student("Гриценко І.П. ", 3, 3, 2, 3),
        Student("Сидоренко М.Н.", 5, 4, 5, 4),
    };
    create_list(list, UNFILTERED_F_PATH);

    cout << "How do we filter students?: ";
    int condition{ 0 };
    cin >> condition;
    filter_list(list, FILTERED_F_PATH, condition);

    return 0;
};

void create_list(vector<Student>& list, string path) {
    ofstream file(path);

    for (const auto& s : list) {
        file << s.get_full_info() << endl;
    }

    cout << "list is created" << endl;

    file.close();
}

void filter_list(vector<Student>& list, string path, int condition) {
    ofstream file(path);
    int passed = 0;

    for (const auto& s : list) {
        string result = s.condition_check(condition);

        if(!result.empty()){
            file << result << endl;
            passed++;
        }
        
    };

    cout << "Filtered list is created. Passed students: " << passed << endl;
}