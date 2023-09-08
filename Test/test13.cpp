#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    //merging
    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[i];
    }
    
    int minimum=arr1[0];
    for(int i=0;i<n+m;i++){
        if(arr1[i]<minimum){
            minimum=arr1[i];
        }
    }
    cout<<minimum;
    // for(int i=0;i<n+m;i++){
    //     cout<<arr1[i]<<" ";
    // }
    return 0;
}