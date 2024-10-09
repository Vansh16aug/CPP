#include<iostream>
using namespace std;
int findSmallestMissing(int arr[],int n,int x){
    int missing = x+1;
    for(int i=0;i<n;i++){
        if(arr[i]<=x){
            continue;
        }
        if(arr[i]==missing){
            missing++;
        }
        else{
            break;
        }
    }
    return missing;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    int index=findSmallestMissing(arr,n,x);
    cout<<"The smallest missing positive integer greater than "<<x<<" is "<<index<<".";
    return 0;
}