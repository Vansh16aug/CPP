#include<iostream>
using namespace std;
class Array{
    public:
    int n;
    int arr[100];
    void Arraycreate(){
        cout<<"Enter the size of array :";
        cin>>n;
        cout<<"Enter the elements of array :";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    }
    int linear_search(int value){
        int flag=0;
        for(int i=0;i<n;i++){
            if(arr[i]==value){
                flag=1;
            }
            break;
        }
        if(flag==1){
            cout<<"Element found ";
        }
        else{
            cout<<"Not found ";
        }
    }
    void ArrayPrint(){
        cout<<"The array :";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Array a;
    a.Arraycreate();
    int val;
    cout<<"Enter what u want to search :";
    cin>>val;

    a.linear_search(val);
    return 0;
}