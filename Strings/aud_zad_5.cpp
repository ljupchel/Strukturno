/*
 * Да се напише функција која ќе проверува дали дадена текстуална низа е палиндром.

Една текстуална низа е палиндром ако таа се чита исто од лево на десно и од десно на лево.
 */
#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int isPalindrome(char * word) {
    int i;
    int n = strlen(word);
    for (i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            return 0;
        }
    }
    return 1;
}


int isPalindromeRec(char * word, int start, int end) {
    if (start == end) {
        return 1;
    } else {
        if (word[start] != word[end]) {
            return 0;
        } else {
            return isPalindromeRec(word, start + 1, end - 1);
        }
    }
}

int main () {
    char word [100];

    fgets(word, sizeof(word), stdin);
    word[strlen(word - 1)] = '\0';

    if (isPalindrome(word) && isPalindromeRec(word, 0, strlen(word - 1))) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}