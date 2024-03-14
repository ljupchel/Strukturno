/*
 * Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.

Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата. Доколку нема таков елемент, функцијата
враќа вредност 0.

Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].

Пример 1.

Влез

12 // бројот N на елементи

1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата


Излез

Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака




Пример 2.

Влез

12 // бројот N на елементи

7 3 4 5 3 8 4 5 5 3 2 6 // елементи на низата


Излез

Nitu eden element ne se pojavuva paren broj pati! // овде функцијата par враќа вредност 0, се печати оваа порака
 */
#include <iostream>

using namespace std;


int par (int * array, int n) {
    int occurrences = 0;
    int min = 1000;
    for (int i = 0; i < n; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (min == array[i]) {
            occurrences++;
        }
    }
    if (occurrences % 2 == 0) {
        return min;
    } else {
        return 0;
    }
}

int main() {
    int n, min = 1000;
    int array[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    if (par(array, n) != 0) {
        cout << "Najmaliot element koj se pojavuva paren broj pati e " << par(array, n);
    } else {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
    }
    return 0;
}