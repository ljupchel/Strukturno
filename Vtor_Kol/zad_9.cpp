/*
 * Да се имплементира рекурзивна функција која за низа од цели броеви $[a{0}, a{1}, ..., a_{n-1}]$ ќе ја пресмета вредноста на непрекинатата дропка дефинирана како:

v=a0+1a1+...1an−2+1an−1

Да се напише програма во која се чита цел број N, по што се читаат елементите на низа од N цели броеви (не повеќе од 100). Потоа се повикува рекурзивната функција и
 се печати резултатот во нов ред.
 */
#include <iostream>

using namespace std;

double function (int array[], int n) {
    if (n == 1) {
        return array[0];
    } else {
      return array[0] + 1.0 / function(array + 1, n - 1);
    }
}


int main () {
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    double result =  function(array, n);

    cout << result;

    return 0;
}