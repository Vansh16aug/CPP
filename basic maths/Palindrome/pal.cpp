#include<bits/stdc++.h>
using namespace std;
int main()
{        
    int lastdigit;
    int n;
    int reverse=0;

    cout<<"Enter the number :";
    cin>>n;
    int dup=n;
    
    while(n>0){
        lastdigit=n%10;
        reverse=(reverse*10)+lastdigit;
        n=n/10;
    }

    if(dup==reverse) cout<<"The number is a palindrome";
    else cout<<"The number is not a palindrome";
    return 0;
}