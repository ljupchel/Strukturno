/*
 *Да се провери дали одреден внесен шестцифрен број е симетричен. Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со претпоследната…
 * Пример за симетрични броеви: 12321, 805508, 999999. Да се врати ДА ако е симетричен, НЕ ако не е симетричен.
 */

#include <iostream>

using namespace std;

int main () {
    int number;
    cin >> number;
    int n1 = number / 100000;
    int n2 = number / 10000 % 10;
    int n3 = number / 1000 % 10;
    int n4 = number % 1000 / 100;
    int n5 = number % 100 / 10;
    int n6 = number % 10;
    if (n3 == n4 && n2 == n5 && n1 == n6) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}