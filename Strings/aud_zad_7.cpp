/*
Да се напише функција која во стринг што и се предава како влезен параметар ќе ги промени малите букви во големи и обратно, и ќе ги отстрани сите цифри и специјални
знаци.

Пример
За низата:

0v@ePr1m3R

треба да се добие:

VEpRMr
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

void clean (char * line) {
    int i, j;
    int n = strlen(line);
    for (i = 0; i < n; i++) {
        if (!isalpha(line[i])) {
            for (j = 0; j < n - 1; j++) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
            --n;
            --i;
        }
        else {
            if (isupper(line[i])) {
                line[i] = tolower(line[i]);
            }
            else  {
                line[i] = toupper(line[i]);
            }
        }
    }
}

int main () {
    char line [100];

    fgets(line, sizeof(line), stdin);
    line[strlen(line - 1)] = '\0';

    clean(line);

    fputs(line, stdin);
    return 0;
}