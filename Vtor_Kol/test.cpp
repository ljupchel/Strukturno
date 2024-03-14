//
// Created by ljupc on 14/01/2024.
//
#include <iostream>
#include <cstring>

using namespace std;



int main () {
    int number = 1234;
    int num = number;
    while (number != 0) {
        if ((number % 10) == 3) {

            num /= 10;
            num *= 10;
            num += tmp;
        }
        number /= 10;
    }
    cout << num;
    return 0;
}