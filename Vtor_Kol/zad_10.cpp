/*
 * Од стандарден влез прво се читаат два знака z1 и z2 , а потоа се читаат редови со низи од знаци се’ додека не се прочита знакот # (секој од редовите не е подолг од 80 знаци).

Да се напише програма со која на стандарден излез ќе се испечатат поднизите од секој ред составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.

Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
    char z1, z2;
    int k = 0;
    int found = 0;
    char line [100];
    char tmp [100];
    cin >> z1 >> z2;
    cin.ignore();
    while (cin.getline(line, sizeof(line))) {
        k = 0;
        int n = strlen(line);
        for (int i = 0; i < n; i++) {
            if (line[i] == '#') {
                found = 1;
                break;
            }
        }
        if (found == 1) {
            break;
        }

        for (int i = 0; i < n; i++) {
            if (line[i] == z1) {
                int index = i + 1;
                for (int j = index; j < n; j++) {
                    tmp[k++] = line[j];
                    if (line[j + 1] == z2) {
                        break;
                    }
                }
            }
        }
        for (int i = 0; i < k; i++) {
            cout << (char)tmp[i];
        }
        cout << endl;
        for (int i = 0; i < k; i++) {
            tmp[i] = '\0';
        }
    }
    return 0;
}