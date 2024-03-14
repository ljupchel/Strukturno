

#include <iostream>

using namespace std;

int main () {
    int number;
    cin >> number;
    int num1 = number % 10;
    int num2 = number / 10 % 10;
    number %= 100;
    cout << num1 << " " << num2 << " " << number;
    return 0;
}