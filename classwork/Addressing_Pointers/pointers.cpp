#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int *p = &a;
    cout<<p<<" "<<&a<<endl;
    cout<<*p<<" "<<a<<endl;
    return 0;
}