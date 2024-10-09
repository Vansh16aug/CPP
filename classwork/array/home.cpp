// //delete key element from array and for searching the index of the key element using binary search

#include<iostream>
using namespace std;

class Operations {
    int n;
    int arr[100];

public:
    void ArrayCreation() {
        cout << "Enter the size of array: ";
        cin >> n;
        cout << "Enter " << n << " elements for array: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    }

    void ArrayPrinting() {
        cout << "Array after the operation is: ";
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletion() {
        int valu;
        cout << "Enter the value to delete: ";
        cin >> valu;
        int pos = -1; 
        for(int i = 0; i < n; i++) {
            if(arr[i] == valu) {
                pos = i; 
                break;   
            }
        }
        
        if(pos != -1) {
            for (int i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
        }
        else {
            cout << "Value not found in the array." << endl;
        }
    }

    int binary_search(int a) {
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            int mid = (start + end) / 2;
            if (arr[mid] == a) {
                return mid;
            }
            else if (arr[mid] > a) {
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        return -1;
    }
};

int main() {
    Operations op;
    op.ArrayCreation();
    int index;
    while (true) {
        cout << "Operations :" << endl;
        cout << "1. Search a value" << endl;
        cout << "2. Delete a value" << endl;
        cout << "3. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                int value;
                cout << "Enter element to search: ";
                cin >> value;
                index = op.binary_search(value);
                if (index != -1) {
                    cout << value << " is present at index " << index << endl;
                }
                else {
                    cout << value << " is not present at any index." << endl;
                }
                break;
            case 2:
                op.deletion();
                op.ArrayPrinting();
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
