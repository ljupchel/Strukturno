/*
 * Од стандарден влез се читаат непознат број на редови додека не се прочита 0. Да се најде најдолгиот ред во кој има барем 2 цифри. Потоа, на стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед. Доколку има повеќе такви редови се печати последниот. Се претпоставува дека ниту еден ред не е подолг од 100 знаци.

Пример.

Влез:
dat.txt:
    aaa123aa222aa2aaa23aaaaa22
    aaaaaaaaaaaa 23aaaa
    123 aaa aaa aaa aaa 12345 aaa aaa 2a
    0
Излез:
    123 aaa aaa aaa aaa 12345 aaa aaa 2
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int hasDigit(char * line) {
    int n = strlen(line);
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (isdigit(line[i])) {
            counter++;
            if (counter == 2) {
                break;
            }
        }
    }
    if (counter == 2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    wtf();
    // vasiot kod ovde
    FILE *f = fopen("/Users/ljupc/Desktop/fakultet/Strukturno/dat.txt", "r");
    char line[100];
    char tmp[100];
    char newLine[100];
    int firstindex = 0;
    int lastindex = 0;
    int maxLen = 0;
    while (fgets(line, sizeof(line), f)) {
         if (strchr(line, '0') != nullptr) {
             break;
         }
        int len = strlen(line);
        for (int i = 0; i < len; i++) {
            if (isdigit(line[i])) {
                firstindex = i;
                break;
            }
        }
        for (int i = len; i > 0; i--) {
            if (isdigit(line[i])) {
                lastindex = i;
                break;
            }
        }
        int k = 0;
        for (int i = firstindex; i <= lastindex; i++) {
            tmp[k++] = line[i];
        }
        if (hasDigit(line)) {
            if (len >= maxLen) {
                maxLen = len;
                strcpy(newLine, tmp);
            }
        }
        for (int i = 0; i < k; i++) {
            tmp[i] = '\0';
        }
    }
    newLine[strlen(newLine) - 1] = '\0';
    puts(newLine);
    return 0;
}