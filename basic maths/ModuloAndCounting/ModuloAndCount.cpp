#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int count =0;
    cout<<"Enter a number :";
    cin>>n;
    cout<<endl;
    while(n>0){
        int lastdigit;
        lastdigit=n%10;
        cout<<lastdigit;
        cout<<endl;
        count++;
        
        n=n/10;
    }
    cout<<endl;
    cout<<"The number of last digits are :"<<count;
    cout<<endl;
    return 0;
}