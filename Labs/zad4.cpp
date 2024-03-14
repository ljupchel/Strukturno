/*
 * Од стандарден влез се чита четирицифрен број. Да се испечати 1 доколку цифрите во бројот се во строго растечки редослед, во спротивно да се испечати 0.
 */
#include <iostream>

using namespace std;

int main () {
    int number;
    cin >> number;
    int n4 = number % 10;
    int n3 = number % 100 / 10;
    int n2 = number / 100 % 10;
    int n1 = number / 100 / 10;
    if (n1 < n2 && n2 < n3 && n3 < n4) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}