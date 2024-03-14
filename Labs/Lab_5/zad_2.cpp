/*
 * Да се дефинираат и имплементираат следните функции:

int obratenBroj (int broj) - функција која што прима еден аргумент broj и како резултат го враќа неговиот обратен број.
пример за бројот 1234, функцијата треба да врати резултат 4321.
int sumaNaCifri (int broj) - функција која што прима еден аргумент broj и како резултат ја враќа сумата на цифрите во тој број.
пример за бројот 1234, функцијата треба да врати резултат 10 (1+2+3+4 = 10).
void pecatiVoInterval (int a, int b) - функција што прима два аргументи a и b, но не враќа никаков резултат. Целта на ова функција е само да ги испечати сите броеви во интервалот од а до b (вклучувајќи ги и нив) за коишто важи дека бројот X е делив со обратниот број од збирот на цифрите на бројот X. Да се искористат првите две функции за имплементирање на оваа функција.
Пример за таков број:

992. Збир на цифри 9+9+2 = 20. Обратен број на збирот на цифрите на 992 е 20 -> 2. Бројот 992 е делив со 2, па го исполнува условот
 */
#include <iostream>

using namespace std;

int reversedNum(int i) {
    int num = i;
    int reversed = 0;
    while (num != 0) {
        int tmp = num % 10;
        reversed = reversed * 10 + tmp;
        num /= 10;
    }
    return reversed;
}

int sumOfDigits(int i) {
    int num = reversedNum(i);
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void printInInterval(int a, int b) {
   for (int i = a; i <= b; i++) {
       int sum = sumOfDigits(i);
       int reversed = reversedNum(i);
       if (reversed != 0 && reversed % sum == 0) {
           cout << i << endl;
       }
   }
}


int main() {
    int a, b;
    cin >> a >> b;
    printInInterval(a, b);
    return 0;
}