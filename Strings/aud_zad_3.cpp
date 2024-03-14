/*
 * 1.4. Задача 3
Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа (што се внесува од тастатура) определена со позицијата и должината, што како параметри
се внесуваат од тастатура. Поднизата започнува од знакот што се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево.

Пример
Ако од тастатура се внесе:

banana

позиција: 3

должина: 4

тогаш програмата треба да отпечати: nana
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int main () {
    char line [100];
    int pos;
    int len;
    gets(line);
    cin >> pos;
    cin >> len;
    //for (int i = pos - 1; i < pos + len; i++) {
    //  cout << line[i];
    //}
    char newLine [100];
    strncpy(newLine, line + pos - 1, len);
    newLine[len] = '\0';
    puts(newLine);
    return 0;
}