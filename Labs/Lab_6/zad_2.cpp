/*
 * Од стандарден влез се чита број n а потоа се чита и низа составена од n реални броеви.
 * На екран да се испечати елементот кој што е најблиску до средната вредност на елементите на низата.
 */
#include <iostream>

using namespace std;

int main() {
    int n;
    int average = 0;
    float diff = 0;
    float index = 0;
    float array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
        average += array[i];
    }

    average /= n;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            diff = average - array[i];
            index = array[i];
            if (diff < 0) {
                diff *= -1;
            }
        }
        float currentDiff = average - array[i];
        if (currentDiff < 0) {
            currentDiff *= -1;
        }
        if (diff > currentDiff) {
            diff = currentDiff;
            index = array[i];
        }
    }
    cout << index;
    return 0;
}
