#include <iostream>
#include <windows.h>

using namespace std;

void holaTwo() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Программа выполняется автоматически, ожидайте..." << endl;
};

int FourthTask() {

    holaTwo();

    const int SIZE = 10;
    int M[SIZE][SIZE];
    int maxInd[SIZE];
    srand(time(0));

    for (int & t : maxInd)
        t = 0;

    int minN = 0;
    int tmpX = 0, tmpY = 0;
    int finSum = 0;

    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {
            M[x][y] = rand() % 19 - 9;

            if ((M[x][y] >= 0) && (M[x][y] < 10))
                cout << " ";
            cout << " " << M[x][y];

            if (M[x][y] <= M[tmpX][tmpY]) {
                tmpX = x;
                tmpY = y;
                minN = M[x][y];
            }

            if (M[x][y] >= M[maxInd[y]][y])
                maxInd[y] = x;
        }
        cout << endl;
    }
    cout << endl;

    cout << "В " << tmpX + 1 << " столбце содержится последний минимальный элемент матрицы: " << minN << endl;

    for (int i = 0; i < SIZE; i++) {
        if ((i + 1) % 3 == 0)
            M[maxInd[i]][i] = 0;
    }

    cout << endl;

    for (int y = 0; y < SIZE; y++) {
        for (int x = 0; x < SIZE; x++) {

            if ((M[x][y] >= 0) && (M[x][y] < 10))
                cout << " ";
            cout << " " << M[x][y];

            if ((y > x) && M[x][y] > 0)
                finSum += M[x][y];
        }
        cout << endl;
    }

    cout << endl << "Сумма положительных элементов ниже главной диагонали: " << finSum << endl;

    system("pause");
    return 0;
}