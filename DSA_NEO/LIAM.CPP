#include <stdio.h>
#include <stdlib.h>

struct Task {
    int urgency;
};

void swap(struct Task* a, struct Task* b) {
    struct Task temp = *a;
    *a = *b;
    *b = temp;
}

void insertTask(struct Task heap[], int* heapSize, struct Task newTask) {
    if (*heapSize >= 100) {
        printf("Max heap size reached. Cannot insert more tasks.\n");
        return;
    }

    // Add the new task to the end of the heap
    int i = *heapSize;
    heap[i] = newTask;
    (*heapSize)++;

    // Heapify to maintain the max-heap property
    while (i > 0 && heap[(i - 1) / 2].urgency < heap[i].urgency) {
        swap(&heap[i], &heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

void printHeap(struct Task heap[], int heapSize) {
    for (int i = 0; i < heapSize; i++) {
        printf("%d ", heap[i].urgency);
    }
    printf("\n");
}

int main() {
    struct Task taskHeap[100];
    int heapSize = 0;

    while (1) {
        struct Task newTask;
        if (scanf("%d", &newTask.urgency) != 1 || newTask.urgency == -1) {
            break;
        }
        insertTask(taskHeap, &heapSize, newTask);
    }
    printHeap(taskHeap, heapSize);

    return 0;
}
