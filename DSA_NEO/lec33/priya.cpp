#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void heapifyDown(int *heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;
    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(&heap[i], &heap[largest]);
        heapifyDown(heap, n, largest);
    }
}

void deleteTallestFlower(int *heap, int *n) {
    if (*n <= 0) {
        return;
    }

    swap(&heap[0], &heap[*n - 1]);
    (*n)--;
    heapifyDown(heap, *n, 0);
}

int main() {
    int *heap;
    int n;
    scanf("%d", &n);
    heap = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &heap[i]);
    }

    for (int i = n / 2 - 1; i >= 0; i--) {
        heapifyDown(heap, n, i);
    }

    deleteTallestFlower(heap, &n);

    for (int i = 0; i < n; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
    free(heap);
    return 0;
}
