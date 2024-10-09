#include<bits/stdc++.h>
using namespace std;
int main()
{        
    int lastdigit;
    int n;
    int reverse=0;
    cout<<"Enter the number :";
    cin>>n;
    while(n>0){
        int lastdigit;
        lastdigit=n%10;
        
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }
    cout<<"Reversed number is :"<<reverse;

    return 0;
}