/*
 * Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 * Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
 *  Од тастатура се внесува природен број n Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
 *   Обратен број е бројот составен од истите цифри, но во обратен редослед
 * (на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
 *  Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. Ако внесениот број не е валиден,
 *   да се отпечати соодветна порака (Brojot ne e validen).
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    int max = 0;
    cin >> n;
    if (n < 9) {
        cout << "Brojot ne e validen";
        return 0;
    }
    for (int i = n - 1; i > 0; i--) {
        int counter = 0;
        int num = i;

        // broj na cifri
        while (num != 0) {
            counter++;
            num /= 10;
        }

        int reversedNum = 0;
        num = i;

        while (num != 0) {
            int tmp = num % 10;
            reversedNum = reversedNum * 10 + tmp;
            num /= 10;
        }
        if (reversedNum % counter == 0) {
            if (i > max) {
                max = i;
            }
        }
    }

    cout << max;

    return 0;
}