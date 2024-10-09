#include<iostream>
using namespace std;
int main(){    
    int k;    
    cin>>k;    
    int n;    
    int count=0;   
    int arr2[count];    
    for(int i=0;i<n;i++){  
        cin>>n;     
        int arr[n];    
        for(int i=0;i<n;i++){      
            cin>>arr[i];      
            arr2[count]=arr[i];  
            count++;
        }
    }
    //sorting
    for(int i=0;i<count;i++){
        for(int j=0;j<count;j++){
            if(arr2[j]>arr2[j++]){
                swap(arr2[j],arr2[j++]);
            }
        }
    }
    
    //printing
    for(int i=0;i<count;i++){
        cout<<arr2[i]<<" ";
    }
    return 0;
}