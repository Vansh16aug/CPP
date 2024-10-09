#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=2*n-1;i++){
        int stars=i;
        cout<<"\n";
        if(i>n) stars=2*n-i;

        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
    }    
    return 0;
}