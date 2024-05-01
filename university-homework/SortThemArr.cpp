#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <algorithm>

using namespace std;

void holaFor() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8); // Потому, что консоль не поддерживает русский язык
    cout << "Создаем и сортируем массив, ожидайте, этот процесс автоматический..." << endl;
};

void prt(int arr[], int prt[], int ind) {
    for (int u = 0; u < ind + 1; u++)
        cout << prt[u] << " ";
    for (int v = 0; v < 19 - ind; v++)
        cout << arr[v] << " ";
    cout << endl;
}

void bub(int B[], int len) {
    for (int c = 1; c < len; c++) {
        for (int d = 0; d < len - c; d++) {
            if (B[d] > B[d + 1])
                swap(B[d], B[d + 1]);
        }
    }
}

void sel(int S[], int len) {
    for (int e = 0; e < len - 1; e++) {
        int min = e;
        for (int f = e + 1; f < len; f++) {
            if (S[f] < S[min])
                min = f;
        }
        swap(S[min], S[e]);
    }
}

int rnd(int A[], int lgt) {
    srand(time(0));
    int ind = -1;
    for (int a = 0; a < lgt; a++) {
        A[a] = rand() % 100 - 35;
        cout << A[a] << " ";
        if (A[a] < 0 && ind == -1)
            ind = a;
    }
    return ind;
}

int ThirdTask() {

    holaFor();

    int A[20], ind = rnd(A, 20);
    cout << endl;

    int len = 19 - ind;
    int B[len], S[len];

    for (int b = 0; b < len; b++) {
        B[b] = A[b + ind + 1];
        S[b] = A[b + ind + 1];
    }

    bub(B, len);
    prt(B, A, ind);

    sel(S, len);
    prt(S, A, ind);

    system("pause");
    return 0;
}