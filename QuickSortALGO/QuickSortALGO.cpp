#include <iostream>
using namespace std;

void input(int arr[], int size) {
    cout << "Masukkan elemen array:\n";

    for (int i = 0; i < size; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
