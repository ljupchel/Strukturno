/*
 *Да се напише програма која за дадена текстуална датотека text.txt ќе го одреди и отпечати на екран односот на самогласките и согласките.

Пример
Ако датотеката text.txt ја има следнава содржина:

Zdravo, kako si?
Eve, dobro sum. A ti?
I jas dobro.
тогаш програмата треба да отпечати:

Odnos samoglaski/soglaski: 16/19 = 0.84
 */
#include <iostream>
#include <cstring>

using namespace std;

int isVowel(char c) {
  c = tolower(c);
  return c == 'a' || c == 'e' || c == 'u' || c == 'o' || c == 'i';
}

int main () {
    FILE *f = fopen("/Users/ljupc/Desktop/fakultet/Strukturno/test.txt", "r");
    char curr;
    int vowel = 0, consonants = 0;
    while ((curr = fgetc(f)) != EOF) {
        if(isalpha(curr)) {
            if (isVowel(curr)) {
                vowel++;
            } else {
                consonants++;
            }
        }
    }
    fclose(f);


    cout << "Odnos samoglaski/soglaski: " << vowel << "/" << consonants << " = " << (float)vowel/consonants;
    return 0;
}
