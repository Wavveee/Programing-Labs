#include<iostream>
#include<math.h>
#include <fstream>
#include <sstream>
using namespace std;

void fill_file_f(const string& path);
void fill_file_g(const string& in_path, const string& out_path);

int main() {
    string path_f = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_16\\lab-16-1( f ).txt";
    string path_g = "E:\\NUWGP\\Programing\\labs\\Programing-Labs\\Cpp_sem2\\lab_16\\lab-16-1( g ).txt";

    fill_file_f(path_f);
    fill_file_g(path_f, path_g);

    return 0;
}

void fill_file_f(const string& path) {
    ofstream file(path);

    if (file.is_open()) {
        for (size_t i{ 1 }; i <= 150; i++) {
            file << i << endl;
        }

        file.close();
        cout << "File changed\n";
    }
    else {
        cerr << "error!\n";
    }

    file.close();
};

void fill_file_g(const string& in_path, const string& out_path) {
    ifstream infile(in_path);
    ofstream outfile(out_path);

    string line;
    while (getline(infile, line)) {
        int num = stoi(line);
        int root = sqrt(num);
            if (root * root == num) {  
                outfile << num << endl;
            }
    }

    infile.close();
    outfile.close();
    cout << "File G is filled" << endl;

};