#include<iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string original = "Hello123 world 123test 123!";
    string result = "";

    for (char ch : original) {
        if (isalpha(ch) || ch == ' ') {
            result += ch;
        }
    }

    cout << "Original string: " << original << endl;
    cout << "Filtered string: " << result << endl;

    return 0;
}

// isalpha(ch) — перевіряє, чи символ є літерою (A-Z, a-z).
