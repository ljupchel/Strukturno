/*
 * Од стандарден влез се читаат два природни броеви a и b. Да се испечати бројот од (а,b)
 *  кој што има најмал број на делители и бројот што има најголем број на  делители. Ако постојат повеќе броеви со ист број на делители да се испечати последниот.
 */
#include <iostream>

using namespace std;

int main () {
    int a, b, j;
    cin >> a >> b;
    int min = 1000, minNum = 0, max = 0, maxNum = 0;
    for (int i = a + 1; i < b; i++) {
        int counter = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                counter++;
            }
        }
        if (counter <= min) {
            min = counter;
            minNum = i;
        }
        if (counter >= max) {
            max = counter;
            maxNum = i;
        }
    }
    cout << "Min: " << minNum << endl;
    cout << "Max: " << maxNum << endl;
    return 0;
}