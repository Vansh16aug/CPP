#include <stdio.h>
#include <stdlib.h>

struct Location {
    int distance;
};

void swap(struct Location* a, struct Location* b) {
    struct Location temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(struct Location heap[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left].distance < heap[smallest].distance) {
        smallest = left;
    }

    if (right < n && heap[right].distance < heap[smallest].distance) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void insertLocation(struct Location heap[], int* heapSize, struct Location newLocation) {
    if (*heapSize >= 100) {
        printf("Max heap size reached. Cannot insert more locations.\n");
        return;
    }

    int i = *heapSize;
    heap[i] = newLocation;
    (*heapSize)++;

    while (i > 0 && heap[(i - 1) / 2].distance > heap[i].distance) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Location heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].distance);
    }
    printf("\n");
}

int main() {
    struct Location binaryHeap[100];
    int heapSize = 0;

    while (1) {
        struct Location newLocation;
        if (scanf("%d", &newLocation.distance) != 1) {
            break;
        }

        insertLocation(binaryHeap, &heapSize, newLocation);
    }

    printHeap(binaryHeap, heapSize);

    return 0;
}
