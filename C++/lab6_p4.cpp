#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {

    float x, a, eps, fx_prev, fx, diff;
    int n, max_iter = 100;
    const float M = 1000;

    cout << "Введіть початкове значення x (наближення до 1) "<<endl;
    cin >> x ;
    
    cout << " точність eps "<<endl;
    cin>> eps;

    a = 1.0; // Точка, до якої прямує x
    n = 0;   // Лічильник ітерацій
    diff = M + 1; // Ініціалізуємо різницю значенням, більшим за M

    // Обчислення першого значення функції
    fx_prev = (x * x - x) / (1 - x + log(x));

    // Ітераційний процес
    while (fabs(diff) > eps && fabs(diff) <= M && n < max_iter) {
        // Зменшення x для наближення до 1
        x = (x + a) / 2;

        // Обчислення значення функції
        fx = (x * x - x) / (1 - x + log(x));

        // Різниця між поточним і попереднім значенням
        diff = fx - fx_prev;

        // Оновлення попереднього значення функції
        fx_prev = fx;

        // Лічильник ітерацій
        n++;
    }

    // Перевірка результату
    if (fabs(diff) < eps) {
        cout << "Границі досягнуто: " << fx << endl;
        cout << "Кількість ітерацій: " << n << endl;
    } else if (fabs(diff) > M) {
        cout << "Функція не має скінченної границі у точці x = 1 (різниця перевищує M)." << endl;
    } else {
        cout << "Досягнуто максимальну кількість ітерацій: " << n << endl;
    }

    return 0;
}