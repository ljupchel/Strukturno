/*
 * За еден природен број а велиме дека е порамнување на друг природен број b ако и само ако цифрите еднакви на 9 во бројот b се заменети со цифрата 7 во бројот а.

Пример. Бројот 734775 е порамнување на бројот 934795.

Од стандарден влез се внесуваат непознат број на цели броеви (не повеќе од 100), се додека не се внесе нешто што не може да се интерпретира како цел број.

Ваша задача е да ги отпечатите најмалите 5 од порамнувањата на сите внесени броеви, по редослед од најмалиот кон најголемиот.

Забелешка: Доколку се внесат помалку од 5 броеви, тогаш печатите толку броеви колку што се соодветно внесени.

Наоѓањето на порамнувањето на даден број треба да се реализира во посебна рекурзивна функција poramnet(int a).

Пример.

За броевите: 9592, 69403, 100007, 6, 987, 6977, 33439,

треба да се најдат нивните порамнувања ( тоа се: 7572, 67403, 100007, 6, 787, 6777 и 33437, соодветно),

и да се отпечатат најмалите 5 од нив по овој редослед: 6 787 6777 7572 33437.
 */
#include <iostream>

using namespace std;

int isEven(int a) {
    if (a == 0) {
        return a;
    } else {
        if ((a % 10) == 9) {
            return 1 + isEven(a / 10);
        } else {
            return 0 + isEven(a / 10);
        }
    }
}

int transform(int number,int * numbers) {
    int counter = 0;
    int num = number;
    while (num != 0) {
        counter++;
        num /= 10;
    }
    for (int i = 0; i < counter; i++) {
        for (int j = 0; j < counter; j++) {
            if (numbers[j] == 9) {
                numbers[j] = 0;
                numbers[j] += 7;
            }
        }
    }
    return numbers[counter];
}


int main() {
    int number;
    int numbers[100];
    int counter = 0;
    int k = 0;
    int newNumber = 0;
    while (true) {
        if (cin >> number) {
            numbers[k++] = number;
            counter++;
        } else {
            break;
        }
        if (isEven(number)) {
            newNumber = transform(number, numbers);
            number = newNumber;
        }
        cout << number << " ";
    }
    return 0;
}