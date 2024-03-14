/*
 * Од стандарден влез се внесува даден број X,
 * а потоа се внесуваат броеви додека не се внесе нешто различно од број.
 * За секој од броевите да се провери дали неговиот број на цифри е еднаков со бројот на цифри на Х, и доколку условот е исполнет, да се испечати.
 */
#include <iostream>

using namespace std;

int main () {
    int x;
    int numbers;
    cin >> x;
    while (true) {
        if (cin >> numbers) {
        } else {
            break;
        }
        int counter = 0;
        int counterForX = 0;
        int num = numbers;
        while (num != 0) {
            int number = num % 10;
            counter++;
            num /= 10;
        }
        int numforX = numbers;
        while (numforX != 0) {
            int numberForX = num % 10;
            counterForX++;
            numforX /= 10;
        }
        if (counter == counterForX) {
            cout << numbers << endl;
        }
    }
    return 0;
}