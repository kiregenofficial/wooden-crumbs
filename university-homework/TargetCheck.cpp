#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

/* Создать алгоритм для определения попадания точки с координатами (x, y) в мишень.
 * Написать программу с использованием условного оператора if. */

bool chk(const double slt[2]) {   // slt[] = {x , y}
    bool a = slt[0] >= 0;
    bool b = (2 * slt[1]) >= 0;
    bool c = ((2 - slt[0]) - (2 * slt[1])) >= 0;

    return (a*b*c);
}

int FirstTask() {

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык

    double crd[2] = {0 , 0}; // x , y

    cout << "Пожалуйста, введите координаты..." << endl;
    cout << "X = ";
    cin >> crd[0];
    cout << "Y = ";
    cin >> crd[1];

    double slt[2] = {abs(crd[0]) , abs(crd[1])};
    double rad = sqrt(pow(slt[0], 2) + pow(slt[1], 2));

    bool r = (rad <= 1 && (crd[0] * crd[1] >= 0));
    bool t = (chk(slt) && (crd[0] * crd[1] <= 0));

    if (r || t) {
        cout << "Есть попадание!" << endl;
    } else {
        cout << "Нету попадания!" << endl;
    }

    system("pause");
    return (r || t);
}
