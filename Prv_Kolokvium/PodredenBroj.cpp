/*
 * Подреден број е број кај кој секоја цифра е поголема или еднаква на предходната гледајќи од најзначајната кон најмалку значајната пр. 12334
 */
#include <iostream>

using namespace std;

int main () {
    int n;
    int numbers;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> numbers;
        int num = numbers;
        int flag = 0;
        while (num != 0) {
            int tmpLast = num % 10;
            num /= 10;
            int tmpSecondToLast = num % 10;
            if (tmpSecondToLast <= tmpLast) {
                flag = 1;
            }
        }
        if (flag == 1) {
            cout << numbers;
        }
    }
    return 0;
}