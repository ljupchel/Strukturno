/*
 *Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.

Пример
face е подниза на Please faceAbook
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int contains(char * str1, char * str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 < len2) {
        return 0;
    }
    for (int i = 0; i <= len1 - len2; i++) {
        if (str1[i] == str2[0]) {
            int flag = 1;
            for (int j = 0; j < len2; j++) {
                if (str1[j] != str2[i + j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag) {
                return 1;
            }
        }
    }
    return 0;
}

int main () {
    char line1 [100];
    char line2 [100];
    gets(line1);
    gets(line2);
    if (contains(line1, line2)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}