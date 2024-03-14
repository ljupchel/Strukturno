/*
Од стандарден влез се читаат непознат број на хексадецимални цифри се додека не се внесе точка (.). Ваша задача е да го пресметате декадниот збир на внесените хексадецимални цифри.
Доколку добиениот декаден збир е делив со 16 се печати Pogodok. Доколку истиот тој збир покрај што е делив со 16 плус завршува на 16 (последните цифри му се 1 и 6),
се печати Poln pogodok инаку се печати самиот збир.

Пример:

влез: A 7 F 2 0 c A 5

излез: 61

(61 = 10 + 7 + 15 + 2 + 0 + 12 + 10 + 5, бројот не е делив со 16, ниту пак последните цифри му се 1,6)
 */
#include <iostream>
#include <cctype>

using namespace std;

int main () {
    char input;
    int sum = 0;
    while (cin >> input) {
        if (input == '.') {
            break;
        }

        if (isdigit(input)) {
            int digitValue = input - '0';
            sum += digitValue;
        }
        if (input == 'A' || input == 'a') {
            sum += 10;
        } else if (input == 'B' || input == 'b') {
            sum += 11;
        } else if (input == 'C' || input == 'c') {
            sum += 12;
        } else if (input == 'D' || input == 'd') {
            sum += 13;
        } else if (input == 'E' || input == 'e') {
            sum += 14;
        } else if (input == 'F' || input == 'f') {
            sum += 15;
        }
    }
    int tmpLast = sum % 10;
    int tmpSecondToLast = sum % 100 / 10;
    int flag = 0;
    if (sum % 16 == 0) {
        flag = 1;
        if (tmpLast == 6 && tmpSecondToLast == 1) {
            flag = 2;
        }
    }
    if (flag == 1) {
        cout << "Pogodok";
        return 0;
    }
    if (flag == 2) {
        cout << "Poln Pogodok";
        return 0;
    }
    if (flag == 0) {
        cout << sum;
        return 0;
    }
    return 0;
}