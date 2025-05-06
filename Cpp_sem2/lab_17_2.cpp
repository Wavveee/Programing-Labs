#include<iostream>
#include<stack>

using namespace std;

void display_stack(stack<char> stack);

int main() {
    stack<char> characters;
    stack<char> reversed;

    while (true) {
        cout << "enter character to add to stack: " << endl;
        char newChar;
        cin >> newChar;

        if (newChar == '.') break;
        characters.push(newChar);
    }

    display_stack(characters);

    while(!characters.empty()){
        reversed.push(characters.top());
        characters.pop();
    }

    display_stack(reversed);

    return 0;
}

void display_stack(stack<char> stack) {
    cout << "Elements in stack: " << endl;
    while (!stack.empty()) {
        cout << stack.top() << endl; // вивести верхній елемент
        stack.pop(); // забрати верхній елемент
    }
};