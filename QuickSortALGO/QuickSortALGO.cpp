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

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int size) {
    cout << "Array setelah diurutkan:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
