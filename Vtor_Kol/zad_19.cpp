/*
 * Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:

N - бројот на низи од знаци кои ќе се читаат и
X - поместување.
Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места
понапред во азбуката (a-z). Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.

Трансформацијата да се имплементира со посебна рекурзивна функција.

Пример:

Welcome -> трансформирано со поместување 5 -> Bjqhtrj
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;


void transform(char *line, int x) {
    for (int i = 0; i < strlen(line); i++) {
        if (isalpha(line[i])) {
            char base;
            if (islower(line[i])) {
                base = 'a';
            } else {
                base = 'A';
            }
            line[i] = (char)(((line[i] - base + x) + 26) % 26 + base);
        }
    }

}

int main() {
    int n, x;
    char line[81];
    cin >> n >> x;
    cin.ignore();
    for (int i = 0; i <= n; i++) {
        cin.getline(line, 81);

        transform(line, x);

        cout << line << endl;
    }
    return 0;
}