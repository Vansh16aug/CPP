#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int spaces=2*n-2;       //8

    for(int i=1;i<=2*n-1;i++){     //2*n-1=9
        int stars=i;
        if(i>n) stars=2*n-i;
        //stars 
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=spaces;j++){
            cout<<" ";  
        }
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<"\n";
        if(i<n) spaces-=2;
        else spaces+=2;
    }
    
    return 0;
}