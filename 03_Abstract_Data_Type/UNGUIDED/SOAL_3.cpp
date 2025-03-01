#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    cout << "Array 1:" << endl;
    tampilArray(array1);

    cout << "Array 2:" << endl;
    tampilArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\nSetelah menukar isi pada posisi (1, 1):" << endl;

    cout << "Array 1:" << endl;
    tampilArray(array1);

    cout << "Array 2:" << endl;
    tampilArray(array2);

    int a = 10, b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "\nSebelum menukar pointer:" << endl;
    cout << "a = " << *ptr1 << ", b = " << *ptr2 << endl;

    tukarPointer(ptr1, ptr2);

    cout << "Setelah menukar pointer:" << endl;
    cout << "a = " << *ptr1 << ", b = " << *ptr2 << endl;

    return 0;
}
