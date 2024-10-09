// Write a C++ program that dynamically allocates memory for a 2D array of integers with dimensions m and n, where m and n are provided by the user. Initialize the elements of the 2D array with values entered by the user, and then calculate and display the sum of each row in the array. Remember to deallocate the dynamically allocated memory after use.

#include<bits/stdc++.h>
using namespace std;
class Arr{
    public:
    int** arr=NULL;
    int n,m;
    Arr(int a,int b){
        n=a;
        m=b;
        arr=new int*[n];
        for(int i=0;i<n;i++){
            arr[i]=new int[m];
        }
    }
    void get_data(){
        cout<<"Enter the elements of array :"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }
    }
    
    void print_data(){
        cout<<"Elements of array are :"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    ~Arr(){
         for (int i = 0; i < n; i++) {
            delete[] arr[i];
        }
        // Deallocate memory for the array of pointers
        delete[] arr;
    }
};
int main()
{
    int a,b;
    cout<<"Enter the number of rows :";
    cin>>a;
    cout<<"Enter the number of columns :";
    cin>>b;
    Arr arr(a,b);
    arr.get_data();
    arr.print_data();
    return 0;
}