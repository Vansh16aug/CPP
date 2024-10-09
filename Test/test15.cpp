#include <iostream>
using namespace std;

int findCrossOver(int arr[], int low, int high, int x)
{
    if (arr[high] <= x)
        return high;
    if (arr[low] > x)
        return low;

    int mid = (low + high) / 2;

    if (arr[mid] <= x && arr[mid + 1] > x)
        return mid;

    if (arr[mid] < x)
        return findCrossOver(arr, mid + 1, high, x);

    return findCrossOver(arr, low, mid - 1, x);
}

void printKclosest(int arr[], int x, int k, int n)
{
    int l = findCrossOver(arr, 0, n - 1, x);
    int r = l + 1;
    int count = 0;

    if (arr[l] == x)
        l--;

    while (l >= 0 && r < n && count < k)
    {
        if (x - arr[l] < arr[r] - x)
            cout << arr[l--] << " ";
        else
            cout << arr[r++] << " ";
        count++;
    }

    while (count < k && l >= 0)
        cout << arr[l--] << " ", count++;

    while (count < k && r < n)
        cout << arr[r++] << " ", count++;
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    int x;
    cin >> x;

    int k;
    cin >> k;

    printKclosest(arr, x, k, n);

    delete[] arr;

    return 0;
}