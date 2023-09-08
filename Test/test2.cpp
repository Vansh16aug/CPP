#include<iostream>
using namespace std;
int main(){
    const int MAX_SIZE=100;
    int n;
    cin>>n;
    int arr1[MAX_SIZE];
    for(int i=0;i<n;i++){
        cin>>arr1[n];
    }
    int m;
    cin>>m;
    int arr2[MAX_SIZE];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    // int temp[MAX_SIZE];
    
    for(int i=0;i<m;i++){
        arr1[n+i]=arr2[i];
    }
    
    for(int i=0;i<n+m;i++){
        cout<<arr1[i];
    }
    return 0;
}