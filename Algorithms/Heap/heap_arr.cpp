#include<iostream>
using namespace std;
void deletion(){
    int arr[6]={72,54,50,27,36,45};
    int size=6; // initialize size to the number of elements in the array
    int last=arr[size-1];
    size--;
    int ptr=0;
    int left=1;
    int right=2;
    arr[ptr]=left;
    while(left<=size){
        if(arr[ptr]>=arr[left]&&arr[ptr]>=arr[right]){
            break;
        }
        if(arr[right]<=arr[left]){
            swap(arr[ptr],arr[left]);
            ptr=left;
        }
        else{
            swap(arr[ptr],arr[right]);
            ptr=right;
        }
        left=2*ptr;
        right=left+1;
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    deletion();
    return 0;
}