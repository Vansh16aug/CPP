#include<bits/stdc++.h>
using namespace std;
class Arr{
    public:
    int* arr=NULL;
    int n;
    Arr(int a){
        n=a;
        arr=new int[n];
    }
    void get_data(){
        cout<<"Enter the elements of array :";
        for(int i=0;i<n;i++){
            cin>>*(arr+i);
        }
    }
    void print_data(){
        cout<<"Elements of array are :";
        for(int i=0;i<n;i++){
            cout<<*(arr+i)<<" ";
        }
    }
    ~Arr(){
        delete[]arr;
    }
};
int main ()
{
    int a;
    cout<<"Enter the value of size :";
    cin>>a;
    Arr ar(a);
    ar.get_data();
    ar.print_data();
    return 0;
}