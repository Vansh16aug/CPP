#include<bits/stdc++.h>
using namespace std;
class Array{
    int *arr=NULL;
    int size;
    public:
    // constructor used to allocate the memory
        Array(int s){
            size=s;
            arr=new int[size];
        }
        // function to get elements
        void get_data(){
            cout<<"Enter the array elements :";
            for(int i=0;i<size;i++){
                cin>>*(arr+i);
            }
        }
        // function to print elements
        void put_data(){
            cout<<"The array printed is :";
            for(int i=0;i<size;i++){
                cout<<*(arr+i)<<" ";
            }
        }
        // destructor used to deallocate the memory
        ~Array(){
            delete[]arr;
        }
};
int main()
{
    int s;
    cout<<"Enter the size of the array :";
    cin>>s;
    Array a(s); // arguement for the size of array
    a.get_data();
    a.put_data();
    return 0;
}