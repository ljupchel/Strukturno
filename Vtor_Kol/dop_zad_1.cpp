/*
Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци. Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место), а секоја
од нив не е подолга од 80 знаци.

Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево) и што
содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!". Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто
го задоволува условот.

Влез:

9

a!bcdedcb!a

Kfd?vsvv98_89vvsv?dfK

Ccsvsdvdfv

342425vbbcb

352!2353696969625

gdg??dfg!!

5336346644747

8338736767867

12344321

Излез:

Kfd?vsvv98_89vvsv?dfK
 */
#include <iostream>
#include <cstring>
#include <cctype>


using namespace std;

void clearString(char * line) {
    if (line[strlen(line) - 1] == '\n') {
        line[strlen(line) - 1] = '\0';
    }
}


int isPalindrome(char *line) {
     int len = strlen(line);
     int found = 1;
     int hasSpecial = 0;
     for (int i = 0; i < len / 2; i++) {
         if (line[i] != line[len - i - 1]) {
             found = 0;
             break;
         }
     }

    for (int i = 0; i < len; i++) {
        if (!isalnum(line[i])) {
            hasSpecial = 1;
        }
    }
    return hasSpecial == 1 && found == 1;
}

int main() {
    int n;
    int found = 0;
    int index = 0;
    int currentLongest = 0;
    int longest = 0;
    char line[80];
    char max[80];
    cin >> n;
    for (int i = 0; i <= n; i++) {
        fgets(line, sizeof(line), stdin);
        clearString(line);

        currentLongest = strlen(line);

        if (isPalindrome(line)) {
            if (currentLongest > longest) {
                longest = currentLongest;
                strcpy(max, line);
            }
        }
    }
    if (longest != 0) {
        puts(max);
    } else {
        cout << "Nema!";
    }
    return 0;
}