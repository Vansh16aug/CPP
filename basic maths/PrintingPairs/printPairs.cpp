#include<bits/stdc++.h>
using namespace std;

void printing_pairs(int arr[],int n){
    for(int i=0;i<n;i++){
        int x=arr[i];
        for(int j=i+1;i<n;j++){
            int y=arr[j];

            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);

    printing_pairs(arr,n);
    return 0;
}