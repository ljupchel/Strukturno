/*
 * Од стандарден влез се внесуваат два цели броја N и Х.

Да се најде најблискот број помал од N коj е тотално различен од бројот Х.

Еден број е тотално различен од друг ако и само ако во него не се појавува ниту една од цифрите на другиот број.

Задачата да се реши без употреба на низи и матрици.
 */
#include <iostream>

using namespace std;

int main () {
    int n, x;
    cin >> n >> x;
    for (int i = n - 1; i >= 0; i--) {
        int num = i;
        int flag = 0;
        while (num != 0) {
            int tmp = num % 10;
            int num2 = x;
            while (num2 != 0) {
                int tmp2 = num2 % 10;
                if (tmp == tmp2) {
                    flag = 1;
                }
                num2 /= 10;
            }
            num /= 10;
        }
        if (flag == 0) {
            cout << i;
            break;
        }
    }
    return 0;
}