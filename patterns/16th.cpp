#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5;
    for(int i=0;i<n;i++){
        char ch='A'+i;
        cout<<"\n";
        for(int j=0;j<=i;j++){
            cout<<ch;
        }
    }
    return 0;
}