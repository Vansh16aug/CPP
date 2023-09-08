#include<iostream>
#include<iomanip>
using namespace std;
int main() {    
    int n,i;   
    float a[100]; 
    cin>>n;   
    for(i=0;n>i;i++)    {     
        cin>>a[i];   
        }    
        cout<<"Initial order: ";   
        for(i=0;n>i;i++)    { 
            cout<<fixed<<showpoint<<setprecision(2)<<a[i]<<" ";   
            }    cout<<endl; 
            for(i=1;n>i;i++)    {  
                float current=a[i];
                int j=i-1;   
                while(a[j]>current && j>=0)    { 
                    a[j+1]=a[j];      
                    j--;   
                    }   
                    a[j+1]=current; 
                    cout<<"After Iteration "<<i<<": "; 
                    for(int k=0;n>k;k++)    {      
                        cout<<fixed<<showpoint<<setprecision(2)<<a[k]<<" ";   
                        }    
                        cout<<endl;}cout<<"Sorted order: ";
                        for(i=0;n>i;i++)   { 
                            cout<<fixed<<showpoint<<setprecision(2)<<a[i]<<" ";  
                            }   
                            return 0;
                            }