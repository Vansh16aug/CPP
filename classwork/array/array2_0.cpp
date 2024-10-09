#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    int arr[n]={0};
    cout<<"##############################Elements of array are#############################"<<endl;
    for(int i=0;i<n;i++){
        cout<<"The "<<i+1 <<" element of array is :"<<arr[i]<<endl;
    }
    return 0;
}