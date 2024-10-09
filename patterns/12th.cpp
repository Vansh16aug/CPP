#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=4;
    int space=2*(n-1);
    for(int i=0;i<=n;i++){
        cout<<"\n";
        //number
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }

        //number
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        space-=2;
    }
    return 0;
}