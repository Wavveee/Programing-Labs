#include<iostream>
#include <string>
using namespace std;

const int MONTHS = 12;
const int COMPANIES = 10;

void rand_profit(int arr[MONTHS][COMPANIES], int min_prof = 50000, int max_prof = 100000);

int main() {

    int arr[MONTHS][COMPANIES];
    string months[MONTHS] = { "January", "February", "March", "April", "May", "June","July", "August", "September", "October", "November", "December" };
    string companies[COMPANIES] = { "TechCorp", "InnoSoft", "DataWorks", "CyberNet", "AlphaSys","NextGen", "CloudBase", "AI Solutions", "GreenTech", "QuantumX" };

    rand_profit(arr);

    for (int j = 0; j < COMPANIES; j++) {
        int min_profit = arr[0][j];
        int month_i = 0;

        for (int i = 0; i < MONTHS; i++) {
            if (arr[i][j] < min_profit) {
                min_profit = arr[i][j];
                month_i = i;
            }
        }

        cout <<"'"<<companies[j] << "' lowest profit in " << months[month_i] << " " <<arr[month_i][j] <<endl;
        cout <<endl;
    }


    return 0;
}

void rand_profit(int arr[MONTHS][COMPANIES], int min_prof, int max_prof) {
    srand(time(0));

    for (int i = 0; i < MONTHS; i++) {
        for (int j = 0; j < COMPANIES; j++) {
            arr[i][j] = min_prof + rand() % (max_prof - min_prof + 1);
        }
    }
}