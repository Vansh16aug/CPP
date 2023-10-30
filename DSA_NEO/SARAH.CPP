#include <stdio.h>
#include <stdlib.h>

struct RideRequest {
    int estimatedPickUpTime;
};

void swap(struct RideRequest* a, struct RideRequest* b) {
    struct RideRequest temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(struct RideRequest heap[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left].estimatedPickUpTime < heap[smallest].estimatedPickUpTime) {
        smallest = left;
    }

    if (right < n && heap[right].estimatedPickUpTime < heap[smallest].estimatedPickUpTime) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void insertRideRequest(struct RideRequest heap[], int* heapSize, struct RideRequest newRequest) {
    if (*heapSize >= 100) {
        printf("Max heap size reached. Cannot insert more ride requests.\n");
        return;
    }

    int i = *heapSize;
    heap[i] = newRequest;
    (*heapSize)++;

    while (i > 0 && heap[(i - 1) / 2].estimatedPickUpTime > heap[i].estimatedPickUpTime) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct RideRequest heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].estimatedPickUpTime);
    }
    printf("\n");
}

int main() {
    struct RideRequest minHeap[100];
    int heapSize = 0;

    while (1) {
        struct RideRequest newRequest;
        if (scanf("%d", &newRequest.estimatedPickUpTime) != 1) {
            break;
        }

        insertRideRequest(minHeap, &heapSize, newRequest);
       
    }
 printHeap(minHeap, heapSize);
    return 0;
}
