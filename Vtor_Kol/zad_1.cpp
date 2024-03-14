/*
 * Се внесуваат низи од значи од стандарден влез. Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во речениците. Појавата на големи и
 *мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви. Потоа во нов ред се печати бројот на појавувања
 *на паровите самогласки. Читањето завршува кога ќе се прочита знакот #.

Пример:

IO is short for Input Output
medioio medIo song
#
Излез:

io
ou
io
oi
io
io
6
 */
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o';
}

int main() {

    writeToFile();

    // Vasiot kod zapocnuva od tuka

    FILE *f = fopen("/Users/ljupc/Desktop/fakultet/Strukturno/text.txt", "r");

    char curr;
    int vowels = 0;
    int pair = 0;
    char tmp[100];
    int j = 0;

    while ((curr = fgetc(f)) != EOF) {
        if (isVowel(curr)) {
            curr = tolower(curr);
            vowels++;
            tmp[j++] = curr;
            if (vowels == 2) {
                vowels -= 1;
                puts(tmp);
                for (int i = 0; i < j; i++) {
                    tmp[i] = '\0';
                }
                j = 0;
                tmp[j++] = curr;
            }
        } else {
            vowels = 0;
            j = 0;
        }
    }
    cout << pair;
    return 0;
}