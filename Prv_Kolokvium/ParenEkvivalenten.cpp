/*
 * Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.

Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.

Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број, во истиот редослед.

Соодветно да се испечатат пораки „PAREN“ и „NE“.

Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
 */
#include <iostream>

using namespace std;

int main () {
    int a, b;
    int biggerNumber = 0, smallerNumber = 0;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Invalid input";
        return 0;
    }
    if (a > b) {
        biggerNumber = a;
    } else {
        biggerNumber = b;
    }
    if (a < b) {
        smallerNumber = a;
    } else {
        smallerNumber = b;
    }

    int numBigger = biggerNumber;
    int numSmaller = smallerNumber;
    int counter = 0;
    int flag = 0;

    while (numSmaller != 0) {
        int tmpSmall = numSmaller % 10;
        while (numBigger != 0) {
            int tmpBig = numBigger % 10;
            counter++;
            if (counter % 2 == 0 && tmpBig == tmpSmall) {
                flag = 1;
            }
            numBigger /= 10;
        }
        numSmaller /= 10;
    }

    if (flag == 1) {
        cout << "PAREN";
    } else {
        cout << "NE";
    }
    return 0;
}