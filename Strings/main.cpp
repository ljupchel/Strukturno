#include <iostream>
#include <string.h>

using namespace std;

int main() {
    char str[100] = ("finki");
    char str1[100] = ("finki");
    if(!strcmp(str, str1)) { // ako sakas da proveris dali dva strings se isti treba so ! pred strcmp
        cout << "0";
    } else {
        cout << "1";
    }
    strncmp(str, str1, 1); // so ovaa funkcija ja sporeduvas prvata bukva
    // ako sakas da seces niza od znaci moze so
    while (str != '\0') {

    }
    return 0;
}
