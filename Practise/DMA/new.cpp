#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* a=NULL;
    a=new int;
    cin>>*a ;
    cout<<*a<<endl;
    delete a ;
    cout<<*a;   //garbage value
    return 0;
}