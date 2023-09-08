#include <iostream>
#include <algorithm>

using namespace std;

// Function to find the median of an array
double findMedian(int arr[], int n) {
        sort(arr, arr + n);
        
    // If the number of elements is odd, return the middle element
    if (n % 2 == 1) {
        return static_cast<double>(arr[n / 2]);
    }
    // If the number of elements is even, return the average of the two middle elements
    int mid1 = n / 2;
    int mid2 = mid1 - 1;
    return static_cast<double>((arr[mid1] + arr[mid2])) / 2.0;
}

int main() {
    int m, n;
    cin >> m >> n;
    int array[m * n];
    for (int i = 0; i < m * n; i++) {
            cin >> array[i];
    }
    double median = findMedian(array, m * n);
    cout << median << endl;
    return 0;
}
