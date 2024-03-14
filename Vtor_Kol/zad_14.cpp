/*
Да се напише програма во која се вчитува матрица од цели броеви A со N редици и N * 2 колони (N не е поголемо од 50). Програмата треба да ја трансформира вчитаната матрица во
нова матрица B, така што сите елементи десно од N-тата колона ќе ги префрли под N-тата редица, односно од матрица со димензија N редици и 2 * N колони ќе се добие
матрица со 2 * N редици x N колони.
 */
#include <iostream>

using namespace std;

int main () {
    int matrixA[100][100], matrixB[100][100];
    int n;
    cin >> n;
    int indexLast = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n * 2; j++) {
            cin >> matrixA[i][j];
        }
    }
    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < n; j++) {
            matrixB[i][j] = matrixA[i][j];
        }
    }
    for (int i = 0; i < n * 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrixB[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}