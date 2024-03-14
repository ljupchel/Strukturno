/*
 * Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека едната е помала од 5,
 *  а другата е поголема или еднаква на 5. На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:

a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5

Пр.  508294, 2638, 81
Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат). Читањето завршува во моментот кога ќе се
прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
 */
#include <iostream>

using namespace std;

int main () {
    int number;
    while (cin >> number) {
        if (number <= 10) {
            break;
        }
        int tmp = number;
        bool isCikCak = true;

        while (tmp >= 0) {
            int digit1 = tmp % 10;
            tmp /= 10;
            int digit2 = tmp % 10;

            if (!((digit1 < 5 && digit2 >= 5) || (digit1 >= 5 && digit2 < 5))) {
                isCikCak = false;
                break;
            }
        }
        if (isCikCak) {
            cout << number << endl;
        }
    }
    return 0;
}