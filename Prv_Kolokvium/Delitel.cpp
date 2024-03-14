/*
 * Од стандарден влез се чита еден природен број n. Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
 *  Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.
 */
#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int sum = 0;
    int maxSum = 0;
    int index = 0;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }
        if (sum > maxSum) {
            maxSum = sum;
            index = i;
        }
    }
    cout << index;
    return 0;
}