#include <iostream>
#include <windows.h>

using namespace std;

/* В массиве А, содержащем 15 элементов, определить среднее арифметическое положительных
 * элементов, расположенных после максимального элемента данного массива. */

void holaTri() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Пожалуйста, введите массив из 15 чисел, разделяя каждое пробелом..." << endl;
}

int SecondTask() {

    holaTri();

    int A[15];
    int max = 0, ind = 0, cnt = 0;
    double mid = 0;

    for (int i = 0; i < 15; i++) {
        cin >> A[i];
        if (A[i] >= max) {
            max = A[i];
            ind = i;
        }
    }

    for (int j = ind + 1; j < 15; j++) {
        if (A[j] > 0) {
            mid += A[j];
            cnt++;
        }
    }

    cout << "Самый большой элемент: X = " << max << endl;

    if (cnt != 0) {
        cout << "Среднее значение чисел после X:" << mid / cnt << endl;
    } else {
        cout << "Доступных цифр после X не осталось" << endl;
    }

    system("pause");
    return 0;
}