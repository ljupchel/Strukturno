/*
Од тастатура се читаат непознат број на позитивни цели броеви (со максимум 5 цифри) се додека не се внесе нешто различно од број. За секој број треба да се најде позицијата
(од десно на лево) на првото појавување на најголемата цифра во составот на бројот (цифрата на единици се наоѓа на позиција 0). Потоа, да се испечати статистика за позициите
на најдените цифри со максимална вредност во следниот формат:

[позиција]: [вкупно броеви чија максимална цифра се наоѓа на таа позиција]

0: 2

1: 3

2: 1

3: 1

4: 1


за броевите 97654 48654 12345 12343 1263 12443 12643 12777
 */
#include <iostream>

using namespace std;

int main() {
    int number;
    int counter = 0;
    int counterForPosition = 0;
    int counterForZero = 0;
    int counterForOne = 0;
    int counterForTwo = 0;
    int counterForThree = 0;
    int counterForFour = 0;
    while (true) {
        if (cin >> number) {

        } else {
            break;
        }
        int max = 0;
        int position = 0;
        counter = -1;
        counterForPosition = 0;
        int num = number;
        while (num != 0) {
            int tmp = num % 10;
            counter++;
            if (tmp > max) {
                max = tmp;
                counterForPosition = counter;
            }
            num /= 10;
        }
        if (counterForPosition == 0) {
            counterForZero++;
        }
        if (counterForPosition == 1) {
            counterForOne++;
        }
        if (counterForPosition == 2) {
            counterForTwo++;
        }
        if (counterForPosition == 3) {
            counterForThree++;
        }
        if (counterForPosition == 4) {
            counterForFour++;
        }
    }
    cout << "0: " << counterForZero << endl;
    cout << "1: " << counterForOne << endl;
    cout << "2: " << counterForTwo << endl;
    cout << "3: " << counterForThree << endl;
    cout << "4: " << counterForFour << endl;

    return 0;
}