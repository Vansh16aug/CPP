#include <stdio.h>
#include <stdlib.h>

struct Bid {
    int bid_amount;
};

void swap(struct Bid* a, struct Bid* b) {
    struct Bid temp = *a;
    *a = *b;
    *b = temp;
}

void insertBid(struct Bid heap[], int* heapSize, struct Bid newBid) {
    if (*heapSize >= 100) {
        printf("Max heap size reached. Cannot insert more bids.\n");
        return;
    }

    int i = *heapSize;
    heap[i] = newBid;
    (*heapSize)++;

    while (i > 0 && heap[(i - 1) / 2].bid_amount < heap[i].bid_amount) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Bid heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].bid_amount);
    }
    printf("\n");
}

int main() {
    struct Bid binaryHeap[100];
    int heapSize = 0;

    while (1) {
        struct Bid newBid;
        if (scanf("%d", &newBid.bid_amount) != 1) {
            break;
        }

        insertBid(binaryHeap, &heapSize, newBid);
        
    }
printHeap(binaryHeap, heapSize);
    return 0;
}
