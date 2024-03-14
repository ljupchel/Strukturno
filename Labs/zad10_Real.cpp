/*
 * Имате купено нова игра која ги има следните правила:
Кога ќе заврши играта добивате P1 поени за секое поминато ниво
Но, доколку имате поминато над C1 нивоа тогаш добивате P2 поени (наместо P1) за секое ниво
Но, доколку имате поминато над C2 (C2>C1) нивоа тогаш добивате P3 поени (наместо P2) за секое ниво
На пример нека P1 = 100; C1 = 3; P2 = 150; C2 = 6; и P3 = 200. Тогаш за

изиграни 2 нивоа ќе добиете 2*P1 = 200 поени
изиграни 4 нивоа ќе добиете 4*P2 = 600 поени
изиграни 6 нивоа ќе добиете 6*P2 = 900 поени
изиграни 8 нивоа ќе добиете 8*P3 = 1600 поени
Вие ја играте играта 3 пати, при што сте поминале A нивоа првиот пат, потоа играјќи повторно од почеток сте поминале B нивоа вториот пат и третиот пат сте поминале C нивоа.

Напишете програма која за дадени вредности P1, C1, P2, C2, P3; и дадени A, B и C ќе пресмета и ќе отпечати колку вкупно поени имате добиено при играњето.
 */
#include <iostream>

using namespace std;

int main () {
    int p1_Points, c1_Levels, p2_Points, c2_Levels, p3_Points;
    cin >> p1_Points >> c1_Levels >> p2_Points >> c2_Levels >> p3_Points;
    int a_Levels, b_Levels, c_Levels;
    int points = 0;
    cin >> a_Levels >> b_Levels >> c_Levels;
    // a
    if (a_Levels <= 2) {
        points += a_Levels * p1_Points;
    } else if (a_Levels <= 4) {
        points += a_Levels * p2_Points;
    } else if (a_Levels <= 6) {
        points += a_Levels * p2_Points;
    } else {
        points += a_Levels * p3_Points;
    }
    // b
    if (b_Levels <= 2) {
        points += b_Levels * p1_Points;
    } else if (b_Levels <= 4) {
        points += b_Levels * p2_Points;
    } else if (b_Levels <= 6) {
        points += b_Levels * p2_Points;
    } else {
        points += b_Levels * p3_Points;
    }
    // c
    if (c_Levels <= 2) {
        points += c_Levels * p1_Points;
    } else if (c_Levels <= 4) {
        points += c_Levels * p2_Points;
    } else if (c_Levels <= 6) {
        points += c_Levels * p2_Points;
    } else {
        points += c_Levels * p3_Points;
    }

    cout << points;
    return 0;
}