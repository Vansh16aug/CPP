#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;
    cout<<"Enter the number of rows :";
    cin>>n;
    cout<<"Enter the number of columns :";
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<m;j++){
            cin>>arr[n][m];
        }
    }
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<m;j++){
            cout<<arr[n][m]<<" ";
        }
    }
    //insertion
    // int row;
    // cout<<"Enter the row number :";
    // cin>>row;
    // int col;
    // cout<<"Enter the column number :";
    // cin>>col;

    // for(int i=0;i<)
    return 0;
}