/*
 * Да се напише функција што ќе одредува колку пати даден знак се наоѓа во даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.

Пример
За стрингот

HELLO FINKI

знакот L се појавува 2 пати.
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int countOccurrences(char * line, char c) {
    int counter = 0;
    while (*line != '\0') {
         if (*line == c) {
             counter++;
         }
         line++;
     }
    return counter;
}
// vtor nacin bez pokazuvaci
/*int countOccurrences1 (char * line, char c) {
    int counter = 0;
    for (int i = 0; i < strlen(line); i++) {
        if (line[i] == c) {
            counter++;
        }
    }
    return counter;
}
*/

// rekurzivno
int countOccurrences2 (char * line, char c) {
    if (*line == '\0') {
        return 0;
    } else {
        if (*line == c) {
            return 1 + countOccurrences2(line + 1, c);
        } else {
            return countOccurrences2(line + 1, c); 
        }
    }
}
int main () {
    char line[100];
    char character;
    gets(line);
    cin >> character;

    cout << countOccurrences(line, character);
    return 0;
}