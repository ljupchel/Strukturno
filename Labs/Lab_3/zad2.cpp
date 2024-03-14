/*
 * Да се напише програма која за дадени поени од испити по 5 предмети внесени преку стандарден влез ќе пресмета
 * оцена по секој предмет и вкупен просек на студентот според оцените(заокружен на две децимали).

Оценa    Поени
 5            0-49
 6            50-59
 7            60-69
 8            70-79
 9            80-89
 10          90-100
 */
#include <iostream>

using namespace std;

int main () {
    int class1, class2, class3, class4, class5;
    cin >> class1 >> class2 >> class3 >> class4 >> class5;
    int classGrade1 = 0, classGrade2 = 0, classGrade3 = 0, classGrade4 = 0, classGrade5 = 0;
    if (class1 <= 49) {
        classGrade1 = 5;
    }
    else if (class1 >= 50 && class1 <= 59) {
        classGrade1 = 6;
    }
    else if (class1 >= 60 && class1 <= 69) {
        classGrade1 = 7;
    }
    else if (class1 >= 70 && class1 <= 79) {
        classGrade1 = 8;
    }
    else if (class1 >= 80 && class1 <= 89) {
        classGrade1 = 9;
    }
    else if (class1 >= 90 && class1 <= 100) {
        classGrade1 = 10;
    }

    if (class2 <= 49) {
        classGrade2 = 5;
    }
    else if (class2 >= 50 && class2 <= 59) {
        classGrade2 = 6;
    }
    else if (class2 >= 60 && class2 <= 69) {
        classGrade2 = 7;
    }
    else if (class2 >= 70 && class2 <= 79) {
        classGrade2 = 8;
    }
    else if (class2 >= 80 && class2 <= 89) {
        classGrade2 = 9;
    }
    else if (class2 >= 90 && class2 <= 100) {
        classGrade2 = 10;
    }

    if (class3 <= 49) {
        classGrade3 = 5;
    }
    else if (class3 >= 50 && class3 <= 59) {
        classGrade3 = 6;
    }
    else if (class3 >= 60 && class3 <= 69) {
        classGrade3 = 7;
    }
    else if (class3 >= 70 && class3 <= 79) {
        classGrade3 = 8;
    }
    else if (class3 >= 80 && class3 <= 89) {
        classGrade3 = 9;
    }
    else if (class3 >= 90 && class3 <= 100) {
        classGrade3 = 10;
    }

    if (class4 <= 49) {
        classGrade4 = 5;
    }
    else if (class4 >= 50 && class4 <= 59) {
        classGrade4 = 6;
    }
    else if (class4 >= 60 && class4 <= 69) {
        classGrade4 = 7;
    }
    else if (class4 >= 70 && class4 <= 79) {
        classGrade4 = 8;
    }
    else if (class4 >= 80 && class4 <= 89) {
        classGrade4 = 9;
    }
    else if (class4 >= 90 && class4 <= 100) {
        classGrade4 = 10;
    }

    if (class5 <= 49) {
        classGrade5 = 5;
    }
    else if (class5 >= 50 && class5 <= 59) {
        classGrade5 = 6;
    }
    else if (class5 >= 60 && class5 <= 69) {
        classGrade5 = 7;
    }
    else if (class5 >= 70 && class5 <= 79) {
        classGrade5 = 8;
    }
    else if (class5 >= 80 && class5 <= 89) {
        classGrade5 = 9;
    }
    else if (class5 >= 90 && class5 <= 100) {
        classGrade5 = 10;
    }
    float sum = (float)classGrade1 + classGrade2 + classGrade3 + classGrade4 + classGrade5;
    cout << classGrade1 << " " << classGrade2 << " " << classGrade3 << " " << classGrade4 << " " << classGrade5 << endl;
    cout << sum / 5.0;
    return 0;
}