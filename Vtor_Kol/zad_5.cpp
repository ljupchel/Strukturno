/*
Од стандарден влез се чита ливче во спортска обложувалница.

Во првиот ред е запишана сумата на уплата (цел број).

Потоа во секој нареден ред кој се чита од стандарден влез (се додека не се прочита знакот #) е запишан по еден тип во следниот формат:

ab12 1 1.25
Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).

Ваша задача е да го испечатите типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.

Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.
 */
#include <iostream>
#include <cstring>

using namespace std;

// ne menuvaj ovde
void wf() {
    FILE *f = fopen("livce.txt", "w");
    char c;
    while ((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int main() {
    wf();
    FILE *f = fopen("/Users/ljupc/Desktop/fakultet/Strukturno/livce.txt", "r");
    // vasiot kod pocnuva od ovde
    char code[9];
    int deposit;
    int type;
    float coef;
    char line[100];
    fscanf(f, "%d", &deposit);
    while (fgets(line, sizeof(line), f) != NULL) {
         int n = strlen(line);
         int j = 0;
         for (int i = 0; i < n; i++) {
             if (isalnum(line[i])) {
                 code[j++] = line[i];
             }
         }
    }
    return 0;
}