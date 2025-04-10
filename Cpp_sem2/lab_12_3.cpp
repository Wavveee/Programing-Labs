#include<iostream>
#include <string>
#include <cctype>

using namespace std;

bool check_condition(string text);

int main() {
    cout << "Enter the text: ";
    string text;
    cin >> text;

    if (check_condition(text)) {
        cout << "✅ The text matches the pattern!" << endl;
    }
    else {
        cout << "❌ The text does NOT match the pattern." << endl;
    }

    return 0;
}

bool check_condition(string text) {
    int k{ 0 };

    while (k < text.length() && isalpha(text[k])) {
        k++;
    }
    if (k < 1 || k > 9) return false; //k має бути в межах від 1 до 9

    if (k == text.length() - 1 && isdigit(text[k])) {
        int digit = text[k] - '0'; // Перетворити символ цифри на число (за допомогою ASCII-кодів)
        return digit == k;
    }

    return false;
};