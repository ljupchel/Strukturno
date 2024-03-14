/*
 * Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8). Во зададен опсег
 * (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура),
 * да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
 */

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int sweetNumber = 0;
    for (int i = n + 1; i <= m; i++) {
        int num = i;
        bool flag = false;
        while (num != 0) {
            int tmp = num % 10;
            if (tmp != 0 && tmp != 2 && tmp != 4 && tmp != 6 && tmp != 8) {
                flag = true;
                break;
            }
            num /= 10;
        }
        if (!flag) {
            sweetNumber = i;
            cout << sweetNumber;
        }
    }
    if (sweetNumber == 0) {
        cout << "NE";
    }
    return 0;
}
