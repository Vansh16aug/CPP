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
            cout<<endl;
        }
        void add_arr(){
            int sum=0;
            for(int i=0;i<size;i++){
                sum=sum+(*(arr+i));
            }
            cout<<"Sum of array elements is :"<<sum<<endl;
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
    a.add_arr();
    return 0;
}