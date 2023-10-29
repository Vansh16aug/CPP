#include<iostream>
using namespace std;

void insert(int arr[], int& size, int item) {
    size++;
    arr[size] = item;
    int index = size;
    while (index > 1) {
        int parent = index / 2;
        if (arr[parent] < arr[index]) {
            swap(arr[parent], arr[index]);
            index = parent;
        } else {
            return;
        }
    }
}

void deletion(int arr[],int& size){
    int last=arr[size];
    size--;
    int ptr=1;
    int left=2;
    int right=3;
    arr[ptr]=left;
    while(left<=size){
        if(arr[ptr]>=arr[left]&&arr[ptr]>=arr[right]){
            return;
        }
        if(arr[right]<=arr[left]){
            swap(arr[ptr],arr[left]);
            ptr=left;
        }
        else{
            swap(arr[ptr],arr[right]);
            ptr=right;
        }
        left=2*ptr;
        right=left+1;
    }
}


int main()
{
    int size;
    cout<<"Enter the number of elements in array :";
    cin>>size;
    int* arr = new int[size+1]; // dynamically allocate memory for arr
    for(int i=1;i<=size;i++){ // change loop condition to <=size
        cin>>arr[i];
    }
    // int item;
    // cout<<"Enter new value :";
    // cin>>item;
    // insert(arr, size, item);
    deletion(arr,size);
    for(int i=1;i<=size;i++){ // change loop condition to <=size
        cout<<arr[i]<<" ";
    }
    return 0;
}