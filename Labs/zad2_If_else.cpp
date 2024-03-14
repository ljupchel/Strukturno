/*
 * Да се напише програма во која се внесуваат три броеви.
 * Да се отпечати 1 доколку средниот број е истовремено поголем од двата останати броеви, или пак е истовремено помал. Во спротивно да се отпечати 0.
 */
#include <iostream>

using namespace std;

int main () {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num2 > num1 && num2 > num3) {
        cout << "1";
    } else if (num2 < num1 && num2 < num3) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}