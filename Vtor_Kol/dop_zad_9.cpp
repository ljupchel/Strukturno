/*
 * Од стандарден влез се внесуваат непознат број на реченици претставени преку текстуални низи (стрингови) секоја не подолга од 100 знаци и секоја во нов ред. Програмата треба да го најде стрингот кој содржи најмногу сврзници и да го испечати заедно со бројот на најдените сврзници. За сврзници се сметаат сите зборови составени од една, две или три букви. Зборовите во текстуалната низа се одделени со едно или повеќе прзани места и/или интерпункциски знак.

Броењето на сврзници во дадена текстуална низа треба да се реализира во посебна функција. Решенијата без користење функција ќе бидат оценети со најмногу 40% од поените.

Ако има повеќе реченици со ист максимален број на сврзници, се печати прво најдената.

Објаснување на тест примерот:
Бројот на сврзници по реченици е 2, 3, 4, 2, 4 и 7 соодветно. Најмногу сврзници има по последната реченица па се печати бројот 7 и содржината на таа реченица.
 */
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void cleanString(char * line) {
    if (line[strlen(line) - 1] == '\n') {
        line[strlen(line) - 1] = '\0';
    }
}

int func (char * line) {
    int n = strlen(line);
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (isalpha(line[i])) {
            int j = i;
            while (j < n && isalpha(line[j])) {
                j++;
            }

            int lenWord = j - i;
            if (lenWord >= 1 && lenWord <= 3) {
                counter++;
            }
            i = j;
        }
    }
    return counter;
}


int main () {
    char line[100];
    char newLine[100];
    int max = 0;

    while (cin.getline(line, sizeof(line))) {
        cleanString(line);
        int curr = func(line);

        if (curr > max) {
            max = curr;
            strcpy(newLine, line);
        }
    }
    cout << max << ": ";
    puts(newLine);
    return 0;
}