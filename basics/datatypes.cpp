#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    long long int y;
    char z;
    float a;
    double b;
    string c;
    string str;
    cout<<"Enter an integer: ";
    cin>>x;
    cout<<"Enter a long long integer: ";
    cin>>y;
    cout<<"Enter a character: ";
    cin>>z;
    cout<<"Enter a float: ";
    cin>>a;
    cout<<"Enter a double: ";
    cin>>b;
    cout<<"Enter a string: ";
    cin>>c;
    cout<<"Again Enter a full string: ";
    getline(cin,str);
    
    cout<<"Integer: "<<x<<"\n";
    cout<<"Long long integer: "<<y<<"\n";
    cout<<"Character: "<<z<<"\n";
    cout<<"Float: "<<a<<"\n";
    cout<<"Double: "<<b<<"\n";
    cout<<"String: "<<c<<"\n";
    cout<<"Full String: "<<str<<"\n";
    return 0;
}