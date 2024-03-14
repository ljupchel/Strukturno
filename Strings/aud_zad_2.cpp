/*
 * Да се напише функција што ќе ја одредува должината на една текстуална низа.

Да се даде итеративно и рекурзивно решение.

Пример
Ако на функцијата како аргумент и се предаде стрингот

zdravo!
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int func (char * string) {
    int counter = 0;
    while (*string != '\0') {
        counter++;
        string++;
    }
    return counter;
}
int recursion(char * string) {
    if (*string == '\0') {
        return 0;
    } else {
        return 1 + recursion(string + 1);
    }
}

int main () {
    char string [100];
    gets(string);
    cout << func (string) << endl;
    cout << recursion(string);
    return 0;
}