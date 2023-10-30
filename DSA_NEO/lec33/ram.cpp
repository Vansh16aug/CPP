#include <stdio.h>
#include <string.h>

void stringSwap(char str1[], char str2[]) {
    char temp[50];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void maxHeapify(char arr[][50], int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && strcmp(arr[left], arr[largest]) > 0)
        largest = left;

    if (right < n && strcmp(arr[right], arr[largest]) > 0)
        largest = right;

    if (largest != i) {
        stringSwap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void buildMaxHeap(char arr[][50], int n) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        maxHeapify(arr, n, i);
    }
}

void heapSort(char arr[][50], int n) {
    buildMaxHeap(arr, n);
    for (int i = n - 1; i > 0; i--) {
        stringSwap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char arr[n][50];

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    heapSort(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    return 0;
}
 