/*
 * Да се напише програма каде што се внесува код, цена на производ и сума која што корисникот ја има.

Последните две цифри од кодот означуваат колку % ддв треба да се наплати.

Да се пресмета вкупната цена која што корисникот треба да ја плати и да
се испечати 1 доколку има пари да ја плати сумата, а во спротивно 0. Задачата да се реши со логички операции, без if-else
 */
#include <iostream>

using namespace std;

int main () {
    int code, productSum, sumofCustomer;
    cin >> code >> productSum >> sumofCustomer;
    float tax = code % 100;
    cout << (productSum * tax / 100) + productSum << "\n" << ((productSum * tax / 100) + productSum <= sumofCustomer);
    return 0;
}