#include <iostream>

using namespace std;

int main() {
    int array[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < n; i++) {
        if (array[i] % 2 == 0) {
            array[i] += 1;
        }
        else {
            array[i] -= 1;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    return 0;
}