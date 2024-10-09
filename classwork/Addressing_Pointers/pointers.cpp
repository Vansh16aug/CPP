#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10;
    int* p = &a;
    cout<<&p<<" "<<&a<<endl;    //  address of 10
    cout<<*p<<" "<<a<<endl;     //  10   10
    return 0;
}


// &->address finding
// *->value at address 