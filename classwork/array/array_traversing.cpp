#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the array indexes :";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    //check if elements are greater than 25 or not
    int count=0;
    for(int i=0;i<=n;i++){
        if(arr[i]>25){
            count++;
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl<<"The count of elements are :"<<count;

    return 0;
}