#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,key){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }return -1;
}

int findclosest(int arr[],int key,int index){
    int left=index-1;
    int right=index;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int index=binarysearch(arr,n,key);
    if(index!=-1){
        
    }
    int index2=findclosest(arr,key,index);
    return 0;
}