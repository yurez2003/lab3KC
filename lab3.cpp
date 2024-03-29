#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, j, key;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    for (int i = 0; i < 1099999; i++) {
        int arr[75];
        for (int i = 0; i < 75; i++) {
            arr[i] = rand() % 75 + 1;
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        insertionSort(arr, n);
    }
    cout << "LAB3";
    return 0;
}