/*
 * Од стандарден влез се читаат елементите на една матрица (A), составена од цели броеви. Прво се читаат бројот на редици N и бројот на колони M на матрицата (N, M < 120), а потоа и самите елементи на матрицата.

Да се испечати колку индексни броеви има во секоја колона поединечно.

Индексен број е број чија вредност е идентична со вредноста што се добива со спојување на индексот од редицата и колоната на елементот.




Помош:

Индексен елемент: вредноста на елементот Aij е иста со ij како број

- ако i=10, j=31, елементот Aij треба да има вредност 1031 за да биде индексен број
 */
#include <iostream>

using namespace std;

int main() {
    int n, m;
    int matrix[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        int counter = 0;
        for (int i = 0; i <= n; i++) {

        }
        cout << counter << endl;
    }

    return 0;
}
//int num = matrix[i][j];
//while (num != 0) {
//int tmp = num % 10;
//if (tmp == i) {
//counter++;
//break;
//}
//}
//num /= 10;