/*
Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги
сменат местата.

Напомена: Сите тест примери ќе имаат парен број на знаци.
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

void transform (char * line) {
    int len = strlen(line);
    char tmp[100];
    strcpy(tmp, line + len / 2);
    strncat(tmp, line, len / 2);
    strcpy(line, tmp);
}

int main () {
    char line [100];
    fgets(line, sizeof(line), stdin);
    transform(line);
    cout << line;
    return 0;
}