/*
 * Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи. Потоа се внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).

Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k се заменуваат со минималната вредност од матрицата А.

Пример

Влез

4 6 // m и n

2 3 // r и k

1 2 3 4 5 1

2 9 4 5 1 3

4 5 6 7 3 2

1 2 3 3 2 8



Излез

1 1 1 4 5 1

1 1 1 5 1 3

4 5 6 7 3 2

1 2 3 3 2 8
 */
#include <iostream>

using namespace std;

int main () {
    int matrix[100][100];
    int min = 1000;
    int n, m, r, k; // n - r // k - m
    cin >> n >> m;
    cin >> r >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }


    for (int i = 0; i < r; i++) {
        for (int j = 0; j < k; j++) {
            matrix[i][j] = min;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}