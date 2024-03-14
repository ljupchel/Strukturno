#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void cleanString(char * line) {
    if (line[strlen(line) - 1] == '\n') {
        line[strlen(line) - 1] = '\0';
    }
}

int checkCondition(char * line) {
    int i, isPalidrome = 1, hasSpecialChar = 0;
    int n = strlen(line);
    for (i = 0; i < n / 2; i++) {
        if (line[i] != line[n - i - 1]) {
            isPalidrome = 0;
        }
    }

    for (i = 0; i < n; i++) {
        if (!isalpha(line[i])) {
            hasSpecialChar = 1;
        }
    }

    return isPalidrome == 1 && hasSpecialChar == 1;
}

int main () {
    int i, n;
    cin >> n;

    for (i = 0; i < n; i++) {
        char line[81];
        fgets(line, sizeof(line), stdin);
        cleanString(line);
        if (checkCondition(line)) {
            puts(line);
        }
    }
    return 0;
}