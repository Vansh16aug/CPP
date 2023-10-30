#include <stdio.h>
#include <stdlib.h>

struct Job {
    int priority;
};

void swap(struct Job* a, struct Job* b) {
    struct Job temp = *a;
    *a = *b;
    *b = temp;
}

void minHeapify(struct Job heap[], int n, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left].priority < heap[smallest].priority) {
        smallest = left;
    }

    if (right < n && heap[right].priority < heap[smallest].priority) {
        smallest = right;
    }

    if (smallest != i) {
        swap(&heap[i], &heap[smallest]);
        minHeapify(heap, n, smallest);
    }
}

void insertJob(struct Job heap[], int* heapSize, int newJobPriority) {
    if (*heapSize >= 100) {
        printf("Max heap size reached. Cannot insert more jobs.\n");
        return;
    }

    int i = *heapSize;
    heap[i].priority = newJobPriority;
    (*heapSize)++;

    while (i > 0 && heap[(i - 1) / 2].priority > heap[i].priority) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Job heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].priority);
    }
    printf("\n");
}

int main() {
    struct Job minHeap[100];
    int heapSize = 0;

    while (1) {
        int newJobPriority;
        if (scanf("%d", &newJobPriority) != 1) {
            break;
        }

        insertJob(minHeap, &heapSize, newJobPriority);
        
    }
printHeap(minHeap, heapSize);
    return 0;
}
