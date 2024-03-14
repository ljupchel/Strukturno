/*
 * Од стандарден влез се читаат низи од знаци се додека не се прочита знакот #. Да се напише програма во која од за секој прочитан ред ќе се отпечати бројот на цифри во тој ред, знакот :, па самите цифри подредени според ASCII кодот во растечки редослед. Низите од знаци не се подолги од 100 знаци.
 */
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void wtf() {
    FILE *f = fopen("input.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int hasHastag (char * line) {
    int n = strlen(line);
    for (int i = 0; i < n; i++) {
        if (line[i] == '#') {
            return 0;
        }
    }
    return 1;
}

int main() {
    wtf();
    FILE *f = fopen("input.txt", "r");
    char line[100];
    while (fscanf(f, "%s", line)) {
        int n = strlen(line);
        if (hasHastag(line)) {
            break;
        }



    }
    return 0;
}