/*
* Мартин фрлал паричка пет пати и за секое фрлање запишал 5 или 0 за соодветно добиено петка или глава при фрлањето.
 * Вие ги гледате броевите запишани од Мартин и треба да  отпечатите 1 доколку има добиено барем три пати глава при фрлањето на паричката, а во спротивно 0.
 */
#include <iostream>

using namespace std;

int main () {
    int number;
    int counter = 0;
    for (int i = 0; i < 5; i++) {
        cin >> number;
        if (number == 0) {
            counter++;
        }
    }
    if (counter >= 3) {
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}