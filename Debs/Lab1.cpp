// В функции вычислить сумму элементов одномерного массива,
// расположенных между его максимумом и минимумом.
// Использовать функцию для каждой строки двумерного массива размерности 18 на 20.

#include <iostream>
#include <windows.h>
#include <algorithm>

using namespace std;

void holaLabOne() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Программа выполняется автоматически, ожидайте..." << endl;
};

void prnt(int el) {
    if (el < 10) {
        if ((el > -10))
            cout << " ";
        if ((el >= 0))
            cout << " ";
    } else
        cout << " ";
    cout << " " << el;
}

int smtr(const int mas[], int size) {
    int max = 0, min = 0;
    int finSum = 0;

    for (int i = 0; i < size; i++) {
        if (mas[i] >= mas[max])
            max = i;
        if (mas[i] <= mas[min])
            min = i;
    }

    if (min > max)
        swap(min, max);
    for (int j = min + 1; j < max; j++)
        finSum += mas[j];
    return finSum;
}

int smrp(const int *ptr, int size) {

    int ina = 0, inb = 0;
    int finSum = 0;

    for (int i = 0; i < size; i++) {
        if (*(ptr + i) >= *(ptr + ina))
            ina = i;
        if (*(ptr + i) <= *(ptr + inb))
            inb = i;
    }

    if (inb > ina)
        swap(ina, inb);
    for (int j = inb + 1; j < ina; j++)
        finSum += *(ptr + j);
    return finSum;

    return 0;
}

int mainh() {

    holaLabOne();

    int const HEI = 5, WID = 10;
    int M[HEI][WID];
    srand(time(0));

    for (int y = 0; y < HEI; y++) {
        for (int x = 0; x < WID; x++) {
            M[y][x] = rand() % 20;
            prnt(M[y][x]);
        }
        cout << "  => ";
        prnt(smtr(M[y], WID));
        cout << " ";
        prnt(smrp(M[y], WID));
        cout << endl;
    }

    system("pause");
    return 0;
}