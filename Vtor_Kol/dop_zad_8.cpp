/*
 * Четиринасочник претставува матрица во која се испишани зборови хоризонотално и вертикално, одлево-надесно и оддесно-налево. Притоа секој елемент од матрицата претставува буква од англиската азбука.

пример скриени зборови: HAIR, OLE (прецртани), FISH, TOE (подвлечени)

T H A I R E
E S N K N E
M I M J O L
M F S P S T
I F G E L O
X U T Y O E
Од стандарден влез се чита квадратна матрица од ред n (3 <= n <= 50), составена од знаци. Прво се чита бројот n - бројот на редици (колони) на матрицата, а потоа и самите елементи на матрицата (види пример).
По читањето на матрицата, од стандарден влез се внесува збор составен од максимум 10 букви.

Ваша задача е да определите дали тој збор се наоѓа во четиринасочникот (хоризонтално или вертикално, одлево-надесно или оддесно-налево). Потребно е да се испечати локацијата (ред, колона) на првата и последната буква од зборот. Доколку зборот повеќепати се наоѓа во четеринасочникот, треба да се испечати првото појавување, гледано елемент по елемент како што се чита матрицата.
 */
#include <iostream>
#include <cstring>

using namespace std;

int main () {
    char matrix[100][100];
    char line[10];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> line;
    // redici
    int flag = 0;
    int indexI = 0;
    int indexJ = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == line[0]) {
                for (int k = 0; k < strlen(line); k++) {
                    if (matrix[i][j] != line[k]) {
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0) {
                    indexI = i;
                    indexJ = j;
                }
            }
        }

    }
    // koloni
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {

        }
    }
    cout << indexI << " " << indexJ;
    return 0;
}