/*
На стандарден влез се дадени повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него
во истиот ред. Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра. Читањето на броеви завршува кога ќе се прочита
бројот 0.
 */
#include <iostream>
#include <cstring>

#define MAX 100

using namespace std;

//ne menuvaj!
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
    char c;
    while ((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}

int maxNum(int *numbers, int n) {
    int max = 0;
    int lastDigit = 0;
    int index = 0;

    for (int i = 0; i < n; i++) {
        int num = numbers[i];
        while (num != 0) {
            lastDigit = num % 10;
            num /= 10;
        }
        if (lastDigit > max) {
            max = lastDigit;
            index = i;
        }
    }
    return numbers[index];
}

int main() {
    wtf();

    // vashiot kod ovde

    FILE *f = fopen("broevi.txt", "r");

    int n, numbers[100];
    int maximum;

    while (fscanf(f, "%d", &n) == 1 && n != 0) {
        int maxNumber = 0;
        for (int i = 0; i < n; i++) {
            fscanf(f, "%d", &numbers[i]);

            maximum = maxNum(numbers, n);

        }

        std::printf("%d\n", maximum);
    }


    fclose(f);
    return 0;
}