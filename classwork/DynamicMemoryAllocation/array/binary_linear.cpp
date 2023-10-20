// wap to implement linear and binary search using dma 
#include<iostream>
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
        int linear_search(int key){
            for(int i=0;i<size;i++){
                if(arr[i]==key){
                    return i;
                }
            }return -1;
        }

        int binary_search(int key){
            int start=0;
            int end=size-1;
            while(start<=end){
                int mid =(start+end)/2;
                if(arr[mid]==key){
                    return mid;
                }
                else if(arr[mid]>key){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            return -1;
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
    cout<<endl;

    // linear search and binary search

    int key;
    cout<<"Enter the value u want to search :";
    cin>>key;

    int index=a.binary_search(key);

    if(index!=-1){
        cout<<key <<" is present at index "<<index<<endl;
    }
    else{
        cout<<key <<" is not present at any index "<<endl;
    }
    cout<<endl;
    return 0;
}