//Создать функцию, находящую площадь треугольника по известным
//длинам двух сторон и углу между ними. Случайным образом задать четыре
//треугольника. Вывести на экран их площади в порядке возрастания

#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void holaLabZer() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Программа выполняется автоматически, ожидайте..." << endl;
};

double trng(int, int, int);

int Something() {

    holaLabZer();

    double parm[4][4];
    srand(time(0));

    for (auto &i: parm) {
        i[0] = rand() % 9 + 1;
        i[1] = rand() % 9 + 1;
        i[2] = rand() % 180;
        i[3] = trng(i[0], i[1], i[2]);
    }

    for (int c = 0; c < 4; c++) {
        cout << "T" << c + 1 << ":" << parm[c][0] << " " << parm[c][1] << " " << parm[c][2] << endl;
    }

    cout << endl;

    for (int c = 1; c < 4; c++) {
        for (int d = 0; d < 4 - c; d++) {
            if (parm[d][3] > parm[d + 1][3])
                swap(parm[d][3], parm[d + 1][3]);
        }
    }

    for (auto &i: parm) {
        if ((i[3] >= 0))
            cout << " ";
        cout << " " << i[3] << endl;
    }

    system("pause");
    return 0;
}

double trng(int a, int b, int f) {
    return (0.5 * a * b * sin(f));
}