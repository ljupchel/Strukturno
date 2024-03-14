/*
Од тастатура се чита број n а потоа и низа од n елементи. Потребно е низата да се трансформира така што максималниот и минималниот елемент ќе си ги заменат местата,
а на останатите елементи ќе им се додаде разликата меѓу максималниот и минималниот елемент. Самата трансформација треба да се изврши во функцијата
void transform(int *arr, int n)
 */
#include <iostream>

using namespace std;

void transform(int * array, int n) {
    int indMax = 0;
    int indMin = 1000;
    int max = 0;
    int min = 1000;
    for (int i = 0; i < n; i++) {
        if (* (array + i) > max) {
            max = * (array + i);
            indMax = i;
        }
        if (* (array + i) < min) {
            min = * (array + i);
            indMin = i;
        }
    }
    int tmp = * (array + indMin);
    * (array + indMin) = * (array + indMax);
    * (array + indMax) = tmp;
    int diff = max - min;
    for (int i = 0; i < n; i++) {
        if (i == indMin) {
            continue;
        }
        if (i == indMax) {
            continue;
        } else {
            * (array + i) += diff;
        }
    }
}


int main () {
    int array[100];
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    transform(array, n);

    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}