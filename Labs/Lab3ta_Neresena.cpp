#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int ticket = 200;
    int priceforAll = 0;
    char filmType;
    char popcornSize;
    int sumofPopcorn;
    char drink;
    int sumofDrinks;
    char dayofFilm;
    int isVisa = 0;
    cin >> filmType;
    cin >> popcornSize;
    cin >> sumofPopcorn;
    cin >> drink;
    cin >> sumofDrinks;
    cin >> dayofFilm;
    cin >> isVisa;

    if (filmType == 'action') {
        priceforAll += ticket + 40;
    } else if (filmType == 'comedy') {
        priceforAll += ticket + 20;
    } else if (filmType == 'romance') {
        priceforAll += ticket + 30;
    }
    if (dayofFilm == 'Wednesday' && isVisa == 1) {
        priceforAll += ticket * 0.5;
    }

    if (drink == 'Water') {
        priceforAll += 80 * sumofDrinks;
    } else if (drink == 'Fanta' || drink == 'CocaCola' || drink == 'Sprite') {
        priceforAll += 100 * sumofDrinks;
    } else if (drink == 'IceTea') {
        priceforAll += 120 * sumofDrinks;
    }

    if (popcornSize == 'S') {
        priceforAll += 100 * sumofPopcorn;
    } else if (popcornSize == 'M') {
        priceforAll += 150 * sumofPopcorn;
    } else if (popcornSize == 'L') {
        priceforAll += 200 * sumofPopcorn;
    }

    cout << priceforAll;

    return 0;
}
