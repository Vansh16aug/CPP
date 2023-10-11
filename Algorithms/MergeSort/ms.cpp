#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;

    //creating 2 arrays
    int *first=new int(len1);
    int *second=new int(len2);

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    int k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }

    //merge 2 arrays
    int index1=0;
    int index2=0;
}
void mergeSort(int *arr,int s,int e){
    if(s>e){
        return;
    }
    int mid=(s+e)/2;
    //Left sort 
    mergeSort(arr,s,mid);

    //Right sort
    mergeSort(arr,mid+1,e);

    merge(arr,s,e);
}
int main()
{
    int arr[2,5,1,6,9];
    int n=5;
    mergeSort(arr,0,n-1);
    return 0;
}