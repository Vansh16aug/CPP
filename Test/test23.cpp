// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n-2-i;j+=2){
            if(a[j]<a[j+2]){
                int temp=a[j];
                a[j]=a[j+2];
                a[j+2]=temp;
            }
        }
    }
    for(int i=1;i<n;i+=2){
        for(int j=1;j<n-2-i;j+=2){
            if(a[j]>a[j+2]){
                int temp=a[j];
                a[j]=a[j+2];
                a[j+2]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}