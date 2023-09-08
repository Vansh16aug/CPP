#include<bits/stdc++.h>
using namespace std;
int greatestOfthree(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }
}
int main()
{
    //with parameter and return
    int a,b,c;
    cout<<"Enter first element :";
    cin>>a;
    cout<<"Enter second element :";
    cin>>b;
    cout<<"Enter third element :";
    cin>>c;
    
    int ans=greatestOfthree(a,b,c);
    if(ans==a){
        cout<<"First "<<a<<"element is greatest ";
    }
    else if(ans==b){
        cout<<"Second "<<b<<" element is greatest ";
    }
    else{
        cout<<"Third "<<c<<" element is greatest";
    }
    return 0;
}