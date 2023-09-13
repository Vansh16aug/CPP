#include <iostream>

using namespace std;

// Function to calculate total sales and store it in result array
void calculateTotalSales(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int maxLength = max(n1, n2); // Find the maximum length between the two arrays
    int carry = 0;

    // Iterate through the arrays from right to left and calculate the total sales
    for (int i = 0; i < maxLength; i++) {
        int sales1 = (i < n1) ? arr1[n1 - i - 1] : 0;
        int sales2 = (i < n2) ? arr2[n2 - i - 1] : 0;

        int total = sales1 + sales2 + carry;
        carry = total / 10;
        result[maxLength - i - 1] = total % 10;
    }

    // If there is a carry after the loop, add it to the beginning of the result array
    if (carry > 0) {
        for (int i = maxLength; i > 0; i--) {
            result[i] = result[i - 1];
        }
        result[0] = carry;
    }
}

int main() {
    int n1, n2;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    int maxLength = max(n1, n2);
    int result[maxLength + 1]; // +1 for carry if needed

    calculateTotalSales(arr1, n1, arr2, n2, result);

    // Output the results
    cout << "First linked list: ";
    for (int i = 0; i < n1; i++) {
        cout << arr1[i] << " ";
    }
    // n1--;
    cout << endl;

    cout << "Second linked list: ";
    for (int i = 0; i < n2; i++) {
        cout << arr2[i] << " ";
    }
    // n2--;
    cout << endl;

    cout << "Total Sales: ";
    for (int i = 0; i < maxLength + 1; i++) {
        cout << result[i] << " ";
    }
    // maxLength--;
    cout << endl;

    return 0;
}
