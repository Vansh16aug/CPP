#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    reverse(arr,arr+n);
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
    reverseArray(arr,n);
    printArray(arr,n);
    return 0;
}