#include<iostream>
#include<iomanip>
using namespace std;
void insertionsort(double arr[],int n){
    int didswap=0; 
    int pass=0;   
    for(int i=n-1;i>=1;i--){    
        for(int j=0;j<i;j++){     
            if(arr[j]>arr[j+1]){     
                double temp=arr[j+1];       
                arr[j+1]=arr[j];          
                arr[j]=temp;              
                didswap++;           
                }                 
                }        pass++;   
                cout<<"After Iteration "<<pass<<": ";  
                for(int k=0;k<n;k++){        
                    cout<<fixed<<showpoint<<setprecision(2)<<arr[k]<<" ";          
                }                   
                cout<<endl;          
                    if(didswap==0){      
                        break;    
                        } 
                        }     
                        cout<<"Sorted order: ";    
                        for(int i=0;i<n;i++){      
                            cout<<fixed<<showpoint<<setprecision(2)<<arr[i]<<" ";   
                            }
}
int main(){
    int n;
    cin>>n;
    double arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Initial order: ";
    for(int i=0;i<n;i++){
        cout<<fixed<<showpoint<<setprecision(2)<<arr[i]<<" ";
    }
    cout<<endl;
    insertionsort(arr,n);
    return 0;
}