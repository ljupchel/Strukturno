/*
 * Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред).
Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
Ако нема такви низи, да се испечати порака NONE.
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int contains (char * line, int n, int k, char c) {
    int len = strlen(line);
    int counter = 0;
    for (int i = 0; i < len; i++) {
        if (tolower(line[i]) == tolower(c)) {
            counter++;
        }
    }
    return counter;
}


int main () {
    int n, k;
    char character;
    int flag = 0;
    cin >> n >> k;
    cin >> character;

    char str[100];

    for (int i = 0; i < n; ++i) {
        fgets(str, sizeof(str), stdin);
        str[strlen(str - 1)] = '\0';

        if (contains(str, n, k, character) == k) {
            puts(str);
            flag = 1;
        }
    }

    if (flag == 0) {
        cout << "NONE";
    }
    return 0;
}