#include<bits/stdc++.h>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
        arr[0]=-1;
        size=0;
    }

    void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index>1){
            int parent=index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
    void deletion(){
        if(size==0){
            cout<<"Nothing to delete"<<endl;
            return;
        }
        // step 1: last elememnt to first element
        arr[1]=arr[size];

        // step 2: remove last element
        size--;

        // step 3: take root node to its correct position
        int index = 1;

        while(index < size){

            int leftIndex = 2 * index;
            int rightIndex = 2 * index + 1;
            int swapIndex = index;

           if(leftIndex <= size && arr[swapIndex] < arr[leftIndex]){
               swapIndex = leftIndex;
           }
           if(rightIndex <= size && arr[swapIndex] < arr[rightIndex]){
               swapIndex = rightIndex;
           }

            if(index != swapIndex){
                swap(arr[index], arr[swapIndex]);
                index = swapIndex;
            }
            else return ;
        }
    }

    
    
    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

void heapify(int arr[],int n,int i){
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}


int main()
{
    Heap h;
    h.insert(1);
    h.insert(2);
    h.insert(3);
    h.insert(4);
    h.insert(5);
    h.print();
    h.deletion();
    h.print();

    
    int arr[6]={-1,34,54,23,67,66};
    int n=5;
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}