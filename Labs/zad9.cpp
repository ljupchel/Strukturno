/*
 *
 */
#include <iostream>

using namespace std;

int main () {
    int a, b;
    cin >> a >> b;
    float average = 0;
    int flag = 1;
    int counter = 0;
    int counterForAll = 0;
    for (int i = a + 1; i <= b; i++) {
        if (i % 2 == 0) {
            if (i % 7 == 0) {
                cout << i << "\n";
                flag = 0;
                counter++;
            }
        }
        if (i % 2 != 0) {
            if (i % 3 != 0) {
                cout << i << "\n";
                flag = 0;
                counter++;
            }
        }
        counterForAll++;
    }
    average = (float)counter / counterForAll * 100;
    cout << average;
    if (flag != 0) {
        cout << "0";
    }
    return 0;
}