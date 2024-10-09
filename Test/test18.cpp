#include<iostream>
using namespace std;
void bubblesort(int arr[],int n){
    int didswap=0;
    int pass=0;
    for(int i=n-1;i>=1;i--){
        
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
                didswap++;
            }
            
        }
        pass++;
        cout<<"Iteration "<<pass<<": ";   
        for(int k=0;k<n;k++){             
            cout<<arr[k]<<" ";           
        }            
        cout<<endl;
        
        if(didswap==0){
            break;
        }
    }
    
    
    cout<<"Sorted array: "; 
    for(int i=0;i<n;i++){      
         cout<<arr[i]<<" ";  
    }
}
int main(){ 
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Original array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubblesort(arr,n);
   
    return 0;
}