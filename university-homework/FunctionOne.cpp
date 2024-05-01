#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void holaOne() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Пожалуйста, введите длину ребра пирамиды и ее высоту, разделяя значения пробелом..." << endl;
};

double srf(double, double);

int FuncOne() {

    holaOne();

    double k, l;
    cin >> k >> l;

    cout << "Площадь полной поверхности правильной треугольной пирамиды: " << srf(k, l) << endl;

    system("pause");
    return 0;
}

double srf(double a, double h) {
    return ((a / 4) * (a * sqrt(3) + 6 * h));
}