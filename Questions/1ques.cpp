// create array perform sorting then at the answer implement binary search over there then delete if it is present and if not insert that element

#include<iostream>
using namespace std;
int selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int binary_search(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int delete_index(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            i--; 
        }
    }
    cout << "The new array is :";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insert_index(int arr[], int n, int key) {
    // if (index < 0 || index > n) {
    //     cout << "Invalid index for insertion." << endl;
    //     return;
    // }
    // for (int i = n; i > index; i--) {
    //     arr[i] = arr[i - 1];
    // }
    // arr[index] = key;
    // n++;
    for(int i=n;i>=0;i--){
        arr[i+1]=arr[i];
    }
    arr[0]=key;
    n++;

    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        if(mini!=i){
            swap(arr[i],arr[mini]);
        }
    }
    cout<<"The new array is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selection_sort(arr,n);
    int key;
    cout << "Enter the element you want: ";
    cin >> key;

    

    int index = binary_search(arr, n, key);
    if (index != -1) {
        cout << key << " is at index " << index << endl;
        delete_index(arr, n, key);
    } else {
        cout << key << " is not present in the array" << endl;
        int insertIndex;
        // cout << "Enter the index at which to insert: ";
        // cin >> insertIndex;
        insert_index(arr, n, key);
    }

    return 0;
}
