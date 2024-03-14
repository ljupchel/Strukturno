/*
 * Од стандарден влез се вчитува квадратна матрица со n редици и колони. Прво се вчитува бројот n, па потоа и n елементите на матрицата.

Доколку n е непарен број да се испечати пораката GRESKA и да заврши програмата.

Потребно е матрицата да се здипли како што е прикажано на сликата. При диплење на матрицата, се собираат елементите на позициите што се поклопуваат при диплењето.
 */
#include <iostream>

using namespace std;

int main () {
    int n;
    int matrix[100][100];
    cin >> n;
    if (n % 2 != 0) {
        cout << "GRESKA";
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) {
                sum += matrix[i][j];
            }
            if (i == 0 && j == n - 1) {
                sum += matrix[i][j];
            }
            if (i == n - 1 && j == 0) {
                sum += matrix[i][j];
            }
            if (i == n - 1 && j == n - 1) {
                sum += matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = sum;
        }
    }
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n / 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}