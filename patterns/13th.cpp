#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    int start=1;
    for(int i=0;i<5;i++){
        cout<<"\n";
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start++;
        }
    }
    return 0;
}