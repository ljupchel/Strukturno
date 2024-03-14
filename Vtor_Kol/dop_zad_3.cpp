/*
 * Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.

Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата А1c  најмалку 2 пати (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот. При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

Пример

Влез:

6

Ekjqh!!lkjsdh

 A1c01АA1c92

12A1cwwA1cxy

12A1cwwA1bxy

аA1cwA1cA1ccA1cxab

nemaA1c_povekjepati


Излез

а1c01аа1c92

12а1cwwа1cxy

аа1cwа1cа1ccа1cxab

 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    int n;
    cin >> n;
    int occ = 0;
    char line[100][100];
    for (int i = 0; i < n; i++) {
        cin >> line[i];
    }

    for (int i = 0; i < n; i++) {
        occ = 0;

        for (int j = 0; j < strlen(line[i]); j++) {
            if ((tolower(line[i][j]) == 'a') && (line[i][j + 1] == '1') && (tolower(line[i][j + 2]) == 'c')) {
                occ++;
            }
        }

        if (occ >= 2) {
            for (int j = 0; line[i][j] != '\0'; j++) {
                cout << (char)tolower(line[i][j]);
            }
            cout << endl;
        }

    }
    return 0;
}
// works
//tolower(line[i][j]) == 'a'
//line[i][j] == '1'