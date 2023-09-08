#include<bits/stdc++.h>
using namespace std;

void reverseArray(int l,int r,int arr[]){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    reverseArray(l+1,r-1,arr);
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    reverseArray(0,n-1,arr);
    printArray(arr,n);
    return 0;
}