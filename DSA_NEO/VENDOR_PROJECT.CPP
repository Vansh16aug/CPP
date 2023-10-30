#include <stdio.h>

void max_heap(int *a, int m, int n) {
    int largest;
    int temp;

    largest = m;
    int left = 2 * m;
    int right = 2 * m + 1;

    if (left <= n && a[left] > a[largest]) {
        largest = left;
    }

    if (right <= n && a[right] > a[largest]) {
        largest = right;
    }

    if (largest != m) {
        // Swap a[m] and a[largest]
        temp = a[m];
        a[m] = a[largest];
        a[largest] = temp;
        max_heap(a, largest, n);
    }
}

void build_maxheap(int *a, int n) {
    int k;
    for (k = n / 2; k >= 1; k--) {
        max_heap(a, k, n);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);

    int a[n + 1]; // Adjusted array size to start from index 1
    for (i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    build_maxheap(a, n);
    printf("Max heap\n");
    for (i = 1; i <= n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nThe maximum value is %d\n", a[1]);

    return 0;
}
