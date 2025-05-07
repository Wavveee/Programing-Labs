#include<iostream>
#include <forward_list>
#include <cstdlib>
#include <ctime>

using namespace std;

struct Element {
    int num;           // поле даних
    Element* next;   // вказівник на наступний елемент
};

void add_elem(Element*& first, Element*& last, int value);
void print_list(Element* first);
int find_max_recursive(Element* node);

int main() {

    srand(time(nullptr));

    Element* first = nullptr;
    Element* last = nullptr;
    for (int i = 0; i < 15; ++i) {
        int val = rand() % 100 + 1;
        add_elem(first, last, val);
    }

    print_list(first);

    int maxValue = find_max_recursive(first);
    cout << "\nMax value in list: " << maxValue << endl;

    return 0;
}

void add_elem(Element*& first, Element*& last, int value) {
    Element* c = new Element; // Виділяється динамічна пам’ять під новий елемент
    c->num = value;      // Присвоюємо передане значення.
    c->next = nullptr; // це останній елемент, тому next = nullptr

    if (first == nullptr) {
        first = c;
        last = c;
    } else {
        last->next = c; // попередній останній вказує на новий елемент.
        last = c; // новий елемент стає останнім.
    }
}

void print_list(Element* first){
    Element* c= first;

    cout << "list: ";
     while(c != nullptr ){
        cout << c->num << " ";
        c = c->next;
     }

}

int find_max_recursive(Element* node){
    if (node == nullptr) return INT_MIN;
    int nextMax = find_max_recursive(node->next);
    return max(node->num, nextMax);
}