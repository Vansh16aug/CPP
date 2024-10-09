#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n, int key) {
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + key) % n] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void PrintTheArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key value: ";
    cin >> key;
    rotate(arr, n, key);
    PrintTheArray(arr, n);
    return 0;
}