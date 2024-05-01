#include <iostream>
#include <windows.h>

using namespace std;

int arra(int arr[]) {

    int *ptr = &arr[0];

    for (int i = 0; i < 5; i++) {
        cout << "Value of " << i << " arr[" << i << "] is " << *(ptr + i) << endl;
        cout << "Address of " << *(ptr + i) << " is  " << ptr + i << endl << endl;
    }

    return 0;
}

int mahjdfin() {

    int arr[5] = {6, 2, 5, 7, 4};

    arra(arr);

    cout << endl;

    system("pause");
    return 0;
}