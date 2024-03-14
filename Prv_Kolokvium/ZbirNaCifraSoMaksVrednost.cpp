/*
Од тастатура се читаат непознат број позитивни цели броеви се додека не се внесе нешто различно од број. За секој број треба да се пресмета збирот на цифрата со максимална
вредност од претходно внесениот број  и сумата на цифрите на тековниот број (за првиот внесен број се пресметува само сумата на неговите цифри).
За секој внесен број резултатот треба да се испечати во следниот формат:

[број]: [сумата на цифрите на бројот + максималната цифра од претходниот број]

342: 9   //3+4+2

345: 16 //3+4+5+4

123: 11 //1+2+3+5

456: 18 //4+5+6+3
 */
#include <iostream>

using namespace std;

int main () {
    int number;
    int lastMax = 0;
    int currentMax = 0;
    int counter = 0;
    while (true) {
        if (cin >> number) {
           counter++;
        } else {
            break;
        }
        int sum = 0;
        currentMax = 0;
        int num = number;
        while (num != 0) {
            int tmp = num % 10;
            sum += tmp;
            if (tmp > currentMax) {
                currentMax = tmp;
            }
            num /= 10;
        }

        if (counter == 1) {
            cout << number << ":" << " " << sum << endl;
            lastMax = currentMax;
        } else {
            cout << number << ":" << " " << sum + lastMax << endl;
            lastMax = currentMax;
        }
    }
    return 0;
}