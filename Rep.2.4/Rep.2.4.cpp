#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введіть число N: ";
    cin >> n;

    // Перевірка кожного числа від 2 до N
    for (int i = 2; i <= n; ++i) {
        bool isPrime = true;  // Припускаємо, що число просте

        // Перевірка, чи є число i простим
        for (int j = 2; j * j <= i; ++j) {
            if (i % j == 0) {
                isPrime = false;  // Якщо знайдено дільник, то число не є простим
                break;            // Вихід з внутрішнього циклу
            }
        }

        // Якщо isPrime залишилось true, то це просте число
        if (isPrime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
