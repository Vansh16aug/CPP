#include<bits/stdc++.h>
using namespace std;
int rec(int a){
    int b;
    if(a<=1){
        return 1;
    }
    else{
        b=a*rec(a-1);
        return b;
    }
}
int main()
{
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int fact=rec(n);
    cout<<"Factorial is :"<<fact<<endl;
    return 0;
}