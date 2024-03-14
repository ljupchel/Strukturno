/*
 * Од стандарден влез се читаат знаци се додека не се прочита извичник. Во вака внесениот текст се скриени цели броеви (помали од 100).
 * Да се напише програма што ќе ги прочита сите знаци и на излез ќе го испечати збирот на сите броеви скриени во текстот.
 */
#include <iostream>
#include <cctype>

using namespace std;

int main () {
    char input;
    int sum = 0;
    bool inNumber = false;
    int currentNumber = 0;
    while (cin >> noskipws >> input && input != '!') {
        if (isdigit(input)) {
            currentNumber = currentNumber * 10 + (input - '0');
            inNumber = true;
        } else {
            if (inNumber) {
                sum += currentNumber;
                currentNumber = 0;
                inNumber = false;
            }
        }
    }
    if (inNumber) {
        sum += currentNumber;
    }
    cout << sum;
    return 0;
}