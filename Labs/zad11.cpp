/*
 *За еден студент се читаат освоени поени од 5 активности за еден предмет. Услов за еден предмет да биде положен е да се имаат над 50 освоени поени.
 * Ако студентот има 0-50 поени не го положил предметот, ако има 51-60 го положил со 6, 61-70 го положил со 7, 71-80 го положил со 8, 81-90 го положил
 * со 9 и над 90 го положил со 10. Да се испечати оценката која ја имал студентот,неговите поени и да се испечати 1 доколку има услов да добие повисока оценка,
 * а во спротивно 0. Услов за повисока оценка има само ако недостига 1 поен за добивање на повисока оценка.
 *
 * 30 40 5 10 3
 *
 * Ocenka: 9, poeni: 88
 * Nema uslov za povisoka ocenka
 */
#include <iostream>

using namespace std;

int main () {
    int courses[100];
    int sumofPoints = 0;
    for (int i = 0; i < 5; i++) {
        cin >> courses[i];
        sumofPoints += courses[i];
    }
    if (sumofPoints <= 50) {
        cout << "Predmetot ne e polozen";
        return 0;
    }
    if (sumofPoints >= 51 && sumofPoints <= 60) {
        cout << "Ocenka: 6, poeni: " << sumofPoints << "\n";
        if (sumofPoints == 60) {
            cout << "Ima uslov za povisoka ocenka";
        } else {
            cout << "Nema uslov za povisoka ocenka";
        }
    }
    if (sumofPoints >= 61 && sumofPoints <= 70) {
        cout << "Ocenka: 7, poeni: " << sumofPoints << "\n";
        if (sumofPoints == 70) {
            cout << "Ima uslov za povisoka ocenka";
        } else {
            cout << "Nema uslov za povisoka ocenka";
        }
    }
    if (sumofPoints >= 71 && sumofPoints <= 80) {
        cout << "Ocenka: 8, poeni: " << sumofPoints << "\n";
        if (sumofPoints == 80) {
            cout << "Ima uslov za povisoka ocenka";
        } else {
            cout << "Nema uslov za povisoka ocenka";
        }
    }
    if (sumofPoints >= 81 && sumofPoints <= 90) {
        cout << "Ocenka: 9, poeni: " << sumofPoints << "\n";
        if (sumofPoints == 90) {
            cout << "Ima uslov za povisoka ocenka";
        } else {
            cout << "Nema uslov za povisoka ocenka";
        }
    }
    if (sumofPoints >= 91 && sumofPoints <= 100) {
        cout << "Ocenka: 10, poeni: " << sumofPoints;
    }
    return 0;
}