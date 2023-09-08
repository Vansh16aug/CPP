#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<6-i-1;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<6-i-1;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    int inis=2*n-2;

    for(int i=0;i<n;i++){
        
        
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        inis-=2;
        cout<<"\n";
    }
    return 0;
}