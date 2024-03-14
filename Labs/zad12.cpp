/*
Од тастатура се чита еден 2-цифрен број. Да се формира број чиј што цифри ќе бидат подредени од десно кон лево во растечки редослед.и да се испечати на екран неговиот
степен.

Пример: Од бројот 12 треба да се формира бројот 21 и да се испечати на екран неговиот степен (441).

Напомена: Бројот секогаш ќе е двоцифрен.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main () {
    int number;
    cin >> number;
    int lastNumber = number % 10;
    int firstNumber = number / 10;
    if (lastNumber > firstNumber) {
        int tmp = firstNumber;
        firstNumber = lastNumber;
        lastNumber = tmp;
    }
    firstNumber *= 10;
    int wholeNumber = firstNumber + lastNumber;
    cout << std::pow(wholeNumber, 2);
    return 0;
}
