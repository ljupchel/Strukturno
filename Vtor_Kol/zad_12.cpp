/*
 * Да се напише рекурзивна функција која ќе го најде бројот на позитивни броеви од целобројна низа. Функцијата како аргумент ја прима низата, за која се бара бројот
 * на позитивни броеви и вкупниот број на елементи, кои ги има таа низа. Функцијата е зададена со следниот прототип:

int BrojPozitivni(int niza[], int n);

Да се напише и функција main() за тестирање на функцијата BrojPozitivni.
 */
#include <iostream>

using namespace std;

int numberPositives(int array[], int n) {
    if (n == 1) {
        return (array[0] > 0);
    } else {
        return ((array[0] > 0) + numberPositives(array + 1, n - 1));
    }
}


int main () {
    int n;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int result = numberPositives(array, n);

    cout << result;

    return 0;
}