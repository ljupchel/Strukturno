/*
 * Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.

Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак.

Пример
zdr@v0! е валидна лозинка.

zdravo не е валидна лозинка.
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int contains(char * line) {
    int i;
    int n = strlen(line);
    int hasUpperLetter = 0, hasNumber = 0, hasSpecial = 0;
    for (i = 0; i < n; i++) {

        if (isupper(line[i])) {
            hasUpperLetter = 1;
        }
        if (isdigit(line[i])) {
            hasNumber = 1;
        }
        if (!isalnum(line[i])) {
            hasSpecial = 1;
        }
    }
    return hasUpperLetter && hasNumber && hasSpecial;
}

int main () {
    char line[100];
    fgets(line, sizeof(line), stdin);
    line[strlen(line - 1)] = '\0';
    if (contains(line)) {
        cout << line << " e validna lozinka";
    } else {
        cout << line << " ne e validna lozinka";
    }
    return 0;
}