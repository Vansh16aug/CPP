#include<iostream>
using namespace std;

void insert(int arr[], int& size, int item) { // add parameter for item
    size++;
    arr[size-1] = item;
    int index = size-1;
    while (index > 1) {
        int parent = (index-1) / 2;
        if (arr[parent] < arr[index]) {
            swap(arr[parent], arr[index]);
            index = parent;
        } else {
            return;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void deletion(int arr[],int size){
    
    int last=arr[size-1];
    size--;
    int ptr=0;
    int left=1;
    int right=2;
    arr[ptr]=last; // change arr[ptr] to last
    while(left<=size){
        if(arr[ptr]>=arr[left] && arr[ptr]>=arr[right]){
            break;
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
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={72,54,50,27,36,45};
    int size=6;
    int item; 
    cout<<"Enter new value :";
    cin>>item;
    cout<<"\nAfter insertion :";
    insert(arr,size,item);  
    cout<<endl;
    cout<<"After deletion :";
    deletion(arr,size);
    return 0;
}