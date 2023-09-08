#include<iostream>
using namespace std;

class Operations {
    int n;
    int value;
    int pos;
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

    void insertion() {
        cout << "Enter the value you want to enter: ";
        cin >> value;
        cout << "Enter the position where to enter: ";
        cin >> pos;


        for (int i=n;i>=pos;i--) {
            arr[i] = arr[i-1];
        }
        arr[pos-1] = value;
        n++;
    }

    void deletion() {
        cout << "Enter the position from where to delete: ";
        cin >> pos;
        for (int i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
};

int main() {
    Operations op;
    op.ArrayCreation();

    while (true) {
        cout << "Operations :"<<endl;
        cout<<"1. Insert a value"<<endl;
        cout<<"2. Delete a value"<<endl;
        cout<<"3. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                op.insertion();
                op.ArrayPrinting();
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
