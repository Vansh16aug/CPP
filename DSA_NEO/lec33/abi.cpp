#include <stdio.h>
#include <stdlib.h>

void heapify(int arr[], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
void buildMaxHeap(int arr[], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
}

void deleteAllMaxOccurrences(int arr[], int* n) {
   

    int maxElement = arr[0];
    int count = 0;

    for (int i = 0; i < *n; i++) {
        if (arr[i] == maxElement) {
            count++;
        }
    }
    while (count > 0) {
        arr[0] = arr[*n - 1];
        (*n)--;

        heapify(arr, *n, 0);
        count--;
    }
}

void displayHeap(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    buildMaxHeap(arr, n);
    

    deleteAllMaxOccurrences(arr, &n);
    displayHeap(arr, n);

    return 0;
}