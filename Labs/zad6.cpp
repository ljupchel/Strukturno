/*
 * Да се напише програма во која што се внесува еден четирицифрен и еден трицифрен број.
 * Да се отпечати 1 доколку сумата на цифрите на првиот број е поголема од сумата на цифрите на вториот број, во спротивно 0.
 */
#include <iostream>

using namespace std;

int main () {
    int numberFour, numberThree;
    int sum1 = 0, sum2 = 0;
    cin >> numberFour >> numberThree;
    int num1 = numberFour;
    while (num1 != 0) {
        sum1 += num1 % 10;
        num1 /= 10;
    }
    int num2 = numberThree;
    while (num2 != 0) {
        sum2 += num2 % 10;
        num2 /= 10;
    }
    if (sum1 > sum2) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}