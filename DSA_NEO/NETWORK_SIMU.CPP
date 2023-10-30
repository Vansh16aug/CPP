#include <iostream>
#include <vector>

void maxHeapify(std::vector<int>& maxHeap, int i) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int largest = i;

    if (left < maxHeap.size() && maxHeap[left] > maxHeap[largest]) {
        largest = left;
    }

    if (right < maxHeap.size() && maxHeap[right] > maxHeap[largest]) {
        largest = right;
    }

    if (largest != i) {
        std::swap(maxHeap[i], maxHeap[largest]);
        maxHeapify(maxHeap, largest);
    }
}

void buildMaxHeap(std::vector<int>& maxHeap) {
    int n = maxHeap.size();
    for (int i = (n / 2) - 1; i >= 0; i--) {
        maxHeapify(maxHeap, i);
    }
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> minHeap(n);

    for (int i = 0; i < n; i++) {
        std::cin >> minHeap[i];
    }

    buildMaxHeap(minHeap);

    // std::cout << "The max-heap array is: ";
    for (int i = 0; i < n; i++) {
        std::cout << minHeap[i] << " ";
    }
    
    int largest = minHeap[0]; // The largest element is the root of the max-heap.
    std::cout << "\nThe largest element is " << largest << std::endl;

    return 0;
}
