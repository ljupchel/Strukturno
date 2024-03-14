/*
 * Од тастатура се читаат два цели броеви a, b. Да се испечатат сите парни броеви кои што се деливи со 7 и сите непарни броеви кои што не се деливи со 3 во опсег (а, b].
 * Ако вакви броеви не постојат да се испечати 0, а во спротивно да се испечати колкав процент од броевите ги исполнуваат условите(односно ќе бидат испечатени).
 *
 *
 * 1 7
 *
 *
 * 5
   7
   33.33%
 */
#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int counter = 0;
    for (int i = a + 1; i <= b; i++) {
        if (i % 2 == 0 && i % 7 == 0) {
            cout << i << endl;
            counter++;
        }
        if (i % 2 != 0 && i % 3 != 0) {
            cout << i << endl;
            counter++;
        }
    }
    if (counter == 0) {
        cout << "0";
    } else {
        cout << counter * 1.0 / (b - a) * 100.0;
    }

    return 0;
}