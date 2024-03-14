/*
 *Да се напише функција void sort (int x, int y, int z) која што ќе ги сортира во опаѓачки редослед трите броја, односно во x ќе биде сместен најголемиот број,
 *а во z најмалиот.

Да не се менува main функцијата.
 */
#include <iostream>

using namespace std;

void sort (int * x, int *y, int *z) {
    if (* x < * y) {
        int tmp = * x;
        * x = *y;
        *y = tmp;
    }
    if (* x < * z) {
        int tmp = * x;
        * x = * z;
        * z = tmp;
    }
    if (* z > * y) {
        int tmp = * z;
        * z = * y;
        * y = tmp;
    }
}


int main() {

    int a, b, c;
    cin >> a >> b >> c;

    sort(&a, &b, &c);

    cout << a << " " << b << " " << c;
    return 0;
}