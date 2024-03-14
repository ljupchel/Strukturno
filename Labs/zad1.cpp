/*
 * Да се напише програма во која се внесуваат три броеви.
 *  Да се отпечати 1 доколку средниот број е истовремено поголем од двата останати броеви, или пак е истовремено помал. Во спротивно да се отпечати 0.
 */

#include <iostream>

using namespace std;

int main() {
    int number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    if (number2 < number1 && number2 < number3) {
        cout << "1";
    } else if (number2 > number1 && number2 > number3) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
