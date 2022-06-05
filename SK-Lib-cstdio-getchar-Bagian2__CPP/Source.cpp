#include <iostream>
#include <cstdio>
#include <conio.h>

/*
    Source by Programiz (https://www.programiz.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    int c, i = 0;
    char str[100];

    cout << "Masukkan Kalimat, tekan Enter untuk berhenti : ";

    do {
        c = getchar();
        str[i] = c;
        i++;
    } while (c != '\n');

    cout << str;

    _getch();
    return 0;
}