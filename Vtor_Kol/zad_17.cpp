/*
Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата. Да се трансформира матрицата така што средниот елемент во секоја
редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите во првата половина од редицата и сумата на елементите во втората половина на редицата.
Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот
елемент влегува во двете суми!). Да се испечати на екран променетата матрица.

Пример.

Влез:

m = 4

n = 4

1 3 -5 4

2 10 2 10

7 2 3 5

3 2 10 3

Излез:

1 5 5 4

2 0 0 10

7 1 1 5

3 8 8 3
 i - kolona
 j - redica
 */
#include <iostream>

using namespace std;

int main () {
    int matrix[100][100];
    int n, m;
    int sum1 = 0;
    int sum2 = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    if (m % 2 != 0) { // eden element vo sredina
        for (int i = 0; i < n; i++) {
            int diff = 0;
            sum1 = 0;
            sum2 = 0;
            for (int j = 0; j < m / 2; j++) {
                sum1 += matrix[i][j];
            }
            for (int j = m / 2 + 1; j < m; j++) {
                sum2 += matrix[i][j];
            }
            diff = sum1 - sum2;
            if (diff < 0) {
                diff *= -1;
            }
            for (int j = m / 2; j < m / 2 + 1; j++) {
                matrix[i][j] = diff;
            }
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        for (int i = 0; i < n; i++) {
            int diff = 0;
            sum1 = 0;
            sum2 = 0;
            for (int j = 0; j < m / 2 - 1; j++) {
                sum1 += matrix[i][j];
            }
            for (int j = m / 21 ; j < m; j++) {
                sum2 += matrix[i][j];
            }
            diff = sum1 - sum2;
            if (diff < 0) {
                diff *= -1;
            }
            for (int j = m / 2 - 1; j < m / 2 + 1; j++) {
                matrix[i][j] = diff;
            }
            for (int j = 0; j < m; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
