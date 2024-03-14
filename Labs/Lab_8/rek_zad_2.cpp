/*
 *Од стандарден влез се читаат броевите N и k, потоа се внесуваат N елементи во низа. Ваша задача е да ја испечатите низата и да испечатите колку пати во низата се
 *појавува k.

Напомена: Печатењето на елементите во низата да биде во функција.
 */
#include <iostream>

using namespace std;

int functionK (int * array, int i, int n, int k) {
    if (i == n) {
        return 0;
    } else {
        if (array[i] == k) {
            return 1 + functionK(array, i + 1, n, k);
        } else {
            return functionK(array, i + 1, n, k);
        }
    }
}

void print (int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " " ;
    }
    cout << endl;
}

int main () {
    int n, k;
    int array[100];
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    print(array, n);
    int result = functionK(array, 0, n, k);
    cout << "Brojot " << k << " vo nizata se naogja " << result  << " pati";
    return 0;
}