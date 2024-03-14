/*
 * Од стандарден влез се вчитуваaт три броја кои ги означуваат времињата (во минути) со кои три натпреварувачи истрчале 5км на Скопскиот маратон.

Да се испечати редниот број на најбрзиот натпреварувач. Доколку најбрзо време имаат повеќе од еден натпреварувач, се печатат редните броеви на сите такви натпреварувач
 */
#include <iostream>

using namespace std;

int main () {
    float runner1, runner2, runner3;
    cin >> runner1 >> runner2 >> runner3;
    if (runner1 <= runner2 && runner1 <= runner3) {
        cout << "1";
    }
    if (runner2 <= runner1 && runner2 <= runner3) {
        cout << "2";
    }
    if (runner3 <= runner1 && runner3 <= runner2) {
        cout << "3";
    }
    return 0;
}