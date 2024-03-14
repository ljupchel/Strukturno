/*
 * Од тастатура се вчитуваат броевите A и B. На екран да се испечатат сите броеви од интервалот [A,B] кои се палиндроми и се составени само од цифрите 0,1,2,3 и 4.

Предлог за работа:
Да се имплементира функција reverseNumber (int number) која ќе го пресмета обратниот број на определен број number.
Да се имплементира функција isPalindrome (int number) која ќе врати 1 доколку бројот number е палиндром, а 0 во спротивно
Да се имплементира функција containsDigits (int number) која ќе врати 1 доколку сите цифри во бројот се 0,1,2,3 или 4, а 0 во спротивно.
Да се искористат функциите isPalindrome и containsDigits во main функцијата
Дополнително: Направете ја функцијата containsDigits рекурзивна.
 */
#include <iostream>

using namespace std;

int containsDigit(int b, int number) {
    if (number == b) {
        return 0;
    } else {
        if (number == 0 || number == 1 || number == 2 || number == 3 || number == 4) {

        }
    }
}

int reverseNumber(int number) {
    int num = number;
    int reverseNum = 0;
    while (num != 0) {
        int tmp = number % 10;
        reverseNum = reverseNum * 10 + tmp;
        num /= 10;
    }
    return reverseNum;
}



int main() {
    int a, b;
    for (int i = a; i <= b; i++) {
        if (containsDigit(b, i)) {
            cout << isPalidrome(i) << endl;
        }
    }
    return 0;
}