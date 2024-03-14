/*
 * Да се напише програма каде што се внесува код, цена на производ и сума која што корисникот ја има.

Последните две цифри од кодот означуваат колку % ддв треба да се наплати.

Да се пресмета вкупната цена која што корисникот треба да ја плати и да се испечати 1 доколку
има пари да ја плати сумата, а во спротивно 0. Задачата да се реши со логички операции, без if-else.

 15618 565 1000
 */
#include <iostream>

using namespace std;

int main () {
    int code, sumofPerson;
    float priceofProduct;
    cin >> code >> priceofProduct >> sumofPerson;
    float tax = code % 100;
    tax = (tax * priceofProduct) / 100;
    priceofProduct += tax;
    cout << priceofProduct << "\n";
    if (sumofPerson < priceofProduct) {
        cout << "0";
    } else {
        cout << "1";
    }
    return 0;
}