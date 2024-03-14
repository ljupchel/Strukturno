/*
 * Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата. Да се генерира низа (со најмногу m) така што секој елемент
 * од низата се добива со наоѓање на елементот во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица. Ако постојат повеќе
 * елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот. Редоследот на запишување на елементите во низата одговара на редоследот на редиците.

Пример:

Влез:

3 6

1 2 2 3 4 5

1 1 2 2 3 3

1 2 3 4 5 6

Излез:

5 1 1
 */
#include <iostream>

using namespace std;

int main () {
    int n, m;
    int matrix[100][100];
    int sum = 0;
    float average = 0.0;
    float diff = 0.0;
    float maxDiff = 0.0;
    int index = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        sum = 0;
        maxDiff = 0.0;
        for (int j = 0; j < m; j++) {
            sum += matrix[i][j];
        }

        average = (float)sum / m;

        for (int j = 0; j < m; j++) {
            diff = matrix[i][j] - average;
            if (diff < 0) {
                diff *= -1;
            }
            if (diff > maxDiff) {
                maxDiff = diff;
                index = matrix[i][j];
            }
            if (maxDiff == 0) {
                index = matrix[i][j];
            }
        }
        cout << index << " ";
    }

    return 0;
}