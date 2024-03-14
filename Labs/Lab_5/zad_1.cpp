/*
 * Дефинираме вредност d за тројка цели броеви a, b и c , така што таа се пресметува како сума меѓу апсолутните разлики од првиот и вториот број, од една страна, и вториот и третиот број, од друга страна:

d = |(a-b)| + |(b-c)|

Да се напише програма со којашто од тастатура се вчитуваат N тројки цели броеви (N се внесува од тастатура), и која што ја наоѓа и ја печати најмалата вредност за d од прочитаните тројки. Вредноста d за секоја од тројките се пресметува ВО ФУНКЦИЈА.

Пример:

Влез:

3

1 2 3

22 30 22

1 1 1

Излез:

0
 */
#include <iostream>

using namespace std;


int Threes (int num1, int num2, int num3) {
    int abs1 = 0;
    int abs2 = 0;
    if (num1 > num2) {
        abs1 = num1 - num2;
    } else {
        abs1 = num2 - num1;
    }
    if (num2 > num3) {
        abs2 = num2 - num3;
    } else {
        abs2 = num3 - num2;
    }
    return abs1 + abs2;
}


int main () {
    int n;
    int min = 1000;
    int num1, num2, num3;
    int d = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> num1 >> num2 >> num3;

        d = Threes(num1, num2, num3);

        if (d < min) {
            min = d;
        }
    }
    cout << min;
    return 0;
}
